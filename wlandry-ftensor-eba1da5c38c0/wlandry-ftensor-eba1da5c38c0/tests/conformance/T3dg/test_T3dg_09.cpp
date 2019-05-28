#include "../../../src/FTensor.hpp"
#include "../test_for_zero.hpp"
#include <iostream>
using namespace FTensor;
using namespace std;

void test_T3dg_09(const Tensor1<double, 3> &t1_2,
                  const Tensor2_symmetric<double, 3> &t2s_2,
                  Dg<double, 3, 3> &t3dg_1)
{
  Index<'i', 3> i;
  Index<'j', 3> j;
  Index<'k', 3> k;

  Number<0> N0;
  Number<1> N1;
  Number<2> N2;

  /* Dg tests */

  t3dg_1(i, j, k) = t2s_2(i, j) * t1_2(k);
  test_for_zero(t3dg_1(0, 0, 0) - t2s_2(0, 0) * t1_2(0),
                "T2s(i,j)*T1(k)(0,0,0)");
  test_for_zero(t3dg_1(0, 0, 1) - t2s_2(0, 0) * t1_2(1),
                "T2s(i,j)*T1(k)(0,0,1)");
  test_for_zero(t3dg_1(0, 0, 2) - t2s_2(0, 0) * t1_2(2),
                "T2s(i,j)*T1(k)(0,0,2)");
  test_for_zero(t3dg_1(0, 1, 0) - t2s_2(0, 1) * t1_2(0),
                "T2s(i,j)*T1(k)(0,1,0)");
  test_for_zero(t3dg_1(0, 1, 1) - t2s_2(0, 1) * t1_2(1),
                "T2s(i,j)*T1(k)(0,1,1)");
  test_for_zero(t3dg_1(0, 1, 2) - t2s_2(0, 1) * t1_2(2),
                "T2s(i,j)*T1(k)(0,1,2)");
  test_for_zero(t3dg_1(0, 2, 0) - t2s_2(0, 2) * t1_2(0),
                "T2s(i,j)*T1(k)(0,2,0)");
  test_for_zero(t3dg_1(0, 2, 1) - t2s_2(0, 2) * t1_2(1),
                "T2s(i,j)*T1(k)(0,2,1)");
  test_for_zero(t3dg_1(0, 2, 2) - t2s_2(0, 2) * t1_2(2),
                "T2s(i,j)*T1(k)(0,2,2)");
  test_for_zero(t3dg_1(1, 0, 0) - t2s_2(1, 0) * t1_2(0),
                "T2s(i,j)*T1(k)(1,0,0)");
  test_for_zero(t3dg_1(1, 0, 1) - t2s_2(1, 0) * t1_2(1),
                "T2s(i,j)*T1(k)(1,0,1)");
  test_for_zero(t3dg_1(1, 0, 2) - t2s_2(1, 0) * t1_2(2),
                "T2s(i,j)*T1(k)(1,0,2)");
  test_for_zero(t3dg_1(1, 1, 0) - t2s_2(1, 1) * t1_2(0),
                "T2s(i,j)*T1(k)(1,1,0)");
  test_for_zero(t3dg_1(1, 1, 1) - t2s_2(1, 1) * t1_2(1),
                "T2s(i,j)*T1(k)(1,1,1)");
  test_for_zero(t3dg_1(1, 1, 2) - t2s_2(1, 1) * t1_2(2),
                "T2s(i,j)*T1(k)(1,1,2)");
  test_for_zero(t3dg_1(1, 2, 0) - t2s_2(1, 2) * t1_2(0),
                "T2s(i,j)*T1(k)(1,2,0)");
  test_for_zero(t3dg_1(1, 2, 1) - t2s_2(1, 2) * t1_2(1),
                "T2s(i,j)*T1(k)(1,2,1)");
  test_for_zero(t3dg_1(1, 2, 2) - t2s_2(1, 2) * t1_2(2),
                "T2s(i,j)*T1(k)(1,2,2)");
  test_for_zero(t3dg_1(2, 0, 0) - t2s_2(2, 0) * t1_2(0),
                "T2s(i,j)*T1(k)(2,0,0)");
  test_for_zero(t3dg_1(2, 0, 1) - t2s_2(2, 0) * t1_2(1),
                "T2s(i,j)*T1(k)(2,0,1)");
  test_for_zero(t3dg_1(2, 0, 2) - t2s_2(2, 0) * t1_2(2),
                "T2s(i,j)*T1(k)(2,0,2)");
  test_for_zero(t3dg_1(2, 1, 0) - t2s_2(2, 1) * t1_2(0),
                "T2s(i,j)*T1(k)(2,1,0)");
  test_for_zero(t3dg_1(2, 1, 1) - t2s_2(2, 1) * t1_2(1),
                "T2s(i,j)*T1(k)(2,1,1)");
  test_for_zero(t3dg_1(2, 1, 2) - t2s_2(2, 1) * t1_2(2),
                "T2s(i,j)*T1(k)(2,1,2)");
  test_for_zero(t3dg_1(2, 2, 0) - t2s_2(2, 2) * t1_2(0),
                "T2s(i,j)*T1(k)(2,2,0)");
  test_for_zero(t3dg_1(2, 2, 1) - t2s_2(2, 2) * t1_2(1),
                "T2s(i,j)*T1(k)(2,2,1)");
  test_for_zero(t3dg_1(2, 2, 2) - t2s_2(2, 2) * t1_2(2),
                "T2s(i,j)*T1(k)(2,2,2)");
}
