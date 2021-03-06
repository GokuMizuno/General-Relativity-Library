There are two kinds of tests in these directories.  The tests in
conformance exercise almost all of the possible operations (it doesn't
fully exercise the Riemann class, but that class has other problems,
such as not being dimension-independent).  The tests in speed compare
how fast the FTensor's are compared to ordinary arrays.

You may have to edit the Makefile's in each of the directories to set
the compiler (CXX) and its flags (CXXFLAGS).  You can set optimization
options only by changing (CXXOPTIMIZE).  Alternately, you can specify
them on the command line, as in

	make CXX=<compiler> CXXOPTIMIZE="<flags>" test_compiler

The default compiler is g++.

In the speed directory, there is a makefile.vc specifically for Nmake
and Microsoft Visual Studio.  You will need to open a Visual Studio
command line and build it with

  NMAKE /f makefile.vc

conformance
-----------

Once the Makefile is set to your satisfaction, running the tests in
conformance should be as simple as typing

	make
	test_all > test_results

The file "test_results" will contain thousands of lines which should
say

PASS: (unique name of test)

If a test fails, it will print out

FAIL: (unique name of test)

None of the tests should fail.


speed
-----

Running the tests in speed should just be

	one_over_script

in Linux and

        one_over_ps.ps1

in Windows Powershell.

This will compile all of the programs and then run them.  It will time
each one, with the output looking like

	fast 1
	
	real    0m9.866s
	user    0m9.720s
	sys     0m0.000s
	Tensor 1
	
	real    0m19.891s
	user    0m19.740s
	sys     0m0.040s
	.
	.
	.

and then followed by a series of lines that say PASS: (unique name) or
FAIL:(unique name).

This is timing two different implementations of an equation.  One uses
ordinary arrays, and the other uses FTensor's.  As you can see, the
FTensor implementation can be much slower than the ordinary array.  It
depends on the compiler.  The PASS and FAIL messages are calculated by
comparing the final results of the two computations.  All of the tests
should pass.

---------------------------

The conformance tests check almost all of the possible operations to
make sure that they are coded correctly and the compiler didn't do
anything funny.  If you're just interested in testing your compiler, a
quick and dirty method is to make just the "little" and "littlefast"
executables in the speed directory.  If it compiles, they should
output the same thing:

	7e+08 9e+08 1.1e+09

A more complete test is to make "test_compiler" in the conformance
directory.  This will make a subset of the complete conformance test,
enough to check every construct that is used in the code.  It should
compile much faster, especially with optimizations.

