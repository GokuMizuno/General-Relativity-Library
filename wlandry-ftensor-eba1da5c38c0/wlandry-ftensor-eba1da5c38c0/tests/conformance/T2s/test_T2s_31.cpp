#include "../../../src/FTensor.hpp"
#include "../test_for_zero.hpp"
#include <iostream>
using namespace FTensor;
using namespace std;

void test_T2s_31(Tensor2<double, 3, 3> &t2_1,
                 const Tensor2<double, 3, 3> &t2_2,
                 const Tensor2_symmetric<double, 3> &t2s_2)
{
  Index<'i', 3> i;
  Index<'j', 3> j;

  Number<0> N0;
  Number<1> N1;
  Number<2> N2;

  /* Tensor2_symmetric tests */

  t2_1(i, j) = t2s_2(i, j) + t2_2(j, i);
  test_for_zero(t2_1(0, 0) - (t2s_2(0, 0) + t2_2(0, 0)),
                "T2s(i,j)+T2(j,i)(0,0)");
  test_for_zero(t2_1(0, 1) - (t2s_2(0, 1) + t2_2(1, 0)),
                "T2s(i,j)+T2(j,i)(0,1)");
  test_for_zero(t2_1(0, 2) - (t2s_2(0, 2) + t2_2(2, 0)),
                "T2s(i,j)+T2(j,i)(0,2)");
  test_for_zero(t2_1(1, 0) - (t2s_2(1, 0) + t2_2(0, 1)),
                "T2s(i,j)+T2(j,i)(1,0)");
  test_for_zero(t2_1(1, 1) - (t2s_2(1, 1) + t2_2(1, 1)),
                "T2s(i,j)+T2(j,i)(1,1)");
  test_for_zero(t2_1(1, 2) - (t2s_2(1, 2) + t2_2(2, 1)),
                "T2s(i,j)+T2(j,i)(1,2)");
  test_for_zero(t2_1(2, 0) - (t2s_2(2, 0) + t2_2(0, 2)),
                "T2s(i,j)+T2(j,i)(2,0)");
  test_for_zero(t2_1(2, 1) - (t2s_2(2, 1) + t2_2(1, 2)),
                "T2s(i,j)+T2(j,i)(2,1)");
  test_for_zero(t2_1(2, 2) - (t2s_2(2, 2) + t2_2(2, 2)),
                "T2s(i,j)+T2(j,i)(2,2)");
  t2_1(i, j) = t2_2(j, i) + t2s_2(i, j);
  test_for_zero(t2_1(0, 0) - (t2s_2(0, 0) + t2_2(0, 0)),
                "T2(j,i)+T2s(i,j)(0,0)");
  test_for_zero(t2_1(0, 1) - (t2s_2(0, 1) + t2_2(1, 0)),
                "T2(j,i)+T2s(i,j)(0,1)");
  test_for_zero(t2_1(0, 2) - (t2s_2(0, 2) + t2_2(2, 0)),
                "T2(j,i)+T2s(i,j)(0,2)");
  test_for_zero(t2_1(1, 0) - (t2s_2(1, 0) + t2_2(0, 1)),
                "T2(j,i)+T2s(i,j)(1,0)");
  test_for_zero(t2_1(1, 1) - (t2s_2(1, 1) + t2_2(1, 1)),
                "T2(j,i)+T2s(i,j)(1,1)");
  test_for_zero(t2_1(1, 2) - (t2s_2(1, 2) + t2_2(2, 1)),
                "T2(j,i)+T2s(i,j)(1,2)");
  test_for_zero(t2_1(2, 0) - (t2s_2(2, 0) + t2_2(0, 2)),
                "T2(j,i)+T2s(i,j)(2,0)");
  test_for_zero(t2_1(2, 1) - (t2s_2(2, 1) + t2_2(1, 2)),
                "T2(j,i)+T2s(i,j)(2,1)");
  test_for_zero(t2_1(2, 2) - (t2s_2(2, 2) + t2_2(2, 2)),
                "T2(j,i)+T2s(i,j)(2,2)");
}
