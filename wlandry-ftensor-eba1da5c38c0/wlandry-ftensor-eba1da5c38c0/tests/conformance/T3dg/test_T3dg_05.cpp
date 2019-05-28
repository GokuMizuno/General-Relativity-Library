#include "../../../src/FTensor.hpp"
#include "../test_for_zero.hpp"
#include <iostream>
using namespace FTensor;
using namespace std;

void test_T3dg_05(Tensor2<double, 3, 3> &t2_1, const Dg<double, 3, 3> &t3dg_2)
{
  Index<'i', 3> i;
  Index<'j', 3> j;

  Number<0> N0;
  Number<1> N1;
  Number<2> N2;

  /* Dg tests */

  t2_1(i, j) = t3dg_2(i, N0, j);
  test_for_zero(t3dg_2(0, 0, 0) - t2_1(0, 0), "T2(i,j)=T3dg(i,N,j)(0,0,0)");
  test_for_zero(t3dg_2(0, 0, 1) - t2_1(0, 1), "T2(i,j)=T3dg(i,N,j)(0,0,1)");
  test_for_zero(t3dg_2(0, 0, 2) - t2_1(0, 2), "T2(i,j)=T3dg(i,N,j)(0,0,2)");
  test_for_zero(t3dg_2(1, 0, 0) - t2_1(1, 0), "T2(i,j)=T3dg(i,N,j)(0,1,0)");
  test_for_zero(t3dg_2(1, 0, 1) - t2_1(1, 1), "T2(i,j)=T3dg(i,N,j)(0,1,1)");
  test_for_zero(t3dg_2(1, 0, 2) - t2_1(1, 2), "T2(i,j)=T3dg(i,N,j)(0,1,2)");
  test_for_zero(t3dg_2(2, 0, 0) - t2_1(2, 0), "T2(i,j)=T3dg(i,N,j)(0,2,0)");
  test_for_zero(t3dg_2(2, 0, 1) - t2_1(2, 1), "T2(i,j)=T3dg(i,N,j)(0,2,1)");
  test_for_zero(t3dg_2(2, 0, 2) - t2_1(2, 2), "T2(i,j)=T3dg(i,N,j)(0,2,2)");

  t2_1(i, j) = t3dg_2(i, N1, j);
  test_for_zero(t3dg_2(0, 1, 0) - t2_1(0, 0), "T2(i,j)=T3dg(i,N,j)(1,0,0)");
  test_for_zero(t3dg_2(0, 1, 1) - t2_1(0, 1), "T2(i,j)=T3dg(i,N,j)(1,0,1)");
  test_for_zero(t3dg_2(0, 1, 2) - t2_1(0, 2), "T2(i,j)=T3dg(i,N,j)(1,0,2)");
  test_for_zero(t3dg_2(1, 1, 0) - t2_1(1, 0), "T2(i,j)=T3dg(i,N,j)(1,1,0)");
  test_for_zero(t3dg_2(1, 1, 1) - t2_1(1, 1), "T2(i,j)=T3dg(i,N,j)(1,1,1)");
  test_for_zero(t3dg_2(1, 1, 2) - t2_1(1, 2), "T2(i,j)=T3dg(i,N,j)(1,1,2)");
  test_for_zero(t3dg_2(2, 1, 0) - t2_1(2, 0), "T2(i,j)=T3dg(i,N,j)(1,2,0)");
  test_for_zero(t3dg_2(2, 1, 1) - t2_1(2, 1), "T2(i,j)=T3dg(i,N,j)(1,2,1)");
  test_for_zero(t3dg_2(2, 1, 2) - t2_1(2, 2), "T2(i,j)=T3dg(i,N,j)(1,2,2)");

  t2_1(i, j) = t3dg_2(i, N2, j);
  test_for_zero(t3dg_2(0, 2, 0) - t2_1(0, 0), "T2(i,j)=T3dg(i,N,j)(2,0,0)");
  test_for_zero(t3dg_2(0, 2, 1) - t2_1(0, 1), "T2(i,j)=T3dg(i,N,j)(2,0,1)");
  test_for_zero(t3dg_2(0, 2, 2) - t2_1(0, 2), "T2(i,j)=T3dg(i,N,j)(2,0,2)");
  test_for_zero(t3dg_2(1, 2, 0) - t2_1(1, 0), "T2(i,j)=T3dg(i,N,j)(2,1,0)");
  test_for_zero(t3dg_2(1, 2, 1) - t2_1(1, 1), "T2(i,j)=T3dg(i,N,j)(2,1,1)");
  test_for_zero(t3dg_2(1, 2, 2) - t2_1(1, 2), "T2(i,j)=T3dg(i,N,j)(2,1,2)");
  test_for_zero(t3dg_2(2, 2, 0) - t2_1(2, 0), "T2(i,j)=T3dg(i,N,j)(2,2,0)");
  test_for_zero(t3dg_2(2, 2, 1) - t2_1(2, 1), "T2(i,j)=T3dg(i,N,j)(2,2,1)");
  test_for_zero(t3dg_2(2, 2, 2) - t2_1(2, 2), "T2(i,j)=T3dg(i,N,j)(2,2,2)");
}
