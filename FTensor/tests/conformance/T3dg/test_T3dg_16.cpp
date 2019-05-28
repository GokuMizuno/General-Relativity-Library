#include "../../../src/FTensor.hpp"
#include "../test_for_zero.hpp"
#include <iostream>
using namespace GRLib;
using namespace std;

void test_T3dg_16(Dg<double, 3, 3> &t3dg_1, const Dg<double, 3, 3> &t3dg_2)
{
  Index<'i', 3> i;
  Index<'j', 3> j;
  Index<'k', 3> k;

  Number<0> N0;
  Number<1> N1;
  Number<2> N2;

  /* Dg tests */

  t3dg_1(i, j, k) = t3dg_2(i, j, k) * 10;
  test_for_zero(t3dg_1(0, 0, 0) - t3dg_2(0, 0, 0) * 10, "T3dg*T(0,0,0)");
  test_for_zero(t3dg_1(0, 0, 1) - t3dg_2(0, 0, 1) * 10, "T3dg*T(0,0,1)");
  test_for_zero(t3dg_1(0, 0, 2) - t3dg_2(0, 0, 2) * 10, "T3dg*T(0,0,2)");
  test_for_zero(t3dg_1(0, 1, 0) - t3dg_2(0, 1, 0) * 10, "T3dg*T(0,1,0)");
  test_for_zero(t3dg_1(0, 1, 1) - t3dg_2(0, 1, 1) * 10, "T3dg*T(0,1,1)");
  test_for_zero(t3dg_1(0, 1, 2) - t3dg_2(0, 1, 2) * 10, "T3dg*T(0,1,2)");
  test_for_zero(t3dg_1(0, 2, 0) - t3dg_2(0, 2, 0) * 10, "T3dg*T(0,2,0)");
  test_for_zero(t3dg_1(0, 2, 1) - t3dg_2(0, 2, 1) * 10, "T3dg*T(0,2,1)");
  test_for_zero(t3dg_1(0, 2, 2) - t3dg_2(0, 2, 2) * 10, "T3dg*T(0,2,2)");
  test_for_zero(t3dg_1(1, 0, 0) - t3dg_2(1, 0, 0) * 10, "T3dg*T(1,0,0)");
  test_for_zero(t3dg_1(1, 0, 1) - t3dg_2(1, 0, 1) * 10, "T3dg*T(1,0,1)");
  test_for_zero(t3dg_1(1, 0, 2) - t3dg_2(1, 0, 2) * 10, "T3dg*T(1,0,2)");
  test_for_zero(t3dg_1(1, 1, 0) - t3dg_2(1, 1, 0) * 10, "T3dg*T(1,1,0)");
  test_for_zero(t3dg_1(1, 1, 1) - t3dg_2(1, 1, 1) * 10, "T3dg*T(1,1,1)");
  test_for_zero(t3dg_1(1, 1, 2) - t3dg_2(1, 1, 2) * 10, "T3dg*T(1,1,2)");
  test_for_zero(t3dg_1(1, 2, 0) - t3dg_2(1, 2, 0) * 10, "T3dg*T(1,2,0)");
  test_for_zero(t3dg_1(1, 2, 1) - t3dg_2(1, 2, 1) * 10, "T3dg*T(1,2,1)");
  test_for_zero(t3dg_1(1, 2, 2) - t3dg_2(1, 2, 2) * 10, "T3dg*T(1,2,2)");
  test_for_zero(t3dg_1(2, 0, 0) - t3dg_2(2, 0, 0) * 10, "T3dg*T(2,0,0)");
  test_for_zero(t3dg_1(2, 0, 1) - t3dg_2(2, 0, 1) * 10, "T3dg*T(2,0,1)");
  test_for_zero(t3dg_1(2, 0, 2) - t3dg_2(2, 0, 2) * 10, "T3dg*T(2,0,2)");
  test_for_zero(t3dg_1(2, 1, 0) - t3dg_2(2, 1, 0) * 10, "T3dg*T(2,1,0)");
  test_for_zero(t3dg_1(2, 1, 1) - t3dg_2(2, 1, 1) * 10, "T3dg*T(2,1,1)");
  test_for_zero(t3dg_1(2, 1, 2) - t3dg_2(2, 1, 2) * 10, "T3dg*T(2,1,2)");
  test_for_zero(t3dg_1(2, 2, 0) - t3dg_2(2, 2, 0) * 10, "T3dg*T(2,2,0)");
  test_for_zero(t3dg_1(2, 2, 1) - t3dg_2(2, 2, 1) * 10, "T3dg*T(2,2,1)");
  test_for_zero(t3dg_1(2, 2, 2) - t3dg_2(2, 2, 2) * 10, "T3dg*T(2,2,2)");

  t3dg_1(i, j, k) = t3dg_2(i, j, k) / 10;
  test_for_zero(t3dg_1(0, 0, 0) - t3dg_2(0, 0, 0) / 10, "T3dg/T(0,0,0)");
  test_for_zero(t3dg_1(0, 0, 1) - t3dg_2(0, 0, 1) / 10, "T3dg/T(0,0,1)");
  test_for_zero(t3dg_1(0, 0, 2) - t3dg_2(0, 0, 2) / 10, "T3dg/T(0,0,2)");
  test_for_zero(t3dg_1(0, 1, 0) - t3dg_2(0, 1, 0) / 10, "T3dg/T(0,1,0)");
  test_for_zero(t3dg_1(0, 1, 1) - t3dg_2(0, 1, 1) / 10, "T3dg/T(0,1,1)");
  test_for_zero(t3dg_1(0, 1, 2) - t3dg_2(0, 1, 2) / 10, "T3dg/T(0,1,2)");
  test_for_zero(t3dg_1(0, 2, 0) - t3dg_2(0, 2, 0) / 10, "T3dg/T(0,2,0)");
  test_for_zero(t3dg_1(0, 2, 1) - t3dg_2(0, 2, 1) / 10, "T3dg/T(0,2,1)");
  test_for_zero(t3dg_1(0, 2, 2) - t3dg_2(0, 2, 2) / 10, "T3dg/T(0,2,2)");
  test_for_zero(t3dg_1(1, 0, 0) - t3dg_2(1, 0, 0) / 10, "T3dg/T(1,0,0)");
  test_for_zero(t3dg_1(1, 0, 1) - t3dg_2(1, 0, 1) / 10, "T3dg/T(1,0,1)");
  test_for_zero(t3dg_1(1, 0, 2) - t3dg_2(1, 0, 2) / 10, "T3dg/T(1,0,2)");
  test_for_zero(t3dg_1(1, 1, 0) - t3dg_2(1, 1, 0) / 10, "T3dg/T(1,1,0)");
  test_for_zero(t3dg_1(1, 1, 1) - t3dg_2(1, 1, 1) / 10, "T3dg/T(1,1,1)");
  test_for_zero(t3dg_1(1, 1, 2) - t3dg_2(1, 1, 2) / 10, "T3dg/T(1,1,2)");
  test_for_zero(t3dg_1(1, 2, 0) - t3dg_2(1, 2, 0) / 10, "T3dg/T(1,2,0)");
  test_for_zero(t3dg_1(1, 2, 1) - t3dg_2(1, 2, 1) / 10, "T3dg/T(1,2,1)");
  test_for_zero(t3dg_1(1, 2, 2) - t3dg_2(1, 2, 2) / 10, "T3dg/T(1,2,2)");
  test_for_zero(t3dg_1(2, 0, 0) - t3dg_2(2, 0, 0) / 10, "T3dg/T(2,0,0)");
  test_for_zero(t3dg_1(2, 0, 1) - t3dg_2(2, 0, 1) / 10, "T3dg/T(2,0,1)");
  test_for_zero(t3dg_1(2, 0, 2) - t3dg_2(2, 0, 2) / 10, "T3dg/T(2,0,2)");
  test_for_zero(t3dg_1(2, 1, 0) - t3dg_2(2, 1, 0) / 10, "T3dg/T(2,1,0)");
  test_for_zero(t3dg_1(2, 1, 1) - t3dg_2(2, 1, 1) / 10, "T3dg/T(2,1,1)");
  test_for_zero(t3dg_1(2, 1, 2) - t3dg_2(2, 1, 2) / 10, "T3dg/T(2,1,2)");
  test_for_zero(t3dg_1(2, 2, 0) - t3dg_2(2, 2, 0) / 10, "T3dg/T(2,2,0)");
  test_for_zero(t3dg_1(2, 2, 1) - t3dg_2(2, 2, 1) / 10, "T3dg/T(2,2,1)");
  test_for_zero(t3dg_1(2, 2, 2) - t3dg_2(2, 2, 2) / 10, "T3dg/T(2,2,2)");
}
