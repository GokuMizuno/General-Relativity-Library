#include "../../../src/FTensor.hpp"
#include "../test_for_zero.hpp"
#include <iostream>
using namespace GRLib;
using namespace std;

void test_T3dg_01(Tensor1<double, 3> &t1_1, const Dg<double, 3, 3> &t3dg_2)
{
  Index<'i', 3> i;
  Index<'j', 3> j;

  Number<0> N0;
  Number<1> N1;
  Number<2> N2;

  /* Dg tests */

  t1_1(i) = t3dg_2(i, j, j);
  test_for_zero(t1_1(0)
                  - (t3dg_2(0, 0, 0) + t3dg_2(0, 1, 1) + t3dg_2(0, 2, 2)),
                "T3dg(i,j,j)(0)");
  test_for_zero(t1_1(1)
                  - (t3dg_2(1, 0, 0) + t3dg_2(1, 1, 1) + t3dg_2(1, 2, 2)),
                "T3dg(i,j,j)(1)");
  test_for_zero(t1_1(2)
                  - (t3dg_2(2, 0, 0) + t3dg_2(2, 1, 1) + t3dg_2(2, 2, 2)),
                "T3dg(i,j,j)(2)");
  t1_1(i) = t3dg_2(j, i, j);
  test_for_zero(t1_1(0)
                  - (t3dg_2(0, 0, 0) + t3dg_2(1, 0, 1) + t3dg_2(2, 0, 2)),
                "T3dg(j,i,j)(0)");
  test_for_zero(t1_1(1)
                  - (t3dg_2(0, 1, 0) + t3dg_2(1, 1, 1) + t3dg_2(2, 1, 2)),
                "T3dg(j,i,j)(1)");
  test_for_zero(t1_1(2)
                  - (t3dg_2(0, 2, 0) + t3dg_2(1, 2, 1) + t3dg_2(2, 2, 2)),
                "T3dg(j,i,j)(2)");
  t1_1(i) = t3dg_2(j, j, i);
  test_for_zero(t1_1(0)
                  - (t3dg_2(0, 0, 0) + t3dg_2(1, 1, 0) + t3dg_2(2, 2, 0)),
                "T3dg(j,j,i)(0)");
  test_for_zero(t1_1(1)
                  - (t3dg_2(0, 0, 1) + t3dg_2(1, 1, 1) + t3dg_2(2, 2, 1)),
                "T3dg(j,j,i)(1)");
  test_for_zero(t1_1(2)
                  - (t3dg_2(0, 0, 2) + t3dg_2(1, 1, 2) + t3dg_2(2, 2, 2)),
                "T3dg(j,j,i)(2)");
}
