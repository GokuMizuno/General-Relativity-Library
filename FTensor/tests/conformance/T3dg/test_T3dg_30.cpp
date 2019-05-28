#include "../../../src/FTensor.hpp"
#include "../test_for_zero.hpp"
#include <iostream>
using namespace GRLib;
using namespace std;

void test_T3dg_30(Tensor1<double, 3> &t1_1,
                  const Tensor2_symmetric<double, 3> &t2s_2,
                  const Dg<double, 3, 3> &t3dg_2)
{
  Index<'i', 3> i;
  Index<'j', 3> j;
  Index<'k', 3> k;

  Number<0> N0;
  Number<1> N1;
  Number<2> N2;

  /* Dg tests */

  t1_1(i) = t3dg_2(i, j, k) * t2s_2(j, k);
  test_for_zero(
    t1_1(0)
      - (t3dg_2(0, 0, 0) * t2s_2(0, 0) + t3dg_2(0, 0, 1) * t2s_2(0, 1)
         + t3dg_2(0, 0, 2) * t2s_2(0, 2) + t3dg_2(0, 1, 0) * t2s_2(1, 0)
         + t3dg_2(0, 1, 1) * t2s_2(1, 1) + t3dg_2(0, 1, 2) * t2s_2(1, 2)
         + t3dg_2(0, 2, 0) * t2s_2(2, 0) + t3dg_2(0, 2, 1) * t2s_2(2, 1)
         + t3dg_2(0, 2, 2) * t2s_2(2, 2)),
    "T3dg(i,j,k)*T2s(j,k)(0)");
  test_for_zero(
    t1_1(1)
      - (t3dg_2(1, 0, 0) * t2s_2(0, 0) + t3dg_2(1, 0, 1) * t2s_2(0, 1)
         + t3dg_2(1, 0, 2) * t2s_2(0, 2) + t3dg_2(1, 1, 0) * t2s_2(1, 0)
         + t3dg_2(1, 1, 1) * t2s_2(1, 1) + t3dg_2(1, 1, 2) * t2s_2(1, 2)
         + t3dg_2(1, 2, 0) * t2s_2(2, 0) + t3dg_2(1, 2, 1) * t2s_2(2, 1)
         + t3dg_2(1, 2, 2) * t2s_2(2, 2)),
    "T3dg(i,j,k)*T2s(j,k)(1)");
  test_for_zero(
    t1_1(2)
      - (t3dg_2(2, 0, 0) * t2s_2(0, 0) + t3dg_2(2, 0, 1) * t2s_2(0, 1)
         + t3dg_2(2, 0, 2) * t2s_2(0, 2) + t3dg_2(2, 1, 0) * t2s_2(1, 0)
         + t3dg_2(2, 1, 1) * t2s_2(1, 1) + t3dg_2(2, 1, 2) * t2s_2(1, 2)
         + t3dg_2(2, 2, 0) * t2s_2(2, 0) + t3dg_2(2, 2, 1) * t2s_2(2, 1)
         + t3dg_2(2, 2, 2) * t2s_2(2, 2)),
    "T3dg(i,j,k)*T2s(j,k)(2)");

  t1_1(i) = t2s_2(j, k) * t3dg_2(i, j, k);
  test_for_zero(
    t1_1(0)
      - (t3dg_2(0, 0, 0) * t2s_2(0, 0) + t3dg_2(0, 0, 1) * t2s_2(0, 1)
         + t3dg_2(0, 0, 2) * t2s_2(0, 2) + t3dg_2(0, 1, 0) * t2s_2(1, 0)
         + t3dg_2(0, 1, 1) * t2s_2(1, 1) + t3dg_2(0, 1, 2) * t2s_2(1, 2)
         + t3dg_2(0, 2, 0) * t2s_2(2, 0) + t3dg_2(0, 2, 1) * t2s_2(2, 1)
         + t3dg_2(0, 2, 2) * t2s_2(2, 2)),
    "T2s(j,k)*T3dg(i,j,k)(0)");
  test_for_zero(
    t1_1(1)
      - (t3dg_2(1, 0, 0) * t2s_2(0, 0) + t3dg_2(1, 0, 1) * t2s_2(0, 1)
         + t3dg_2(1, 0, 2) * t2s_2(0, 2) + t3dg_2(1, 1, 0) * t2s_2(1, 0)
         + t3dg_2(1, 1, 1) * t2s_2(1, 1) + t3dg_2(1, 1, 2) * t2s_2(1, 2)
         + t3dg_2(1, 2, 0) * t2s_2(2, 0) + t3dg_2(1, 2, 1) * t2s_2(2, 1)
         + t3dg_2(1, 2, 2) * t2s_2(2, 2)),
    "T2s(j,k)*T3dg(i,j,k)(1)");
  test_for_zero(
    t1_1(2)
      - (t3dg_2(2, 0, 0) * t2s_2(0, 0) + t3dg_2(2, 0, 1) * t2s_2(0, 1)
         + t3dg_2(2, 0, 2) * t2s_2(0, 2) + t3dg_2(2, 1, 0) * t2s_2(1, 0)
         + t3dg_2(2, 1, 1) * t2s_2(1, 1) + t3dg_2(2, 1, 2) * t2s_2(1, 2)
         + t3dg_2(2, 2, 0) * t2s_2(2, 0) + t3dg_2(2, 2, 1) * t2s_2(2, 1)
         + t3dg_2(2, 2, 2) * t2s_2(2, 2)),
    "T2s(j,k)*T3dg(i,j,k)(2)");
}
