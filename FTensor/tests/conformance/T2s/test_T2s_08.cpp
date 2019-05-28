#include "../../../src/FTensor.hpp"
#include "../test_for_zero.hpp"
#include <iostream>
using namespace GRLib;
using namespace std;

void test_T2s_08(Tensor1<double, 3> &t1_1, const Tensor1<double, 3> &t1_2,
                 const Tensor2_symmetric<double, 3> &t2s_1)
{
  Index<'i', 3> i;

  Number<0> N0;
  Number<1> N1;
  Number<2> N2;

  /* Tensor2_symmetric tests */

  /* Test of actual numerals as an index. */

  t1_1(i) = t2s_1(i, 0);
  test_for_zero(t2s_1(0, 0) - t1_1(0), "T2s(i,Num)(0,0)");
  test_for_zero(t2s_1(0, 1) - t1_1(1), "T2s(i,Num)(0,1)");
  test_for_zero(t2s_1(0, 2) - t1_1(2), "T2s(i,Num)(0,2)");
  t1_1(i) = t2s_1(i, 1);
  test_for_zero(t2s_1(1, 0) - t1_1(0), "T2s(i,Num)(1,0)");
  test_for_zero(t2s_1(1, 1) - t1_1(1), "T2s(i,Num)(1,1)");
  test_for_zero(t2s_1(1, 2) - t1_1(2), "T2s(i,Num)(1,2)");
  t1_1(i) = t2s_1(i, 2);
  test_for_zero(t2s_1(2, 0) - t1_1(0), "T2s(i,Num)(2,0)");
  test_for_zero(t2s_1(2, 1) - t1_1(1), "T2s(i,Num)(2,1)");
  test_for_zero(t2s_1(2, 2) - t1_1(2), "T2s(i,Num)(2,2)");

  test_for_zero(t2s_1(i, i) - (t1_2(0) + t1_2(1) + t1_2(2)), "T2s(i,i)");
}
