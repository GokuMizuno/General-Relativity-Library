#include "../../../src/FTensor.hpp"
#include "../test_for_zero.hpp"
#include <iostream>
using namespace GRLib;
using namespace std;

void test_T2_05(const Tensor2<double, 3, 3> &t2_1)
{
  Index<'i', 3> i;
  Index<'j', 3> j;

  Number<0> N0;
  Number<1> N1;
  Number<2> N2;

  /* Tensor2 tests */
  Tensor2<double, 3, 3> t2;
  t2(i, j) = t2_1(i, j);

  t2(N0, i) -= 10;
  t2(N1, i) -= 29;
  t2(N2, i) -= 48;
  test_for_zero(t2(0, 0) - (t2_1(0, 0) - 10), "T2(N,i)-=T(0,0)");
  test_for_zero(t2(0, 1) - (t2_1(0, 1) - 10), "T2(N,i)-=T(0,1)");
  test_for_zero(t2(0, 2) - (t2_1(0, 2) - 10), "T2(N,i)-=T(0,2)");
  test_for_zero(t2(1, 0) - (t2_1(1, 0) - 29), "T2(N,i)-=T(1,0)");
  test_for_zero(t2(1, 1) - (t2_1(1, 1) - 29), "T2(N,i)-=T(1,1)");
  test_for_zero(t2(1, 2) - (t2_1(1, 2) - 29), "T2(N,i)-=T(1,2)");
  test_for_zero(t2(2, 0) - (t2_1(2, 0) - 48), "T2(N,i)-=T(2,0)");
  test_for_zero(t2(2, 1) - (t2_1(2, 1) - 48), "T2(N,i)-=T(2,1)");
  test_for_zero(t2(2, 2) - (t2_1(2, 2) - 48), "T2(N,i)-=T(2,2)");
}
