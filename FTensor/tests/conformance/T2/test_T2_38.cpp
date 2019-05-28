#include "../../../src/FTensor.hpp"
#include "../test_for_zero.hpp"
#include <iostream>
using namespace GRLib;
using namespace std;

void test_T2_38()
{
  Number<0> N0;
  Number<1> N1;
  Number<2> N2;

  /* Tensor2 tests */

  /* Checking whether functors work */

  Tensor2<complex<double>, 2, 2> t1(
    complex<double>(1, 2), complex<double>(3, 4), complex<double>(5, 6),
    complex<double>(7, 8));

  Index<'a', 2> a;
  Index<'b', 2> b;

  /* I have this function pointer defined here because I can't seem to
     make the compiler understand what kind of function I have.
     Unless I do casts, which are ugly. It seems to have something to
     do with conj being a templated function. */

  complex<double> (*cj)(const complex<double> &);
  cj = &(conj<double>);

  test_for_zero(
    conj(t1(0, 0))
      - transform(t1(a, b),
                  static_cast<complex<double> (*)(const complex<double> &)>(
                    &(conj<double>)))(0, 0),
    "transform(T2)(0,0) cast");
  test_for_zero(
    conj(t1(0, 1))
      - transform(t1(a, b),
                  static_cast<complex<double> (*)(const complex<double> &)>(
                    &(conj<double>)))(0, 1),
    "transform(T2)(0,1) cast");
  test_for_zero(
    conj(t1(1, 0))
      - transform(t1(a, b),
                  static_cast<complex<double> (*)(const complex<double> &)>(
                    &(conj<double>)))(1, 0),
    "transform(T2)(1,0) cast");
  test_for_zero(
    conj(t1(1, 1))
      - transform(t1(a, b),
                  static_cast<complex<double> (*)(const complex<double> &)>(
                    &(conj<double>)))(1, 1),
    "transform(T2)(1,1) cast");
  test_for_zero(conj(t1(0, 0)) - transform(t1(a, b), cj)(0, 0),
                "transform(T2)(0,0)");
  test_for_zero(conj(t1(0, 1)) - transform(t1(a, b), cj)(0, 1),
                "transform(T2)(0,1)");
  test_for_zero(conj(t1(1, 0)) - transform(t1(a, b), cj)(1, 0),
                "transform(T2)(1,0)");
  test_for_zero(conj(t1(1, 1)) - transform(t1(a, b), cj)(1, 1),
                "transform(T2)(1,1)");

  /* Check plain old conj */

  test_for_zero(conj(t1(0, 0)) - conj(t1(a, b))(0, 0), "conj(T2)(0,0)");
  test_for_zero(conj(t1(0, 1)) - conj(t1(a, b))(0, 1), "conj(T2)(0,1)");
  test_for_zero(conj(t1(1, 0)) - conj(t1(a, b))(1, 0), "conj(T2)(1,0)");
  test_for_zero(conj(t1(1, 1)) - conj(t1(a, b))(1, 1), "conj(T2)(1,1)");
}
