#include "../../../src/FTensor.hpp"
#include "../test_for_zero.hpp"
#include <iostream>
using namespace GRLib;
using namespace std;

void test_T2_13(const Tensor2<double, 3, 3> &t2_1)
{
  Index<'i', 3> i;

  Number<0> N0;
  Number<1> N1;
  Number<2> N2;

  /* Tensor2 tests */

  /* Test of actual numerals as an index. */
  Tensor1<double, 3> t1;

  t1(i) = t2_1(0, i);
  test_for_zero(t2_1(0, 0) - t1(0), "T1(i)=T2(Num,i)(0,0)");
  test_for_zero(t2_1(0, 1) - t1(1), "T1(i)=T2(Num,i)(0,1)");
  test_for_zero(t2_1(0, 2) - t1(2), "T1(i)=T2(Num,i)(0,2)");
  t1(i) = t2_1(1, i);
  test_for_zero(t2_1(1, 0) - t1(0), "T1(i)=T2(Num,i)(1,0)");
  test_for_zero(t2_1(1, 1) - t1(1), "T1(i)=T2(Num,i)(1,1)");
  test_for_zero(t2_1(1, 2) - t1(2), "T1(i)=T2(Num,i)(1,2)");
  t1(i) = t2_1(2, i);
  test_for_zero(t2_1(2, 0) - t1(0), "T1(i)=T2(Num,i)(2,0)");
  test_for_zero(t2_1(2, 1) - t1(1), "T1(i)=T2(Num,i)(2,1)");
  test_for_zero(t2_1(2, 2) - t1(2), "T1(i)=T2(Num,i)(2,2)");

  t1(i) = t2_1(i, 0);
  test_for_zero(t2_1(0, 0) - t1(0), "T1(i)=T2(i,Num)(0,0)");
  test_for_zero(t2_1(1, 0) - t1(1), "T1(i)=T2(i,Num)(1,0)");
  test_for_zero(t2_1(2, 0) - t1(2), "T1(i)=T2(i,Num)(2,0)");
  t1(i) = t2_1(i, 1);
  test_for_zero(t2_1(0, 1) - t1(0), "T1(i)=T2(i,Num)(0,1)");
  test_for_zero(t2_1(1, 1) - t1(1), "T1(i)=T2(i,Num)(1,1)");
  test_for_zero(t2_1(2, 1) - t1(2), "T1(i)=T2(i,Num)(2,1)");
  t1(i) = t2_1(i, 2);
  test_for_zero(t2_1(0, 2) - t1(0), "T1(i)=T2(i,Num)(0,2)");
  test_for_zero(t2_1(1, 2) - t1(1), "T1(i)=T2(i,Num)(1,2)");
  test_for_zero(t2_1(2, 2) - t1(2), "T1(i)=T2(i,Num)(2,2)");
}
