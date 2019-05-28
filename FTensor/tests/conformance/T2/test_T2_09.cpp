#include "../../../src/FTensor.hpp"
#include "../test_for_zero.hpp"
#include <iostream>
using namespace GRLib;
using namespace std;

void test_T2_09()
{
  Index<'i', 3> i;

  Number<0> N0;
  Number<1> N1;
  Number<2> N2;

  /* Tensor2 tests */
  Tensor2<double, 3, 3> t2;

  t2(i, N0) = 10;
  t2(i, N1) = 11;
  t2(i, N2) = 12;
  test_for_zero(t2(0, 0) - 10, "T2(i,N)=T(0,0)");
  test_for_zero(t2(1, 0) - 10, "T2(i,N)=T(1,0)");
  test_for_zero(t2(2, 0) - 10, "T2(i,N)=T(2,0)");
  test_for_zero(t2(0, 1) - 11, "T2(i,N)=T(0,1)");
  test_for_zero(t2(1, 1) - 11, "T2(i,N)=T(1,1)");
  test_for_zero(t2(2, 1) - 11, "T2(i,N)=T(2,1)");
  test_for_zero(t2(0, 2) - 12, "T2(i,N)=T(0,2)");
  test_for_zero(t2(1, 2) - 12, "T2(i,N)=T(1,2)");
  test_for_zero(t2(2, 2) - 12, "T2(i,N)=T(2,2)");
}
