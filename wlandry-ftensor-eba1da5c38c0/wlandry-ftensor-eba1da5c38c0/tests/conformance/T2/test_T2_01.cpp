#include "../../../src/FTensor.hpp"
#include "../test_for_zero.hpp"
#include <iostream>
using namespace FTensor;
using namespace std;

void test_T2_01(const Tensor1<double, 3> &t1_1, const Tensor1<double, 3> &t1_2)
{
  Index<'i', 3> i;
  Index<'j', 3> j;

  Number<0> N0;
  Number<1> N1;
  Number<2> N2;

  /* Tensor2 tests */
  Tensor2<double, 3, 3> t2_1;

  t2_1(i, j) = t1_1(i) * t1_2(j);
  test_for_zero(t2_1(0, 0) - t1_1(0) * t1_2(0), "T2(i,j)=T1(i)*T1(j)(0,0)");
  test_for_zero(t2_1(0, 1) - t1_1(0) * t1_2(1), "T2(i,j)=T1(i)*T1(j)(0,1)");
  test_for_zero(t2_1(0, 2) - t1_1(0) * t1_2(2), "T2(i,j)=T1(i)*T1(j)(0,2)");
  test_for_zero(t2_1(1, 0) - t1_1(1) * t1_2(0), "T2(i,j)=T1(i)*T1(j)(1,0)");
  test_for_zero(t2_1(1, 1) - t1_1(1) * t1_2(1), "T2(i,j)=T1(i)*T1(j)(1,1)");
  test_for_zero(t2_1(1, 2) - t1_1(1) * t1_2(2), "T2(i,j)=T1(i)*T1(j)(1,2)");
  test_for_zero(t2_1(2, 0) - t1_1(2) * t1_2(0), "T2(i,j)=T1(i)*T1(j)(2,0)");
  test_for_zero(t2_1(2, 1) - t1_1(2) * t1_2(1), "T2(i,j)=T1(i)*T1(j)(2,1)");
  test_for_zero(t2_1(2, 2) - t1_1(2) * t1_2(2), "T2(i,j)=T1(i)*T1(j)(2,2)");
}
