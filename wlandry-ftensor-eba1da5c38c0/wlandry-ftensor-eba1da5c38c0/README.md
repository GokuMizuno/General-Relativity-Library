FTensor
=======

FTensor is a set of C++ classes that allow a great deal of
abstraction when dealing with tensors, yet delivers uncompromising
efficiency.  It uses template expressions to provide expressiveness
and speed.

FTensor is free software; you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by the
Free Software Foundation; either version 2 of the License, or (at your
option) any later version.  A copy of the license should be included
in the file LICENSE.

FTensor uses template expressions to optimize code.  I owe a huge debt
to Todd Veldhuizen who originally used template expressions in
developing the Blitz library (see www.oonumerics.org).  FTensor uses
many of the ideas from that library.

FTensor's biggest claim to fame is that it handles implicit summation.
Thus you can write

    A(i,j) = B(i,k)*C(k,j)

instead of having to write

    A = sum(B(i,k)*C(k,j),k)

Also, the result is strongly typed by the indices, so you can't write

    A(i,k) = B(i,k)*C(k,j)

or even

    A = B(i,k)*C(k,j)

It has `Tensor0`, `Tensor1`, `Tensor2`, `Tensor2_symmetric`, `Dg`
(Rank 3 symmetric on the first two indices), `Tensor3_antisymmetric`
(antisymmetric on the last two indices), `Christof` (Rank 3 symmetric
on the last two indices), `Ddg` (Rank 4 symmetric on the first two,
and last two, indices), `Riemann` (Rank 4 antisymmetric on the first
two, and last two, indices, and symmetric under cyclic permutation of
the last three indices) and `Tensor4`. This eclectic choice of tensors
happened because the library was originally developed for a General
Relativity code.

The dimension of the tensors are determined by a template parameter.
You can construct a Tensor like this.

    Tensor1<double,5> T1 {0,1,2,3,4};

The order of the elements in the constructors follow row-major convention. 
For example in a `Tensor3`, data elements are as follow:
    
    Tensor3<int,N,M,P> {d000, d001, ..., d00P,
                        d010, d011, ..., d0MP,
                        d100, d101, ..., dNMP}

If you want to turn on bounds checking (so
that, for example, `T1(5)` will give you a run time error) then compile
everything with `FTENSOR_DEBUG` defined.

It can handle pointers.  So you could write

    double a0[10000], a1[10000], a2[10000], b0[10000], b1[10000], b2[10000],
     c0[10000], c1[10000], c2[10000];
    
    Tensor1<double*,3> A(a0,a1,a2), B(b0,b1,b2), C(c0,c1,c2);

    Index<'i'> i;
    for(int a=0;a<10000;a++)
    {
      A(i)=B(i)+C(i);
      ++A;
      ++B;
      ++C;
    }

If you are familiar with Blitz, it also uses template expressions to
optimize code.  However, Blitz optimizes one expression at a time.
So, for example, if you want to invert a 3x3 matrix, you can write it
like

    det=a(0,0)*a(1,1)*a(2,2) 
        + a(1,0)*a(2,1)*a(0,2) 
        + a(2,0)*a(0,1)*a(1,2)
        - a(0,0)*a(2,1)*a(1,2)
        - a(1,0)*a(0,1)*a(2,2)
        - a(2,0)*a(1,1)*a(0,2);
    inverse(0,0)= (a(1,1)*a(2,2) - a(1,2)*a(1,2))/det;
    inverse(0,1)= (a(0,2)*a(1,2) - a(0,1)*a(2,2))/det;
    inverse(0,2)= (a(0,1)*a(1,2) - a(0,2)*a(1,1))/det;
    inverse(1,1)= (a(0,0)*a(2,2) - a(0,2)*a(0,2))/det;
    inverse(1,2)= (a(0,2)*a(0,1) - a(0,0)*a(1,2))/det;
    inverse(2,2)= (a(1,1)*a(0,0) - a(1,0)*a(1,0))/det;

However, `det` is just going to be thrown away at the end.  We don't
need to store it for all (10,000 or whatever) points.  We just need to
compute it for one point, use it in six expressions, and forget it.
The Blitz method makes you ship the memory of `det` in and out of the
cache 6 times.  A better way to do this is to put the whole inversion
into one loop.  I've seen a factor of 4 improvement doing it this way.
The disadvantages, which are all-too-real, are that you have to
manually start the loop, and you have to remember to increment the
variables.  In the case of the inversion, it ends up looking like

    double det;
    for(int i=0;i<10000;i++
    {
        det=a(0,0)*a(1,1)*a(2,2) 
        + a(1,0)*a(2,1)*a(0,2) 
        + a(2,0)*a(0,1)*a(1,2)
        - a(0,0)*a(2,1)*a(1,2)
        - a(1,0)*a(0,1)*a(2,2)
        - a(2,0)*a(1,1)*a(0,2);
        inverse(0,0)= (a(1,1)*a(2,2) - a(1,2)*a(1,2))/det;
        inverse(0,1)= (a(0,2)*a(1,2) - a(0,1)*a(2,2))/det;
        inverse(0,2)= (a(0,1)*a(1,2) - a(0,2)*a(1,1))/det;
        inverse(1,1)= (a(0,0)*a(2,2) - a(0,2)*a(0,2))/det;
        inverse(1,2)= (a(0,2)*a(0,1) - a(0,0)*a(1,2))/det;
        inverse(2,2)= (a(1,1)*a(0,0) - a(1,0)*a(1,0))/det;
        ++a;
        ++inverse;
    }
    
Forgetting to put in the ++ operators could result in subtle bugs.
You could also have problems if you put in more than one loop:

    for(int i=0;i<10000;i++)
    {
        a(i,j)=...
        ++a;
    }

    for(int i=0;i<10000;i++)
    {
        a(i,j)+=...
        ++a;
    }

This will end up writing off of the end of a.  Furthermore, I use the
`restrict` keyword, so you might get some weird problems if you try to
alias things.  You might want to `#define` the `restrict` away.  I found
that it actually decreased performance for extremely complicated
expressions.

Basically, you're giving up some expressive power.

It can handle quite complex expressions.  As a real life example

    K_new(i,j)=Lapse*(R(i,j) + Trace_K*K(i,j) - (2*K(i,k)^K_mix(k,j)) 
                - 0.5*matter_ADM*g(i,j) - S_ADM(i,j))
                + Shift_up(k)*dK(i,j,k)
                + (K(i,k)*dShift_up(k,j) || K(j,k)*dShift_up(k,i))
                - ddLapse(i,j) + (dLapse(k)*christof(k,i,j));

`K_new` is symmetric, the ^ operator means contract to make a
`Tensor2_symmetric`, and the || means add to make a `Tensor2_symmetric`
(it is not a symmetrizer, so it doesn't divide by 2).  I had to use
these operators (instead of * and +) to keep the compilers from making
a `Tensor2` instead.  You can't assign a `Tensor2` to a `Tensor2_symmetric`,
so you have to explicitly request the symmetrized result.

Some compilers were able to optimize the entire expression.  The page at 

   http://www.wlandry.net/Projects/FTensor

has a more complete discussion of compilers and performance.

There is a directory for tests with a README that should explain how
to use them.

If you have any questions, feedback, bug reports, feature requests,
etc., feel free to send me an email.

Enjoy,
Walter Landry
wlandry@caltech.edu

