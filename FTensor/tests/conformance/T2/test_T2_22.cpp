#include "../../../src/FTensor.hpp"
#include "../test_for_zero.hpp"
#include <iostream>
using namespace GRLib;
using namespace std;

void test_T2_22(const Tensor2<double, 3, 3> &t2_1)
{
  Index<'i', 3> i;
  Index<'j', 3> j;

  Number<0> N0;
  Number<1> N1;
  Number<2> N2;

  /* Tensor2 tests */
  Tensor2<double, 3, 3> t2;

  /* Equals */

  t2(i, j) = t2_1(i, j);
  t2(i, j) += 10;
  test_for_zero(t2(0, 0) - (t2_1(0, 0) + 10), "T2+=T(0,0)");
  test_for_zero(t2(1, 0) - (t2_1(1, 0) + 10), "T2+=T(0,1)");
  test_for_zero(t2(2, 0) - (t2_1(2, 0) + 10), "T2+=T(0,2)");
  test_for_zero(t2(0, 1) - (t2_1(0, 1) + 10), "T2+=T(1,0)");
  test_for_zero(t2(1, 1) - (t2_1(1, 1) + 10), "T2+=T(1,1)");
  test_for_zero(t2(2, 1) - (t2_1(2, 1) + 10), "T2+=T(1,2)");
  test_for_zero(t2(0, 2) - (t2_1(0, 2) + 10), "T2+=T(2,0)");
  test_for_zero(t2(1, 2) - (t2_1(1, 2) + 10), "T2+=T(2,1)");
  test_for_zero(t2(2, 2) - (t2_1(2, 2) + 10), "T2+=T(2,2)");

  t2(i, j) = t2_1(i, j);
  t2(i, j) -= 7;
  test_for_zero(t2(0, 0) - (t2_1(0, 0) - 7), "T2-=T(0,0)");
  test_for_zero(t2(1, 0) - (t2_1(1, 0) - 7), "T2-=T(0,1)");
  test_for_zero(t2(2, 0) - (t2_1(2, 0) - 7), "T2-=T(0,2)");
  test_for_zero(t2(0, 1) - (t2_1(0, 1) - 7), "T2-=T(1,0)");
  test_for_zero(t2(1, 1) - (t2_1(1, 1) - 7), "T2-=T(1,1)");
  test_for_zero(t2(2, 1) - (t2_1(2, 1) - 7), "T2-=T(1,2)");
  test_for_zero(t2(0, 2) - (t2_1(0, 2) - 7), "T2-=T(2,0)");
  test_for_zero(t2(1, 2) - (t2_1(1, 2) - 7), "T2-=T(2,1)");
  test_for_zero(t2(2, 2) - (t2_1(2, 2) - 7), "T2-=T(2,2)");

  t2(i, j) = t2_1(i, j);
  t2(i, j) *= 12;
  test_for_zero(t2(0, 0) - (t2_1(0, 0) * 12), "T2*=T(0,0)");
  test_for_zero(t2(1, 0) - (t2_1(1, 0) * 12), "T2*=T(0,1)");
  test_for_zero(t2(2, 0) - (t2_1(2, 0) * 12), "T2*=T(0,2)");
  test_for_zero(t2(0, 1) - (t2_1(0, 1) * 12), "T2*=T(1,0)");
  test_for_zero(t2(1, 1) - (t2_1(1, 1) * 12), "T2*=T(1,1)");
  test_for_zero(t2(2, 1) - (t2_1(2, 1) * 12), "T2*=T(1,2)");
  test_for_zero(t2(0, 2) - (t2_1(0, 2) * 12), "T2*=T(2,0)");
  test_for_zero(t2(1, 2) - (t2_1(1, 2) * 12), "T2*=T(2,1)");
  test_for_zero(t2(2, 2) - (t2_1(2, 2) * 12), "T2*=T(2,2)");

  t2(i, j) = t2_1(i, j);
  t2(i, j) /= 4;
  test_for_zero(t2(0, 0) - (t2_1(0, 0) / 4), "T2/=T(0,0)");
  test_for_zero(t2(1, 0) - (t2_1(1, 0) / 4), "T2/=T(0,1)");
  test_for_zero(t2(2, 0) - (t2_1(2, 0) / 4), "T2/=T(0,2)");
  test_for_zero(t2(0, 1) - (t2_1(0, 1) / 4), "T2/=T(1,0)");
  test_for_zero(t2(1, 1) - (t2_1(1, 1) / 4), "T2/=T(1,1)");
  test_for_zero(t2(2, 1) - (t2_1(2, 1) / 4), "T2/=T(1,2)");
  test_for_zero(t2(0, 2) - (t2_1(0, 2) / 4), "T2/=T(2,0)");
  test_for_zero(t2(1, 2) - (t2_1(1, 2) / 4), "T2/=T(2,1)");
  test_for_zero(t2(2, 2) - (t2_1(2, 2) / 4), "T2/=T(2,2)");
}
