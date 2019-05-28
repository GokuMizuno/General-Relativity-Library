#include "../../../src/FTensor.hpp"
#include "../test_for_zero.hpp"
#include <iostream>
using namespace GRLib;
using namespace std;

void test_T3as_08(Tensor3_antisymmetric<double, 3, 3> &t3as_1,
                  const Tensor3_antisymmetric<double, 3, 3> &t3as_2)
{
  Index<'i', 3> i;
  Index<'j', 3> j;
  Index<'k', 3> k;

  Number<0> N0;
  Number<1> N1;
  Number<2> N2;

  t3as_1(i, j, k) = 5 * t3as_2(i, j, k);
  test_for_zero(t3as_1(0, 0, 0) - (t3as_2(0, 0, 0) * 5), "T*T3as(0,0,0)");
  test_for_zero(t3as_1(0, 0, 1) - (t3as_2(0, 0, 1) * 5), "T*T3as(0,0,1)");
  test_for_zero(t3as_1(0, 0, 2) - (t3as_2(0, 0, 2) * 5), "T*T3as(0,0,2)");
  test_for_zero(t3as_1(0, 1, 0) - (t3as_2(0, 1, 0) * 5), "T*T3as(0,1,0)");
  test_for_zero(t3as_1(0, 1, 1) - (t3as_2(0, 1, 1) * 5), "T*T3as(0,1,1)");
  test_for_zero(t3as_1(0, 1, 2) - (t3as_2(0, 1, 2) * 5), "T*T3as(0,1,2)");
  test_for_zero(t3as_1(0, 2, 0) - (t3as_2(0, 2, 0) * 5), "T*T3as(0,2,0)");
  test_for_zero(t3as_1(0, 2, 1) - (t3as_2(0, 2, 1) * 5), "T*T3as(0,2,1)");
  test_for_zero(t3as_1(0, 2, 2) - (t3as_2(0, 2, 2) * 5), "T*T3as(0,2,2)");
  test_for_zero(t3as_1(1, 0, 0) - (t3as_2(1, 0, 0) * 5), "T*T3as(1,0,0)");
  test_for_zero(t3as_1(1, 0, 1) - (t3as_2(1, 0, 1) * 5), "T*T3as(1,0,1)");
  test_for_zero(t3as_1(1, 0, 2) - (t3as_2(1, 0, 2) * 5), "T*T3as(1,0,2)");
  test_for_zero(t3as_1(1, 1, 0) - (t3as_2(1, 1, 0) * 5), "T*T3as(1,1,0)");
  test_for_zero(t3as_1(1, 1, 1) - (t3as_2(1, 1, 1) * 5), "T*T3as(1,1,1)");
  test_for_zero(t3as_1(1, 1, 2) - (t3as_2(1, 1, 2) * 5), "T*T3as(1,1,2)");
  test_for_zero(t3as_1(1, 2, 0) - (t3as_2(1, 2, 0) * 5), "T*T3as(1,2,0)");
  test_for_zero(t3as_1(1, 2, 1) - (t3as_2(1, 2, 1) * 5), "T*T3as(1,2,1)");
  test_for_zero(t3as_1(1, 2, 2) - (t3as_2(1, 2, 2) * 5), "T*T3as(1,2,2)");
  test_for_zero(t3as_1(2, 0, 0) - (t3as_2(2, 0, 0) * 5), "T*T3as(2,0,0)");
  test_for_zero(t3as_1(2, 0, 1) - (t3as_2(2, 0, 1) * 5), "T*T3as(2,0,1)");
  test_for_zero(t3as_1(2, 0, 2) - (t3as_2(2, 0, 2) * 5), "T*T3as(2,0,2)");
  test_for_zero(t3as_1(2, 1, 0) - (t3as_2(2, 1, 0) * 5), "T*T3as(2,1,0)");
  test_for_zero(t3as_1(2, 1, 1) - (t3as_2(2, 1, 1) * 5), "T*T3as(2,1,1)");
  test_for_zero(t3as_1(2, 1, 2) - (t3as_2(2, 1, 2) * 5), "T*T3as(2,1,2)");
  test_for_zero(t3as_1(2, 2, 0) - (t3as_2(2, 2, 0) * 5), "T*T3as(2,2,0)");
  test_for_zero(t3as_1(2, 2, 1) - (t3as_2(2, 2, 1) * 5), "T*T3as(2,2,1)");
  test_for_zero(t3as_1(2, 2, 2) - (t3as_2(2, 2, 2) * 5), "T*T3as(2,2,2)");
}
