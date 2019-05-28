# General-Relativity-Library

This library is built on a modified FTensor library.  The FTensor library, built by Walter Landry, is a simple, fast abstract set of classes that represent tensors.  It is tested with ranks 0 through 4 tensors, and has basic Riemann, and Christoffel symbols.

The expanded library had dot, double dot, cross, and wedge products for both vectors, and tensors.

Their useage is, a = cross(b,c), where a, b, c, are all the same rank.  The alternate use is cross(*tensor, rank, *tensor, rank) where the rank is for the preceding tensor.

Other objects in the library

Special Relativity
	Rapidity, Lorentz transformations

Astrophysical objects

Black Holes - Schwartzchild, Kerr, Reissner-Nordstrom, and Kerr-Newman


