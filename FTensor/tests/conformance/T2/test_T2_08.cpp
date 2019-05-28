#include "../../../src/FTensor.hpp"
#include "../test_for_zero.hpp"
#include <iostream>
using namespace GRLib;
using namespace std;

void test_T2_08(const Tensor1<double, 3> &t1_2)
{
  Index<'i', 3> i;

  Number<0> N0;
  Number<1> N1;
  Number<2> N2;

  /* Tensor2 tests */
  Tensor2<double, 3, 3> t2;

  t2(i, N0) = t1_2(i);
  t2(i, N1) = t1_2(i);
  t2(i, N2) = t1_2(i);
  test_for_zero(t2(0, 0) - t1_2(0), "T2(i,N)=T1(i)(0,0)");
  test_for_zero(t2(0, 1) - t1_2(0), "T2(i,N)=T1(i)(0,1)");
  test_for_zero(t2(0, 2) - t1_2(0), "T2(i,N)=T1(i)(0,2)");
  test_for_zero(t2(1, 0) - t1_2(1), "T2(i,N)=T1(i)(1,0)");
  test_for_zero(t2(1, 1) - t1_2(1), "T2(i,N)=T1(i)(1,1)");
  test_for_zero(t2(1, 2) - t1_2(1), "T2(i,N)=T1(i)(1,2)");
  test_for_zero(t2(2, 0) - t1_2(2), "T2(i,N)=T1(i)(2,0)");
  test_for_zero(t2(2, 1) - t1_2(2), "T2(i,N)=T1(i)(2,1)");
  test_for_zero(t2(2, 2) - t1_2(2), "T2(i,N)=T1(i)(2,2)");
}
