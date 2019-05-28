#include "../../../src/FTensor.hpp"
#include "../test_for_zero.hpp"
#include <iostream>
using namespace FTensor;
using namespace std;

void test_T3dg_17(const Tensor1<double, 3> &t1_2,
                  Tensor2_symmetric<double, 3> &t2s_1,
                  const Dg<double, 3, 3> &t3dg_2,
                  const Dg<double, 3, 3> &t3dg_3)
{
  Index<'i', 3> i;
  Index<'j', 3> j;
  Index<'k', 3> k;

  Number<0> N0;
  Number<1> N1;
  Number<2> N2;

  /* Dg tests */

  t2s_1(i, j) = t3dg_2(i, j, k) * t1_2(k);
  test_for_zero(t2s_1(0, 0)
                  - (t3dg_2(0, 0, 0) * t1_2(0) + t3dg_2(0, 0, 1) * t1_2(1)
                     + t3dg_2(0, 0, 2) * t1_2(2)),
                "T3dg(i,j,k)*T1(k)(0,0)");
  test_for_zero(t2s_1(0, 1)
                  - (t3dg_2(0, 1, 0) * t1_2(0) + t3dg_2(0, 1, 1) * t1_2(1)
                     + t3dg_2(0, 1, 2) * t1_2(2)),
                "T3dg(i,j,k)*T1(k)(0,1)");
  test_for_zero(t2s_1(0, 2)
                  - (t3dg_2(0, 2, 0) * t1_2(0) + t3dg_2(0, 2, 1) * t1_2(1)
                     + t3dg_2(0, 2, 2) * t1_2(2)),
                "T3dg(i,j,k)*T1(k)(0,2)");
  test_for_zero(t2s_1(1, 0)
                  - (t3dg_2(1, 0, 0) * t1_2(0) + t3dg_2(1, 0, 1) * t1_2(1)
                     + t3dg_2(1, 0, 2) * t1_2(2)),
                "T3dg(i,j,k)*T1(k)(1,0)");
  test_for_zero(t2s_1(1, 1)
                  - (t3dg_2(1, 1, 0) * t1_2(0) + t3dg_2(1, 1, 1) * t1_2(1)
                     + t3dg_2(1, 1, 2) * t1_2(2)),
                "T3dg(i,j,k)*T1(k)(1,1)");
  test_for_zero(t2s_1(1, 2)
                  - (t3dg_2(1, 2, 0) * t1_2(0) + t3dg_2(1, 2, 1) * t1_2(1)
                     + t3dg_2(1, 2, 2) * t1_2(2)),
                "T3dg(i,j,k)*T1(k)(1,2)");
  test_for_zero(t2s_1(2, 0)
                  - (t3dg_2(2, 0, 0) * t1_2(0) + t3dg_2(2, 0, 1) * t1_2(1)
                     + t3dg_2(2, 0, 2) * t1_2(2)),
                "T3dg(i,j,k)*T1(k)(2,0)");
  test_for_zero(t2s_1(2, 1)
                  - (t3dg_2(2, 1, 0) * t1_2(0) + t3dg_2(2, 1, 1) * t1_2(1)
                     + t3dg_2(2, 1, 2) * t1_2(2)),
                "T3dg(i,j,k)*T1(k)(2,1)");
  test_for_zero(t2s_1(2, 2)
                  - (t3dg_2(2, 2, 0) * t1_2(0) + t3dg_2(2, 2, 1) * t1_2(1)
                     + t3dg_2(2, 2, 2) * t1_2(2)),
                "T3dg(i,j,k)*T1(k)(2,2)");

  t2s_1(i, j) = t1_2(k) * t3dg_3(i, j, k);
  test_for_zero(t2s_1(0, 0)
                  - (t3dg_3(0, 0, 0) * t1_2(0) + t3dg_3(0, 0, 1) * t1_2(1)
                     + t3dg_3(0, 0, 2) * t1_2(2)),
                "T1(k)*T3dg(i,j,k)(0,0)");
  test_for_zero(t2s_1(0, 1)
                  - (t3dg_3(0, 1, 0) * t1_2(0) + t3dg_3(0, 1, 1) * t1_2(1)
                     + t3dg_3(0, 1, 2) * t1_2(2)),
                "T1(k)*T3dg(i,j,k)(0,1)");
  test_for_zero(t2s_1(0, 2)
                  - (t3dg_3(0, 2, 0) * t1_2(0) + t3dg_3(0, 2, 1) * t1_2(1)
                     + t3dg_3(0, 2, 2) * t1_2(2)),
                "T1(k)*T3dg(i,j,k)(0,2)");
  test_for_zero(t2s_1(1, 0)
                  - (t3dg_3(1, 0, 0) * t1_2(0) + t3dg_3(1, 0, 1) * t1_2(1)
                     + t3dg_3(1, 0, 2) * t1_2(2)),
                "T1(k)*T3dg(i,j,k)(1,0)");
  test_for_zero(t2s_1(1, 1)
                  - (t3dg_3(1, 1, 0) * t1_2(0) + t3dg_3(1, 1, 1) * t1_2(1)
                     + t3dg_3(1, 1, 2) * t1_2(2)),
                "T1(k)*T3dg(i,j,k)(1,1)");
  test_for_zero(t2s_1(1, 2)
                  - (t3dg_3(1, 2, 0) * t1_2(0) + t3dg_3(1, 2, 1) * t1_2(1)
                     + t3dg_3(1, 2, 2) * t1_2(2)),
                "T1(k)*T3dg(i,j,k)(1,2)");
  test_for_zero(t2s_1(2, 0)
                  - (t3dg_3(2, 0, 0) * t1_2(0) + t3dg_3(2, 0, 1) * t1_2(1)
                     + t3dg_3(2, 0, 2) * t1_2(2)),
                "T1(k)*T3dg(i,j,k)(2,0)");
  test_for_zero(t2s_1(2, 1)
                  - (t3dg_3(2, 1, 0) * t1_2(0) + t3dg_3(2, 1, 1) * t1_2(1)
                     + t3dg_3(2, 1, 2) * t1_2(2)),
                "T1(k)*T3dg(i,j,k)(2,1)");
  test_for_zero(t2s_1(2, 2)
                  - (t3dg_3(2, 2, 0) * t1_2(0) + t3dg_3(2, 2, 1) * t1_2(1)
                     + t3dg_3(2, 2, 2) * t1_2(2)),
                "T1(k)*T3dg(i,j,k)(2,2)");
}
