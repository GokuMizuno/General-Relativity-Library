#include "../../../src/FTensor.hpp"
#include "../test_for_zero.hpp"
#include <iostream>
using namespace FTensor;
using namespace std;

void test_T4ddg_01(const Tensor2_symmetric<double, 3> &t2s_2,
                   const Tensor2_symmetric<double, 3> &t2s_3,
                   const Dg<double, 3, 3> &t3dg_2,
                   const Dg<double, 3, 3> &t3dg_3)
{
  Index<'i', 3> i;
  Index<'j', 3> j;
  Index<'k', 3> k;
  Index<'l', 3> l;
  Index<'m', 3> m;

  Number<0> N0;
  Number<1> N1;
  Number<2> N2;

  Ddg<double, 3, 3> t4ddg_1, t4ddg_2, t4ddg_3;

  t4ddg_1(i, j, l, m) = t3dg_2(i, j, k) * t3dg_3(l, m, k);
  test_for_zero(t4ddg_1(0, 0, 0, 0)
                  - (t3dg_2(0, 0, 0) * t3dg_3(0, 0, 0)
                     + t3dg_2(0, 0, 1) * t3dg_3(0, 0, 1)
                     + t3dg_2(0, 0, 2) * t3dg_3(0, 0, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(0,0,0,0)");
  test_for_zero(t4ddg_1(0, 0, 0, 1)
                  - (t3dg_2(0, 0, 0) * t3dg_3(0, 1, 0)
                     + t3dg_2(0, 0, 1) * t3dg_3(0, 1, 1)
                     + t3dg_2(0, 0, 2) * t3dg_3(0, 1, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(0,0,0,1)");
  test_for_zero(t4ddg_1(0, 0, 0, 2)
                  - (t3dg_2(0, 0, 0) * t3dg_3(0, 2, 0)
                     + t3dg_2(0, 0, 1) * t3dg_3(0, 2, 1)
                     + t3dg_2(0, 0, 2) * t3dg_3(0, 2, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(0,0,0,2)");
  test_for_zero(t4ddg_1(0, 0, 1, 0)
                  - (t3dg_2(0, 0, 0) * t3dg_3(1, 0, 0)
                     + t3dg_2(0, 0, 1) * t3dg_3(1, 0, 1)
                     + t3dg_2(0, 0, 2) * t3dg_3(1, 0, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(0,0,1,0)");
  test_for_zero(t4ddg_1(0, 0, 1, 1)
                  - (t3dg_2(0, 0, 0) * t3dg_3(1, 1, 0)
                     + t3dg_2(0, 0, 1) * t3dg_3(1, 1, 1)
                     + t3dg_2(0, 0, 2) * t3dg_3(1, 1, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(0,0,1,1)");
  test_for_zero(t4ddg_1(0, 0, 1, 2)
                  - (t3dg_2(0, 0, 0) * t3dg_3(1, 2, 0)
                     + t3dg_2(0, 0, 1) * t3dg_3(1, 2, 1)
                     + t3dg_2(0, 0, 2) * t3dg_3(1, 2, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(0,0,1,2)");
  test_for_zero(t4ddg_1(0, 0, 2, 0)
                  - (t3dg_2(0, 0, 0) * t3dg_3(2, 0, 0)
                     + t3dg_2(0, 0, 1) * t3dg_3(2, 0, 1)
                     + t3dg_2(0, 0, 2) * t3dg_3(2, 0, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(0,0,2,0)");
  test_for_zero(t4ddg_1(0, 0, 2, 1)
                  - (t3dg_2(0, 0, 0) * t3dg_3(2, 1, 0)
                     + t3dg_2(0, 0, 1) * t3dg_3(2, 1, 1)
                     + t3dg_2(0, 0, 2) * t3dg_3(2, 1, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(0,0,2,1)");
  test_for_zero(t4ddg_1(0, 0, 2, 2)
                  - (t3dg_2(0, 0, 0) * t3dg_3(2, 2, 0)
                     + t3dg_2(0, 0, 1) * t3dg_3(2, 2, 1)
                     + t3dg_2(0, 0, 2) * t3dg_3(2, 2, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(0,0,2,2)");
  test_for_zero(t4ddg_1(0, 1, 0, 0)
                  - (t3dg_2(0, 1, 0) * t3dg_3(0, 0, 0)
                     + t3dg_2(0, 1, 1) * t3dg_3(0, 0, 1)
                     + t3dg_2(0, 1, 2) * t3dg_3(0, 0, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(0,1,0,0)");
  test_for_zero(t4ddg_1(0, 1, 0, 1)
                  - (t3dg_2(0, 1, 0) * t3dg_3(0, 1, 0)
                     + t3dg_2(0, 1, 1) * t3dg_3(0, 1, 1)
                     + t3dg_2(0, 1, 2) * t3dg_3(0, 1, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(0,1,0,1)");
  test_for_zero(t4ddg_1(0, 1, 0, 2)
                  - (t3dg_2(0, 1, 0) * t3dg_3(0, 2, 0)
                     + t3dg_2(0, 1, 1) * t3dg_3(0, 2, 1)
                     + t3dg_2(0, 1, 2) * t3dg_3(0, 2, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(0,1,0,2)");
  test_for_zero(t4ddg_1(0, 1, 1, 0)
                  - (t3dg_2(0, 1, 0) * t3dg_3(1, 0, 0)
                     + t3dg_2(0, 1, 1) * t3dg_3(1, 0, 1)
                     + t3dg_2(0, 1, 2) * t3dg_3(1, 0, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(0,1,1,0)");
  test_for_zero(t4ddg_1(0, 1, 1, 1)
                  - (t3dg_2(0, 1, 0) * t3dg_3(1, 1, 0)
                     + t3dg_2(0, 1, 1) * t3dg_3(1, 1, 1)
                     + t3dg_2(0, 1, 2) * t3dg_3(1, 1, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(0,1,1,1)");
  test_for_zero(t4ddg_1(0, 1, 1, 2)
                  - (t3dg_2(0, 1, 0) * t3dg_3(1, 2, 0)
                     + t3dg_2(0, 1, 1) * t3dg_3(1, 2, 1)
                     + t3dg_2(0, 1, 2) * t3dg_3(1, 2, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(0,1,1,2)");
  test_for_zero(t4ddg_1(0, 1, 2, 0)
                  - (t3dg_2(0, 1, 0) * t3dg_3(2, 0, 0)
                     + t3dg_2(0, 1, 1) * t3dg_3(2, 0, 1)
                     + t3dg_2(0, 1, 2) * t3dg_3(2, 0, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(0,1,2,0)");
  test_for_zero(t4ddg_1(0, 1, 2, 1)
                  - (t3dg_2(0, 1, 0) * t3dg_3(2, 1, 0)
                     + t3dg_2(0, 1, 1) * t3dg_3(2, 1, 1)
                     + t3dg_2(0, 1, 2) * t3dg_3(2, 1, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(0,1,2,1)");
  test_for_zero(t4ddg_1(0, 1, 2, 2)
                  - (t3dg_2(0, 1, 0) * t3dg_3(2, 2, 0)
                     + t3dg_2(0, 1, 1) * t3dg_3(2, 2, 1)
                     + t3dg_2(0, 1, 2) * t3dg_3(2, 2, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(0,1,2,2)");
  test_for_zero(t4ddg_1(0, 2, 0, 0)
                  - (t3dg_2(0, 2, 0) * t3dg_3(0, 0, 0)
                     + t3dg_2(0, 2, 1) * t3dg_3(0, 0, 1)
                     + t3dg_2(0, 2, 2) * t3dg_3(0, 0, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(0,2,0,0)");
  test_for_zero(t4ddg_1(0, 2, 0, 1)
                  - (t3dg_2(0, 2, 0) * t3dg_3(0, 1, 0)
                     + t3dg_2(0, 2, 1) * t3dg_3(0, 1, 1)
                     + t3dg_2(0, 2, 2) * t3dg_3(0, 1, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(0,2,0,1)");
  test_for_zero(t4ddg_1(0, 2, 0, 2)
                  - (t3dg_2(0, 2, 0) * t3dg_3(0, 2, 0)
                     + t3dg_2(0, 2, 1) * t3dg_3(0, 2, 1)
                     + t3dg_2(0, 2, 2) * t3dg_3(0, 2, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(0,2,0,2)");
  test_for_zero(t4ddg_1(0, 2, 1, 0)
                  - (t3dg_2(0, 2, 0) * t3dg_3(1, 0, 0)
                     + t3dg_2(0, 2, 1) * t3dg_3(1, 0, 1)
                     + t3dg_2(0, 2, 2) * t3dg_3(1, 0, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(0,2,1,0)");
  test_for_zero(t4ddg_1(0, 2, 1, 1)
                  - (t3dg_2(0, 2, 0) * t3dg_3(1, 1, 0)
                     + t3dg_2(0, 2, 1) * t3dg_3(1, 1, 1)
                     + t3dg_2(0, 2, 2) * t3dg_3(1, 1, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(0,2,1,1)");
  test_for_zero(t4ddg_1(0, 2, 1, 2)
                  - (t3dg_2(0, 2, 0) * t3dg_3(1, 2, 0)
                     + t3dg_2(0, 2, 1) * t3dg_3(1, 2, 1)
                     + t3dg_2(0, 2, 2) * t3dg_3(1, 2, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(0,2,1,2)");
  test_for_zero(t4ddg_1(0, 2, 2, 0)
                  - (t3dg_2(0, 2, 0) * t3dg_3(2, 0, 0)
                     + t3dg_2(0, 2, 1) * t3dg_3(2, 0, 1)
                     + t3dg_2(0, 2, 2) * t3dg_3(2, 0, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(0,2,2,0)");
  test_for_zero(t4ddg_1(0, 2, 2, 1)
                  - (t3dg_2(0, 2, 0) * t3dg_3(2, 1, 0)
                     + t3dg_2(0, 2, 1) * t3dg_3(2, 1, 1)
                     + t3dg_2(0, 2, 2) * t3dg_3(2, 1, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(0,2,2,1)");
  test_for_zero(t4ddg_1(0, 2, 2, 2)
                  - (t3dg_2(0, 2, 0) * t3dg_3(2, 2, 0)
                     + t3dg_2(0, 2, 1) * t3dg_3(2, 2, 1)
                     + t3dg_2(0, 2, 2) * t3dg_3(2, 2, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(0,2,2,2)");
  test_for_zero(t4ddg_1(1, 0, 0, 0)
                  - (t3dg_2(1, 0, 0) * t3dg_3(0, 0, 0)
                     + t3dg_2(1, 0, 1) * t3dg_3(0, 0, 1)
                     + t3dg_2(1, 0, 2) * t3dg_3(0, 0, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(1,0,0,0)");
  test_for_zero(t4ddg_1(1, 0, 0, 1)
                  - (t3dg_2(1, 0, 0) * t3dg_3(0, 1, 0)
                     + t3dg_2(1, 0, 1) * t3dg_3(0, 1, 1)
                     + t3dg_2(1, 0, 2) * t3dg_3(0, 1, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(1,0,0,1)");
  test_for_zero(t4ddg_1(1, 0, 0, 2)
                  - (t3dg_2(1, 0, 0) * t3dg_3(0, 2, 0)
                     + t3dg_2(1, 0, 1) * t3dg_3(0, 2, 1)
                     + t3dg_2(1, 0, 2) * t3dg_3(0, 2, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(1,0,0,2)");
  test_for_zero(t4ddg_1(1, 0, 1, 0)
                  - (t3dg_2(1, 0, 0) * t3dg_3(1, 0, 0)
                     + t3dg_2(1, 0, 1) * t3dg_3(1, 0, 1)
                     + t3dg_2(1, 0, 2) * t3dg_3(1, 0, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(1,0,1,0)");
  test_for_zero(t4ddg_1(1, 0, 1, 1)
                  - (t3dg_2(1, 0, 0) * t3dg_3(1, 1, 0)
                     + t3dg_2(1, 0, 1) * t3dg_3(1, 1, 1)
                     + t3dg_2(1, 0, 2) * t3dg_3(1, 1, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(1,0,1,1)");
  test_for_zero(t4ddg_1(1, 0, 1, 2)
                  - (t3dg_2(1, 0, 0) * t3dg_3(1, 2, 0)
                     + t3dg_2(1, 0, 1) * t3dg_3(1, 2, 1)
                     + t3dg_2(1, 0, 2) * t3dg_3(1, 2, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(1,0,1,2)");
  test_for_zero(t4ddg_1(1, 0, 2, 0)
                  - (t3dg_2(1, 0, 0) * t3dg_3(2, 0, 0)
                     + t3dg_2(1, 0, 1) * t3dg_3(2, 0, 1)
                     + t3dg_2(1, 0, 2) * t3dg_3(2, 0, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(1,0,2,0)");
  test_for_zero(t4ddg_1(1, 0, 2, 1)
                  - (t3dg_2(1, 0, 0) * t3dg_3(2, 1, 0)
                     + t3dg_2(1, 0, 1) * t3dg_3(2, 1, 1)
                     + t3dg_2(1, 0, 2) * t3dg_3(2, 1, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(1,0,2,1)");
  test_for_zero(t4ddg_1(1, 0, 2, 2)
                  - (t3dg_2(1, 0, 0) * t3dg_3(2, 2, 0)
                     + t3dg_2(1, 0, 1) * t3dg_3(2, 2, 1)
                     + t3dg_2(1, 0, 2) * t3dg_3(2, 2, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(1,0,2,2)");
  test_for_zero(t4ddg_1(1, 1, 0, 0)
                  - (t3dg_2(1, 1, 0) * t3dg_3(0, 0, 0)
                     + t3dg_2(1, 1, 1) * t3dg_3(0, 0, 1)
                     + t3dg_2(1, 1, 2) * t3dg_3(0, 0, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(1,1,0,0)");
  test_for_zero(t4ddg_1(1, 1, 0, 1)
                  - (t3dg_2(1, 1, 0) * t3dg_3(0, 1, 0)
                     + t3dg_2(1, 1, 1) * t3dg_3(0, 1, 1)
                     + t3dg_2(1, 1, 2) * t3dg_3(0, 1, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(1,1,0,1)");
  test_for_zero(t4ddg_1(1, 1, 0, 2)
                  - (t3dg_2(1, 1, 0) * t3dg_3(0, 2, 0)
                     + t3dg_2(1, 1, 1) * t3dg_3(0, 2, 1)
                     + t3dg_2(1, 1, 2) * t3dg_3(0, 2, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(1,1,0,2)");
  test_for_zero(t4ddg_1(1, 1, 1, 0)
                  - (t3dg_2(1, 1, 0) * t3dg_3(1, 0, 0)
                     + t3dg_2(1, 1, 1) * t3dg_3(1, 0, 1)
                     + t3dg_2(1, 1, 2) * t3dg_3(1, 0, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(1,1,1,0)");
  test_for_zero(t4ddg_1(1, 1, 1, 1)
                  - (t3dg_2(1, 1, 0) * t3dg_3(1, 1, 0)
                     + t3dg_2(1, 1, 1) * t3dg_3(1, 1, 1)
                     + t3dg_2(1, 1, 2) * t3dg_3(1, 1, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(1,1,1,1)");
  test_for_zero(t4ddg_1(1, 1, 1, 2)
                  - (t3dg_2(1, 1, 0) * t3dg_3(1, 2, 0)
                     + t3dg_2(1, 1, 1) * t3dg_3(1, 2, 1)
                     + t3dg_2(1, 1, 2) * t3dg_3(1, 2, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(1,1,1,2)");
  test_for_zero(t4ddg_1(1, 1, 2, 0)
                  - (t3dg_2(1, 1, 0) * t3dg_3(2, 0, 0)
                     + t3dg_2(1, 1, 1) * t3dg_3(2, 0, 1)
                     + t3dg_2(1, 1, 2) * t3dg_3(2, 0, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(1,1,2,0)");
  test_for_zero(t4ddg_1(1, 1, 2, 1)
                  - (t3dg_2(1, 1, 0) * t3dg_3(2, 1, 0)
                     + t3dg_2(1, 1, 1) * t3dg_3(2, 1, 1)
                     + t3dg_2(1, 1, 2) * t3dg_3(2, 1, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(1,1,2,1)");
  test_for_zero(t4ddg_1(1, 1, 2, 2)
                  - (t3dg_2(1, 1, 0) * t3dg_3(2, 2, 0)
                     + t3dg_2(1, 1, 1) * t3dg_3(2, 2, 1)
                     + t3dg_2(1, 1, 2) * t3dg_3(2, 2, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(1,1,2,2)");
  test_for_zero(t4ddg_1(1, 2, 0, 0)
                  - (t3dg_2(1, 2, 0) * t3dg_3(0, 0, 0)
                     + t3dg_2(1, 2, 1) * t3dg_3(0, 0, 1)
                     + t3dg_2(1, 2, 2) * t3dg_3(0, 0, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(1,2,0,0)");
  test_for_zero(t4ddg_1(1, 2, 0, 1)
                  - (t3dg_2(1, 2, 0) * t3dg_3(0, 1, 0)
                     + t3dg_2(1, 2, 1) * t3dg_3(0, 1, 1)
                     + t3dg_2(1, 2, 2) * t3dg_3(0, 1, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(1,2,0,1)");
  test_for_zero(t4ddg_1(1, 2, 0, 2)
                  - (t3dg_2(1, 2, 0) * t3dg_3(0, 2, 0)
                     + t3dg_2(1, 2, 1) * t3dg_3(0, 2, 1)
                     + t3dg_2(1, 2, 2) * t3dg_3(0, 2, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(1,2,0,2)");
  test_for_zero(t4ddg_1(1, 2, 1, 0)
                  - (t3dg_2(1, 2, 0) * t3dg_3(1, 0, 0)
                     + t3dg_2(1, 2, 1) * t3dg_3(1, 0, 1)
                     + t3dg_2(1, 2, 2) * t3dg_3(1, 0, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(1,2,1,0)");
  test_for_zero(t4ddg_1(1, 2, 1, 1)
                  - (t3dg_2(1, 2, 0) * t3dg_3(1, 1, 0)
                     + t3dg_2(1, 2, 1) * t3dg_3(1, 1, 1)
                     + t3dg_2(1, 2, 2) * t3dg_3(1, 1, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(1,2,1,1)");
  test_for_zero(t4ddg_1(1, 2, 1, 2)
                  - (t3dg_2(1, 2, 0) * t3dg_3(1, 2, 0)
                     + t3dg_2(1, 2, 1) * t3dg_3(1, 2, 1)
                     + t3dg_2(1, 2, 2) * t3dg_3(1, 2, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(1,2,1,2)");
  test_for_zero(t4ddg_1(1, 2, 2, 0)
                  - (t3dg_2(1, 2, 0) * t3dg_3(2, 0, 0)
                     + t3dg_2(1, 2, 1) * t3dg_3(2, 0, 1)
                     + t3dg_2(1, 2, 2) * t3dg_3(2, 0, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(1,2,2,0)");
  test_for_zero(t4ddg_1(1, 2, 2, 1)
                  - (t3dg_2(1, 2, 0) * t3dg_3(2, 1, 0)
                     + t3dg_2(1, 2, 1) * t3dg_3(2, 1, 1)
                     + t3dg_2(1, 2, 2) * t3dg_3(2, 1, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(1,2,2,1)");
  test_for_zero(t4ddg_1(1, 2, 2, 2)
                  - (t3dg_2(1, 2, 0) * t3dg_3(2, 2, 0)
                     + t3dg_2(1, 2, 1) * t3dg_3(2, 2, 1)
                     + t3dg_2(1, 2, 2) * t3dg_3(2, 2, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(1,2,2,2)");
  test_for_zero(t4ddg_1(2, 0, 0, 0)
                  - (t3dg_2(2, 0, 0) * t3dg_3(0, 0, 0)
                     + t3dg_2(2, 0, 1) * t3dg_3(0, 0, 1)
                     + t3dg_2(2, 0, 2) * t3dg_3(0, 0, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(2,0,0,0)");
  test_for_zero(t4ddg_1(2, 0, 0, 1)
                  - (t3dg_2(2, 0, 0) * t3dg_3(0, 1, 0)
                     + t3dg_2(2, 0, 1) * t3dg_3(0, 1, 1)
                     + t3dg_2(2, 0, 2) * t3dg_3(0, 1, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(2,0,0,1)");
  test_for_zero(t4ddg_1(2, 0, 0, 2)
                  - (t3dg_2(2, 0, 0) * t3dg_3(0, 2, 0)
                     + t3dg_2(2, 0, 1) * t3dg_3(0, 2, 1)
                     + t3dg_2(2, 0, 2) * t3dg_3(0, 2, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(2,0,0,2)");
  test_for_zero(t4ddg_1(2, 0, 1, 0)
                  - (t3dg_2(2, 0, 0) * t3dg_3(1, 0, 0)
                     + t3dg_2(2, 0, 1) * t3dg_3(1, 0, 1)
                     + t3dg_2(2, 0, 2) * t3dg_3(1, 0, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(2,0,1,0)");
  test_for_zero(t4ddg_1(2, 0, 1, 1)
                  - (t3dg_2(2, 0, 0) * t3dg_3(1, 1, 0)
                     + t3dg_2(2, 0, 1) * t3dg_3(1, 1, 1)
                     + t3dg_2(2, 0, 2) * t3dg_3(1, 1, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(2,0,1,1)");
  test_for_zero(t4ddg_1(2, 0, 1, 2)
                  - (t3dg_2(2, 0, 0) * t3dg_3(1, 2, 0)
                     + t3dg_2(2, 0, 1) * t3dg_3(1, 2, 1)
                     + t3dg_2(2, 0, 2) * t3dg_3(1, 2, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(2,0,1,2)");
  test_for_zero(t4ddg_1(2, 0, 2, 0)
                  - (t3dg_2(2, 0, 0) * t3dg_3(2, 0, 0)
                     + t3dg_2(2, 0, 1) * t3dg_3(2, 0, 1)
                     + t3dg_2(2, 0, 2) * t3dg_3(2, 0, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(2,0,2,0)");
  test_for_zero(t4ddg_1(2, 0, 2, 1)
                  - (t3dg_2(2, 0, 0) * t3dg_3(2, 1, 0)
                     + t3dg_2(2, 0, 1) * t3dg_3(2, 1, 1)
                     + t3dg_2(2, 0, 2) * t3dg_3(2, 1, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(2,0,2,1)");
  test_for_zero(t4ddg_1(2, 0, 2, 2)
                  - (t3dg_2(2, 0, 0) * t3dg_3(2, 2, 0)
                     + t3dg_2(2, 0, 1) * t3dg_3(2, 2, 1)
                     + t3dg_2(2, 0, 2) * t3dg_3(2, 2, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(2,0,2,2)");
  test_for_zero(t4ddg_1(2, 1, 0, 0)
                  - (t3dg_2(2, 1, 0) * t3dg_3(0, 0, 0)
                     + t3dg_2(2, 1, 1) * t3dg_3(0, 0, 1)
                     + t3dg_2(2, 1, 2) * t3dg_3(0, 0, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(2,1,0,0)");
  test_for_zero(t4ddg_1(2, 1, 0, 1)
                  - (t3dg_2(2, 1, 0) * t3dg_3(0, 1, 0)
                     + t3dg_2(2, 1, 1) * t3dg_3(0, 1, 1)
                     + t3dg_2(2, 1, 2) * t3dg_3(0, 1, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(2,1,0,1)");
  test_for_zero(t4ddg_1(2, 1, 0, 2)
                  - (t3dg_2(2, 1, 0) * t3dg_3(0, 2, 0)
                     + t3dg_2(2, 1, 1) * t3dg_3(0, 2, 1)
                     + t3dg_2(2, 1, 2) * t3dg_3(0, 2, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(2,1,0,2)");
  test_for_zero(t4ddg_1(2, 1, 1, 0)
                  - (t3dg_2(2, 1, 0) * t3dg_3(1, 0, 0)
                     + t3dg_2(2, 1, 1) * t3dg_3(1, 0, 1)
                     + t3dg_2(2, 1, 2) * t3dg_3(1, 0, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(2,1,1,0)");
  test_for_zero(t4ddg_1(2, 1, 1, 1)
                  - (t3dg_2(2, 1, 0) * t3dg_3(1, 1, 0)
                     + t3dg_2(2, 1, 1) * t3dg_3(1, 1, 1)
                     + t3dg_2(2, 1, 2) * t3dg_3(1, 1, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(2,1,1,1)");
  test_for_zero(t4ddg_1(2, 1, 1, 2)
                  - (t3dg_2(2, 1, 0) * t3dg_3(1, 2, 0)
                     + t3dg_2(2, 1, 1) * t3dg_3(1, 2, 1)
                     + t3dg_2(2, 1, 2) * t3dg_3(1, 2, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(2,1,1,2)");
  test_for_zero(t4ddg_1(2, 1, 2, 0)
                  - (t3dg_2(2, 1, 0) * t3dg_3(2, 0, 0)
                     + t3dg_2(2, 1, 1) * t3dg_3(2, 0, 1)
                     + t3dg_2(2, 1, 2) * t3dg_3(2, 0, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(2,1,2,0)");
  test_for_zero(t4ddg_1(2, 1, 2, 1)
                  - (t3dg_2(2, 1, 0) * t3dg_3(2, 1, 0)
                     + t3dg_2(2, 1, 1) * t3dg_3(2, 1, 1)
                     + t3dg_2(2, 1, 2) * t3dg_3(2, 1, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(2,1,2,1)");
  test_for_zero(t4ddg_1(2, 1, 2, 2)
                  - (t3dg_2(2, 1, 0) * t3dg_3(2, 2, 0)
                     + t3dg_2(2, 1, 1) * t3dg_3(2, 2, 1)
                     + t3dg_2(2, 1, 2) * t3dg_3(2, 2, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(2,1,2,2)");
  test_for_zero(t4ddg_1(2, 2, 0, 0)
                  - (t3dg_2(2, 2, 0) * t3dg_3(0, 0, 0)
                     + t3dg_2(2, 2, 1) * t3dg_3(0, 0, 1)
                     + t3dg_2(2, 2, 2) * t3dg_3(0, 0, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(2,2,0,0)");
  test_for_zero(t4ddg_1(2, 2, 0, 1)
                  - (t3dg_2(2, 2, 0) * t3dg_3(0, 1, 0)
                     + t3dg_2(2, 2, 1) * t3dg_3(0, 1, 1)
                     + t3dg_2(2, 2, 2) * t3dg_3(0, 1, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(2,2,0,1)");
  test_for_zero(t4ddg_1(2, 2, 0, 2)
                  - (t3dg_2(2, 2, 0) * t3dg_3(0, 2, 0)
                     + t3dg_2(2, 2, 1) * t3dg_3(0, 2, 1)
                     + t3dg_2(2, 2, 2) * t3dg_3(0, 2, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(2,2,0,2)");
  test_for_zero(t4ddg_1(2, 2, 1, 0)
                  - (t3dg_2(2, 2, 0) * t3dg_3(1, 0, 0)
                     + t3dg_2(2, 2, 1) * t3dg_3(1, 0, 1)
                     + t3dg_2(2, 2, 2) * t3dg_3(1, 0, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(2,2,1,0)");
  test_for_zero(t4ddg_1(2, 2, 1, 1)
                  - (t3dg_2(2, 2, 0) * t3dg_3(1, 1, 0)
                     + t3dg_2(2, 2, 1) * t3dg_3(1, 1, 1)
                     + t3dg_2(2, 2, 2) * t3dg_3(1, 1, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(2,2,1,1)");
  test_for_zero(t4ddg_1(2, 2, 1, 2)
                  - (t3dg_2(2, 2, 0) * t3dg_3(1, 2, 0)
                     + t3dg_2(2, 2, 1) * t3dg_3(1, 2, 1)
                     + t3dg_2(2, 2, 2) * t3dg_3(1, 2, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(2,2,1,2)");
  test_for_zero(t4ddg_1(2, 2, 2, 0)
                  - (t3dg_2(2, 2, 0) * t3dg_3(2, 0, 0)
                     + t3dg_2(2, 2, 1) * t3dg_3(2, 0, 1)
                     + t3dg_2(2, 2, 2) * t3dg_3(2, 0, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(2,2,2,0)");
  test_for_zero(t4ddg_1(2, 2, 2, 1)
                  - (t3dg_2(2, 2, 0) * t3dg_3(2, 1, 0)
                     + t3dg_2(2, 2, 1) * t3dg_3(2, 1, 1)
                     + t3dg_2(2, 2, 2) * t3dg_3(2, 1, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(2,2,2,1)");
  test_for_zero(t4ddg_1(2, 2, 2, 2)
                  - (t3dg_2(2, 2, 0) * t3dg_3(2, 2, 0)
                     + t3dg_2(2, 2, 1) * t3dg_3(2, 2, 1)
                     + t3dg_2(2, 2, 2) * t3dg_3(2, 2, 2)),
                "T3dg(i,j,k)*T3dg(l,m,k)(2,2,2,2)");

  t4ddg_2(i, j, l, m) = t2s_2(i, j) * t2s_3(l, m);
  t4ddg_3(i, j, l, m) = t2s_3(i, j) * t2s_2(l, m);
  test_for_zero(t4ddg_2(0, 0, 0, 0) - (t2s_2(0, 0) * t2s_3(0, 0)),
                "T2s(i,j)*T2s(l,m)(0,0,0,0)");
  test_for_zero(t4ddg_2(0, 0, 0, 1) - (t2s_2(0, 0) * t2s_3(0, 1)),
                "T2s(i,j)*T2s(l,m)(0,0,0,1)");
  test_for_zero(t4ddg_2(0, 0, 0, 2) - (t2s_2(0, 0) * t2s_3(0, 2)),
                "T2s(i,j)*T2s(l,m)(0,0,0,2)");
  test_for_zero(t4ddg_2(0, 0, 1, 0) - (t2s_2(0, 0) * t2s_3(1, 0)),
                "T2s(i,j)*T2s(l,m)(0,0,1,0)");
  test_for_zero(t4ddg_2(0, 0, 1, 1) - (t2s_2(0, 0) * t2s_3(1, 1)),
                "T2s(i,j)*T2s(l,m)(0,0,1,1)");
  test_for_zero(t4ddg_2(0, 0, 1, 2) - (t2s_2(0, 0) * t2s_3(1, 2)),
                "T2s(i,j)*T2s(l,m)(0,0,1,2)");
  test_for_zero(t4ddg_2(0, 0, 2, 0) - (t2s_2(0, 0) * t2s_3(2, 0)),
                "T2s(i,j)*T2s(l,m)(0,0,2,0)");
  test_for_zero(t4ddg_2(0, 0, 2, 1) - (t2s_2(0, 0) * t2s_3(2, 1)),
                "T2s(i,j)*T2s(l,m)(0,0,2,1)");
  test_for_zero(t4ddg_2(0, 0, 2, 2) - (t2s_2(0, 0) * t2s_3(2, 2)),
                "T2s(i,j)*T2s(l,m)(0,0,2,2)");
  test_for_zero(t4ddg_2(0, 1, 0, 0) - (t2s_2(0, 1) * t2s_3(0, 0)),
                "T2s(i,j)*T2s(l,m)(0,1,0,0)");
  test_for_zero(t4ddg_2(0, 1, 0, 1) - (t2s_2(0, 1) * t2s_3(0, 1)),
                "T2s(i,j)*T2s(l,m)(0,1,0,1)");
  test_for_zero(t4ddg_2(0, 1, 0, 2) - (t2s_2(0, 1) * t2s_3(0, 2)),
                "T2s(i,j)*T2s(l,m)(0,1,0,2)");
  test_for_zero(t4ddg_2(0, 1, 1, 0) - (t2s_2(0, 1) * t2s_3(1, 0)),
                "T2s(i,j)*T2s(l,m)(0,1,1,0)");
  test_for_zero(t4ddg_2(0, 1, 1, 1) - (t2s_2(0, 1) * t2s_3(1, 1)),
                "T2s(i,j)*T2s(l,m)(0,1,1,1)");
  test_for_zero(t4ddg_2(0, 1, 1, 2) - (t2s_2(0, 1) * t2s_3(1, 2)),
                "T2s(i,j)*T2s(l,m)(0,1,1,2)");
  test_for_zero(t4ddg_2(0, 1, 2, 0) - (t2s_2(0, 1) * t2s_3(2, 0)),
                "T2s(i,j)*T2s(l,m)(0,1,2,0)");
  test_for_zero(t4ddg_2(0, 1, 2, 1) - (t2s_2(0, 1) * t2s_3(2, 1)),
                "T2s(i,j)*T2s(l,m)(0,1,2,1)");
  test_for_zero(t4ddg_2(0, 1, 2, 2) - (t2s_2(0, 1) * t2s_3(2, 2)),
                "T2s(i,j)*T2s(l,m)(0,1,2,2)");
  test_for_zero(t4ddg_2(0, 2, 0, 0) - (t2s_2(0, 2) * t2s_3(0, 0)),
                "T2s(i,j)*T2s(l,m)(0,2,0,0)");
  test_for_zero(t4ddg_2(0, 2, 0, 1) - (t2s_2(0, 2) * t2s_3(0, 1)),
                "T2s(i,j)*T2s(l,m)(0,2,0,1)");
  test_for_zero(t4ddg_2(0, 2, 0, 2) - (t2s_2(0, 2) * t2s_3(0, 2)),
                "T2s(i,j)*T2s(l,m)(0,2,0,2)");
  test_for_zero(t4ddg_2(0, 2, 1, 0) - (t2s_2(0, 2) * t2s_3(1, 0)),
                "T2s(i,j)*T2s(l,m)(0,2,1,0)");
  test_for_zero(t4ddg_2(0, 2, 1, 1) - (t2s_2(0, 2) * t2s_3(1, 1)),
                "T2s(i,j)*T2s(l,m)(0,2,1,1)");
  test_for_zero(t4ddg_2(0, 2, 1, 2) - (t2s_2(0, 2) * t2s_3(1, 2)),
                "T2s(i,j)*T2s(l,m)(0,2,1,2)");
  test_for_zero(t4ddg_2(0, 2, 2, 0) - (t2s_2(0, 2) * t2s_3(2, 0)),
                "T2s(i,j)*T2s(l,m)(0,2,2,0)");
  test_for_zero(t4ddg_2(0, 2, 2, 1) - (t2s_2(0, 2) * t2s_3(2, 1)),
                "T2s(i,j)*T2s(l,m)(0,2,2,1)");
  test_for_zero(t4ddg_2(0, 2, 2, 2) - (t2s_2(0, 2) * t2s_3(2, 2)),
                "T2s(i,j)*T2s(l,m)(0,2,2,2)");
  test_for_zero(t4ddg_2(1, 0, 0, 0) - (t2s_2(1, 0) * t2s_3(0, 0)),
                "T2s(i,j)*T2s(l,m)(1,0,0,0)");
  test_for_zero(t4ddg_2(1, 0, 0, 1) - (t2s_2(1, 0) * t2s_3(0, 1)),
                "T2s(i,j)*T2s(l,m)(1,0,0,1)");
  test_for_zero(t4ddg_2(1, 0, 0, 2) - (t2s_2(1, 0) * t2s_3(0, 2)),
                "T2s(i,j)*T2s(l,m)(1,0,0,2)");
  test_for_zero(t4ddg_2(1, 0, 1, 0) - (t2s_2(1, 0) * t2s_3(1, 0)),
                "T2s(i,j)*T2s(l,m)(1,0,1,0)");
  test_for_zero(t4ddg_2(1, 0, 1, 1) - (t2s_2(1, 0) * t2s_3(1, 1)),
                "T2s(i,j)*T2s(l,m)(1,0,1,1)");
  test_for_zero(t4ddg_2(1, 0, 1, 2) - (t2s_2(1, 0) * t2s_3(1, 2)),
                "T2s(i,j)*T2s(l,m)(1,0,1,2)");
  test_for_zero(t4ddg_2(1, 0, 2, 0) - (t2s_2(1, 0) * t2s_3(2, 0)),
                "T2s(i,j)*T2s(l,m)(1,0,2,0)");
  test_for_zero(t4ddg_2(1, 0, 2, 1) - (t2s_2(1, 0) * t2s_3(2, 1)),
                "T2s(i,j)*T2s(l,m)(1,0,2,1)");
  test_for_zero(t4ddg_2(1, 0, 2, 2) - (t2s_2(1, 0) * t2s_3(2, 2)),
                "T2s(i,j)*T2s(l,m)(1,0,2,2)");
  test_for_zero(t4ddg_2(1, 1, 0, 0) - (t2s_2(1, 1) * t2s_3(0, 0)),
                "T2s(i,j)*T2s(l,m)(1,1,0,0)");
  test_for_zero(t4ddg_2(1, 1, 0, 1) - (t2s_2(1, 1) * t2s_3(0, 1)),
                "T2s(i,j)*T2s(l,m)(1,1,0,1)");
  test_for_zero(t4ddg_2(1, 1, 0, 2) - (t2s_2(1, 1) * t2s_3(0, 2)),
                "T2s(i,j)*T2s(l,m)(1,1,0,2)");
  test_for_zero(t4ddg_2(1, 1, 1, 0) - (t2s_2(1, 1) * t2s_3(1, 0)),
                "T2s(i,j)*T2s(l,m)(1,1,1,0)");
  test_for_zero(t4ddg_2(1, 1, 1, 1) - (t2s_2(1, 1) * t2s_3(1, 1)),
                "T2s(i,j)*T2s(l,m)(1,1,1,1)");
  test_for_zero(t4ddg_2(1, 1, 1, 2) - (t2s_2(1, 1) * t2s_3(1, 2)),
                "T2s(i,j)*T2s(l,m)(1,1,1,2)");
  test_for_zero(t4ddg_2(1, 1, 2, 0) - (t2s_2(1, 1) * t2s_3(2, 0)),
                "T2s(i,j)*T2s(l,m)(1,1,2,0)");
  test_for_zero(t4ddg_2(1, 1, 2, 1) - (t2s_2(1, 1) * t2s_3(2, 1)),
                "T2s(i,j)*T2s(l,m)(1,1,2,1)");
  test_for_zero(t4ddg_2(1, 1, 2, 2) - (t2s_2(1, 1) * t2s_3(2, 2)),
                "T2s(i,j)*T2s(l,m)(1,1,2,2)");
  test_for_zero(t4ddg_2(1, 2, 0, 0) - (t2s_2(1, 2) * t2s_3(0, 0)),
                "T2s(i,j)*T2s(l,m)(1,2,0,0)");
  test_for_zero(t4ddg_2(1, 2, 0, 1) - (t2s_2(1, 2) * t2s_3(0, 1)),
                "T2s(i,j)*T2s(l,m)(1,2,0,1)");
  test_for_zero(t4ddg_2(1, 2, 0, 2) - (t2s_2(1, 2) * t2s_3(0, 2)),
                "T2s(i,j)*T2s(l,m)(1,2,0,2)");
  test_for_zero(t4ddg_2(1, 2, 1, 0) - (t2s_2(1, 2) * t2s_3(1, 0)),
                "T2s(i,j)*T2s(l,m)(1,2,1,0)");
  test_for_zero(t4ddg_2(1, 2, 1, 1) - (t2s_2(1, 2) * t2s_3(1, 1)),
                "T2s(i,j)*T2s(l,m)(1,2,1,1)");
  test_for_zero(t4ddg_2(1, 2, 1, 2) - (t2s_2(1, 2) * t2s_3(1, 2)),
                "T2s(i,j)*T2s(l,m)(1,2,1,2)");
  test_for_zero(t4ddg_2(1, 2, 2, 0) - (t2s_2(1, 2) * t2s_3(2, 0)),
                "T2s(i,j)*T2s(l,m)(1,2,2,0)");
  test_for_zero(t4ddg_2(1, 2, 2, 1) - (t2s_2(1, 2) * t2s_3(2, 1)),
                "T2s(i,j)*T2s(l,m)(1,2,2,1)");
  test_for_zero(t4ddg_2(1, 2, 2, 2) - (t2s_2(1, 2) * t2s_3(2, 2)),
                "T2s(i,j)*T2s(l,m)(1,2,2,2)");
  test_for_zero(t4ddg_2(2, 0, 0, 0) - (t2s_2(2, 0) * t2s_3(0, 0)),
                "T2s(i,j)*T2s(l,m)(2,0,0,0)");
  test_for_zero(t4ddg_2(2, 0, 0, 1) - (t2s_2(2, 0) * t2s_3(0, 1)),
                "T2s(i,j)*T2s(l,m)(2,0,0,1)");
  test_for_zero(t4ddg_2(2, 0, 0, 2) - (t2s_2(2, 0) * t2s_3(0, 2)),
                "T2s(i,j)*T2s(l,m)(2,0,0,2)");
  test_for_zero(t4ddg_2(2, 0, 1, 0) - (t2s_2(2, 0) * t2s_3(1, 0)),
                "T2s(i,j)*T2s(l,m)(2,0,1,0)");
  test_for_zero(t4ddg_2(2, 0, 1, 1) - (t2s_2(2, 0) * t2s_3(1, 1)),
                "T2s(i,j)*T2s(l,m)(2,0,1,1)");
  test_for_zero(t4ddg_2(2, 0, 1, 2) - (t2s_2(2, 0) * t2s_3(1, 2)),
                "T2s(i,j)*T2s(l,m)(2,0,1,2)");
  test_for_zero(t4ddg_2(2, 0, 2, 0) - (t2s_2(2, 0) * t2s_3(2, 0)),
                "T2s(i,j)*T2s(l,m)(2,0,2,0)");
  test_for_zero(t4ddg_2(2, 0, 2, 1) - (t2s_2(2, 0) * t2s_3(2, 1)),
                "T2s(i,j)*T2s(l,m)(2,0,2,1)");
  test_for_zero(t4ddg_2(2, 0, 2, 2) - (t2s_2(2, 0) * t2s_3(2, 2)),
                "T2s(i,j)*T2s(l,m)(2,0,2,2)");
  test_for_zero(t4ddg_2(2, 1, 0, 0) - (t2s_2(2, 1) * t2s_3(0, 0)),
                "T2s(i,j)*T2s(l,m)(2,1,0,0)");
  test_for_zero(t4ddg_2(2, 1, 0, 1) - (t2s_2(2, 1) * t2s_3(0, 1)),
                "T2s(i,j)*T2s(l,m)(2,1,0,1)");
  test_for_zero(t4ddg_2(2, 1, 0, 2) - (t2s_2(2, 1) * t2s_3(0, 2)),
                "T2s(i,j)*T2s(l,m)(2,1,0,2)");
  test_for_zero(t4ddg_2(2, 1, 1, 0) - (t2s_2(2, 1) * t2s_3(1, 0)),
                "T2s(i,j)*T2s(l,m)(2,1,1,0)");
  test_for_zero(t4ddg_2(2, 1, 1, 1) - (t2s_2(2, 1) * t2s_3(1, 1)),
                "T2s(i,j)*T2s(l,m)(2,1,1,1)");
  test_for_zero(t4ddg_2(2, 1, 1, 2) - (t2s_2(2, 1) * t2s_3(1, 2)),
                "T2s(i,j)*T2s(l,m)(2,1,1,2)");
  test_for_zero(t4ddg_2(2, 1, 2, 0) - (t2s_2(2, 1) * t2s_3(2, 0)),
                "T2s(i,j)*T2s(l,m)(2,1,2,0)");
  test_for_zero(t4ddg_2(2, 1, 2, 1) - (t2s_2(2, 1) * t2s_3(2, 1)),
                "T2s(i,j)*T2s(l,m)(2,1,2,1)");
  test_for_zero(t4ddg_2(2, 1, 2, 2) - (t2s_2(2, 1) * t2s_3(2, 2)),
                "T2s(i,j)*T2s(l,m)(2,1,2,2)");
  test_for_zero(t4ddg_2(2, 2, 0, 0) - (t2s_2(2, 2) * t2s_3(0, 0)),
                "T2s(i,j)*T2s(l,m)(2,2,0,0)");
  test_for_zero(t4ddg_2(2, 2, 0, 1) - (t2s_2(2, 2) * t2s_3(0, 1)),
                "T2s(i,j)*T2s(l,m)(2,2,0,1)");
  test_for_zero(t4ddg_2(2, 2, 0, 2) - (t2s_2(2, 2) * t2s_3(0, 2)),
                "T2s(i,j)*T2s(l,m)(2,2,0,2)");
  test_for_zero(t4ddg_2(2, 2, 1, 0) - (t2s_2(2, 2) * t2s_3(1, 0)),
                "T2s(i,j)*T2s(l,m)(2,2,1,0)");
  test_for_zero(t4ddg_2(2, 2, 1, 1) - (t2s_2(2, 2) * t2s_3(1, 1)),
                "T2s(i,j)*T2s(l,m)(2,2,1,1)");
  test_for_zero(t4ddg_2(2, 2, 1, 2) - (t2s_2(2, 2) * t2s_3(1, 2)),
                "T2s(i,j)*T2s(l,m)(2,2,1,2)");
  test_for_zero(t4ddg_2(2, 2, 2, 0) - (t2s_2(2, 2) * t2s_3(2, 0)),
                "T2s(i,j)*T2s(l,m)(2,2,2,0)");
  test_for_zero(t4ddg_2(2, 2, 2, 1) - (t2s_2(2, 2) * t2s_3(2, 1)),
                "T2s(i,j)*T2s(l,m)(2,2,2,1)");
  test_for_zero(t4ddg_2(2, 2, 2, 2) - (t2s_2(2, 2) * t2s_3(2, 2)),
                "T2s(i,j)*T2s(l,m)(2,2,2,2)");

  test_for_zero(t4ddg_1(i, j, k, l) * t4ddg_2(i, k, j, l)
                  - t4ddg_1(0, 0, 0, 0) * t4ddg_2(0, 0, 0, 0)
                  - t4ddg_1(0, 0, 0, 1) * t4ddg_2(0, 0, 0, 1)
                  - t4ddg_1(0, 0, 0, 2) * t4ddg_2(0, 0, 0, 2)
                  - t4ddg_1(0, 0, 1, 0) * t4ddg_2(0, 1, 0, 0)
                  - t4ddg_1(0, 0, 1, 1) * t4ddg_2(0, 1, 0, 1)
                  - t4ddg_1(0, 0, 1, 2) * t4ddg_2(0, 1, 0, 2)
                  - t4ddg_1(0, 0, 2, 0) * t4ddg_2(0, 2, 0, 0)
                  - t4ddg_1(0, 0, 2, 1) * t4ddg_2(0, 2, 0, 1)
                  - t4ddg_1(0, 0, 2, 2) * t4ddg_2(0, 2, 0, 2)
                  - t4ddg_1(0, 1, 0, 0) * t4ddg_2(0, 0, 1, 0)
                  - t4ddg_1(0, 1, 0, 1) * t4ddg_2(0, 0, 1, 1)
                  - t4ddg_1(0, 1, 0, 2) * t4ddg_2(0, 0, 1, 2)
                  - t4ddg_1(0, 1, 1, 0) * t4ddg_2(0, 1, 1, 0)
                  - t4ddg_1(0, 1, 1, 1) * t4ddg_2(0, 1, 1, 1)
                  - t4ddg_1(0, 1, 1, 2) * t4ddg_2(0, 1, 1, 2)
                  - t4ddg_1(0, 1, 2, 0) * t4ddg_2(0, 2, 1, 0)
                  - t4ddg_1(0, 1, 2, 1) * t4ddg_2(0, 2, 1, 1)
                  - t4ddg_1(0, 1, 2, 2) * t4ddg_2(0, 2, 1, 2)
                  - t4ddg_1(0, 2, 0, 0) * t4ddg_2(0, 0, 2, 0)
                  - t4ddg_1(0, 2, 0, 1) * t4ddg_2(0, 0, 2, 1)
                  - t4ddg_1(0, 2, 0, 2) * t4ddg_2(0, 0, 2, 2)
                  - t4ddg_1(0, 2, 1, 0) * t4ddg_2(0, 1, 2, 0)
                  - t4ddg_1(0, 2, 1, 1) * t4ddg_2(0, 1, 2, 1)
                  - t4ddg_1(0, 2, 1, 2) * t4ddg_2(0, 1, 2, 2)
                  - t4ddg_1(0, 2, 2, 0) * t4ddg_2(0, 2, 2, 0)
                  - t4ddg_1(0, 2, 2, 1) * t4ddg_2(0, 2, 2, 1)
                  - t4ddg_1(0, 2, 2, 2) * t4ddg_2(0, 2, 2, 2)

                  - t4ddg_1(1, 0, 0, 0) * t4ddg_2(1, 0, 0, 0)
                  - t4ddg_1(1, 0, 0, 1) * t4ddg_2(1, 0, 0, 1)
                  - t4ddg_1(1, 0, 0, 2) * t4ddg_2(1, 0, 0, 2)
                  - t4ddg_1(1, 0, 1, 0) * t4ddg_2(1, 1, 0, 0)
                  - t4ddg_1(1, 0, 1, 1) * t4ddg_2(1, 1, 0, 1)
                  - t4ddg_1(1, 0, 1, 2) * t4ddg_2(1, 1, 0, 2)
                  - t4ddg_1(1, 0, 2, 0) * t4ddg_2(1, 2, 0, 0)
                  - t4ddg_1(1, 0, 2, 1) * t4ddg_2(1, 2, 0, 1)
                  - t4ddg_1(1, 0, 2, 2) * t4ddg_2(1, 2, 0, 2)
                  - t4ddg_1(1, 1, 0, 0) * t4ddg_2(1, 0, 1, 0)
                  - t4ddg_1(1, 1, 0, 1) * t4ddg_2(1, 0, 1, 1)
                  - t4ddg_1(1, 1, 0, 2) * t4ddg_2(1, 0, 1, 2)
                  - t4ddg_1(1, 1, 1, 0) * t4ddg_2(1, 1, 1, 0)
                  - t4ddg_1(1, 1, 1, 1) * t4ddg_2(1, 1, 1, 1)
                  - t4ddg_1(1, 1, 1, 2) * t4ddg_2(1, 1, 1, 2)
                  - t4ddg_1(1, 1, 2, 0) * t4ddg_2(1, 2, 1, 0)
                  - t4ddg_1(1, 1, 2, 1) * t4ddg_2(1, 2, 1, 1)
                  - t4ddg_1(1, 1, 2, 2) * t4ddg_2(1, 2, 1, 2)
                  - t4ddg_1(1, 2, 0, 0) * t4ddg_2(1, 0, 2, 0)
                  - t4ddg_1(1, 2, 0, 1) * t4ddg_2(1, 0, 2, 1)
                  - t4ddg_1(1, 2, 0, 2) * t4ddg_2(1, 0, 2, 2)
                  - t4ddg_1(1, 2, 1, 0) * t4ddg_2(1, 1, 2, 0)
                  - t4ddg_1(1, 2, 1, 1) * t4ddg_2(1, 1, 2, 1)
                  - t4ddg_1(1, 2, 1, 2) * t4ddg_2(1, 1, 2, 2)
                  - t4ddg_1(1, 2, 2, 0) * t4ddg_2(1, 2, 2, 0)
                  - t4ddg_1(1, 2, 2, 1) * t4ddg_2(1, 2, 2, 1)
                  - t4ddg_1(1, 2, 2, 2) * t4ddg_2(1, 2, 2, 2)

                  - t4ddg_1(2, 0, 0, 0) * t4ddg_2(2, 0, 0, 0)
                  - t4ddg_1(2, 0, 0, 1) * t4ddg_2(2, 0, 0, 1)
                  - t4ddg_1(2, 0, 0, 2) * t4ddg_2(2, 0, 0, 2)
                  - t4ddg_1(2, 0, 1, 0) * t4ddg_2(2, 1, 0, 0)
                  - t4ddg_1(2, 0, 1, 1) * t4ddg_2(2, 1, 0, 1)
                  - t4ddg_1(2, 0, 1, 2) * t4ddg_2(2, 1, 0, 2)
                  - t4ddg_1(2, 0, 2, 0) * t4ddg_2(2, 2, 0, 0)
                  - t4ddg_1(2, 0, 2, 1) * t4ddg_2(2, 2, 0, 1)
                  - t4ddg_1(2, 0, 2, 2) * t4ddg_2(2, 2, 0, 2)
                  - t4ddg_1(2, 1, 0, 0) * t4ddg_2(2, 0, 1, 0)
                  - t4ddg_1(2, 1, 0, 1) * t4ddg_2(2, 0, 1, 1)
                  - t4ddg_1(2, 1, 0, 2) * t4ddg_2(2, 0, 1, 2)
                  - t4ddg_1(2, 1, 1, 0) * t4ddg_2(2, 1, 1, 0)
                  - t4ddg_1(2, 1, 1, 1) * t4ddg_2(2, 1, 1, 1)
                  - t4ddg_1(2, 1, 1, 2) * t4ddg_2(2, 1, 1, 2)
                  - t4ddg_1(2, 1, 2, 0) * t4ddg_2(2, 2, 1, 0)
                  - t4ddg_1(2, 1, 2, 1) * t4ddg_2(2, 2, 1, 1)
                  - t4ddg_1(2, 1, 2, 2) * t4ddg_2(2, 2, 1, 2)
                  - t4ddg_1(2, 2, 0, 0) * t4ddg_2(2, 0, 2, 0)
                  - t4ddg_1(2, 2, 0, 1) * t4ddg_2(2, 0, 2, 1)
                  - t4ddg_1(2, 2, 0, 2) * t4ddg_2(2, 0, 2, 2)
                  - t4ddg_1(2, 2, 1, 0) * t4ddg_2(2, 1, 2, 0)
                  - t4ddg_1(2, 2, 1, 1) * t4ddg_2(2, 1, 2, 1)
                  - t4ddg_1(2, 2, 1, 2) * t4ddg_2(2, 1, 2, 2)
                  - t4ddg_1(2, 2, 2, 0) * t4ddg_2(2, 2, 2, 0)
                  - t4ddg_1(2, 2, 2, 1) * t4ddg_2(2, 2, 2, 1)
                  - t4ddg_1(2, 2, 2, 2) * t4ddg_2(2, 2, 2, 2),
                "T4ddg(i,j,k,l)*T4ddg(i,j,k,l)");

  t4ddg_1(i, j, k, l) = t4ddg_2(i, j, k, l) + t4ddg_3(i, j, k, l);
  test_for_zero(t4ddg_1(0, 0, 0, 0)
                  - (t4ddg_2(0, 0, 0, 0) + t4ddg_3(0, 0, 0, 0)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(0,0,0,0)");
  test_for_zero(t4ddg_1(0, 0, 0, 1)
                  - (t4ddg_2(0, 0, 0, 1) + t4ddg_3(0, 0, 0, 1)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(0,0,0,1)");
  test_for_zero(t4ddg_1(0, 0, 0, 2)
                  - (t4ddg_2(0, 0, 0, 2) + t4ddg_3(0, 0, 0, 2)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(0,0,0,2)");
  test_for_zero(t4ddg_1(0, 0, 1, 0)
                  - (t4ddg_2(0, 0, 1, 0) + t4ddg_3(0, 0, 1, 0)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(0,0,1,0)");
  test_for_zero(t4ddg_1(0, 0, 1, 1)
                  - (t4ddg_2(0, 0, 1, 1) + t4ddg_3(0, 0, 1, 1)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(0,0,1,1)");
  test_for_zero(t4ddg_1(0, 0, 1, 2)
                  - (t4ddg_2(0, 0, 1, 2) + t4ddg_3(0, 0, 1, 2)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(0,0,1,2)");
  test_for_zero(t4ddg_1(0, 0, 2, 0)
                  - (t4ddg_2(0, 0, 2, 0) + t4ddg_3(0, 0, 2, 0)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(0,0,2,0)");
  test_for_zero(t4ddg_1(0, 0, 2, 1)
                  - (t4ddg_2(0, 0, 2, 1) + t4ddg_3(0, 0, 2, 1)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(0,0,2,1)");
  test_for_zero(t4ddg_1(0, 0, 2, 2)
                  - (t4ddg_2(0, 0, 2, 2) + t4ddg_3(0, 0, 2, 2)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(0,0,2,2)");
  test_for_zero(t4ddg_1(0, 1, 0, 0)
                  - (t4ddg_2(0, 1, 0, 0) + t4ddg_3(0, 1, 0, 0)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(0,1,0,0)");
  test_for_zero(t4ddg_1(0, 1, 0, 1)
                  - (t4ddg_2(0, 1, 0, 1) + t4ddg_3(0, 1, 0, 1)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(0,1,0,1)");
  test_for_zero(t4ddg_1(0, 1, 0, 2)
                  - (t4ddg_2(0, 1, 0, 2) + t4ddg_3(0, 1, 0, 2)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(0,1,0,2)");
  test_for_zero(t4ddg_1(0, 1, 1, 0)
                  - (t4ddg_2(0, 1, 1, 0) + t4ddg_3(0, 1, 1, 0)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(0,1,1,0)");
  test_for_zero(t4ddg_1(0, 1, 1, 1)
                  - (t4ddg_2(0, 1, 1, 1) + t4ddg_3(0, 1, 1, 1)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(0,1,1,1)");
  test_for_zero(t4ddg_1(0, 1, 1, 2)
                  - (t4ddg_2(0, 1, 1, 2) + t4ddg_3(0, 1, 1, 2)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(0,1,1,2)");
  test_for_zero(t4ddg_1(0, 1, 2, 0)
                  - (t4ddg_2(0, 1, 2, 0) + t4ddg_3(0, 1, 2, 0)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(0,1,2,0)");
  test_for_zero(t4ddg_1(0, 1, 2, 1)
                  - (t4ddg_2(0, 1, 2, 1) + t4ddg_3(0, 1, 2, 1)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(0,1,2,1)");
  test_for_zero(t4ddg_1(0, 1, 2, 2)
                  - (t4ddg_2(0, 1, 2, 2) + t4ddg_3(0, 1, 2, 2)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(0,1,2,2)");
  test_for_zero(t4ddg_1(0, 2, 0, 0)
                  - (t4ddg_2(0, 2, 0, 0) + t4ddg_3(0, 2, 0, 0)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(0,2,0,0)");
  test_for_zero(t4ddg_1(0, 2, 0, 1)
                  - (t4ddg_2(0, 2, 0, 1) + t4ddg_3(0, 2, 0, 1)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(0,2,0,1)");
  test_for_zero(t4ddg_1(0, 2, 0, 2)
                  - (t4ddg_2(0, 2, 0, 2) + t4ddg_3(0, 2, 0, 2)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(0,2,0,2)");
  test_for_zero(t4ddg_1(0, 2, 1, 0)
                  - (t4ddg_2(0, 2, 1, 0) + t4ddg_3(0, 2, 1, 0)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(0,2,1,0)");
  test_for_zero(t4ddg_1(0, 2, 1, 1)
                  - (t4ddg_2(0, 2, 1, 1) + t4ddg_3(0, 2, 1, 1)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(0,2,1,1)");
  test_for_zero(t4ddg_1(0, 2, 1, 2)
                  - (t4ddg_2(0, 2, 1, 2) + t4ddg_3(0, 2, 1, 2)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(0,2,1,2)");
  test_for_zero(t4ddg_1(0, 2, 2, 0)
                  - (t4ddg_2(0, 2, 2, 0) + t4ddg_3(0, 2, 2, 0)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(0,2,2,0)");
  test_for_zero(t4ddg_1(0, 2, 2, 1)
                  - (t4ddg_2(0, 2, 2, 1) + t4ddg_3(0, 2, 2, 1)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(0,2,2,1)");
  test_for_zero(t4ddg_1(0, 2, 2, 2)
                  - (t4ddg_2(0, 2, 2, 2) + t4ddg_3(0, 2, 2, 2)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(0,2,2,2)");
  test_for_zero(t4ddg_1(1, 0, 0, 0)
                  - (t4ddg_2(1, 0, 0, 0) + t4ddg_3(1, 0, 0, 0)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(1,0,0,0)");
  test_for_zero(t4ddg_1(1, 0, 0, 1)
                  - (t4ddg_2(1, 0, 0, 1) + t4ddg_3(1, 0, 0, 1)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(1,0,0,1)");
  test_for_zero(t4ddg_1(1, 0, 0, 2)
                  - (t4ddg_2(1, 0, 0, 2) + t4ddg_3(1, 0, 0, 2)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(1,0,0,2)");
  test_for_zero(t4ddg_1(1, 0, 1, 0)
                  - (t4ddg_2(1, 0, 1, 0) + t4ddg_3(1, 0, 1, 0)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(1,0,1,0)");
  test_for_zero(t4ddg_1(1, 0, 1, 1)
                  - (t4ddg_2(1, 0, 1, 1) + t4ddg_3(1, 0, 1, 1)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(1,0,1,1)");
  test_for_zero(t4ddg_1(1, 0, 1, 2)
                  - (t4ddg_2(1, 0, 1, 2) + t4ddg_3(1, 0, 1, 2)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(1,0,1,2)");
  test_for_zero(t4ddg_1(1, 0, 2, 0)
                  - (t4ddg_2(1, 0, 2, 0) + t4ddg_3(1, 0, 2, 0)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(1,0,2,0)");
  test_for_zero(t4ddg_1(1, 0, 2, 1)
                  - (t4ddg_2(1, 0, 2, 1) + t4ddg_3(1, 0, 2, 1)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(1,0,2,1)");
  test_for_zero(t4ddg_1(1, 0, 2, 2)
                  - (t4ddg_2(1, 0, 2, 2) + t4ddg_3(1, 0, 2, 2)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(1,0,2,2)");
  test_for_zero(t4ddg_1(1, 1, 0, 0)
                  - (t4ddg_2(1, 1, 0, 0) + t4ddg_3(1, 1, 0, 0)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(1,1,0,0)");
  test_for_zero(t4ddg_1(1, 1, 0, 1)
                  - (t4ddg_2(1, 1, 0, 1) + t4ddg_3(1, 1, 0, 1)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(1,1,0,1)");
  test_for_zero(t4ddg_1(1, 1, 0, 2)
                  - (t4ddg_2(1, 1, 0, 2) + t4ddg_3(1, 1, 0, 2)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(1,1,0,2)");
  test_for_zero(t4ddg_1(1, 1, 1, 0)
                  - (t4ddg_2(1, 1, 1, 0) + t4ddg_3(1, 1, 1, 0)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(1,1,1,0)");
  test_for_zero(t4ddg_1(1, 1, 1, 1)
                  - (t4ddg_2(1, 1, 1, 1) + t4ddg_3(1, 1, 1, 1)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(1,1,1,1)");
  test_for_zero(t4ddg_1(1, 1, 1, 2)
                  - (t4ddg_2(1, 1, 1, 2) + t4ddg_3(1, 1, 1, 2)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(1,1,1,2)");
  test_for_zero(t4ddg_1(1, 1, 2, 0)
                  - (t4ddg_2(1, 1, 2, 0) + t4ddg_3(1, 1, 2, 0)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(1,1,2,0)");
  test_for_zero(t4ddg_1(1, 1, 2, 1)
                  - (t4ddg_2(1, 1, 2, 1) + t4ddg_3(1, 1, 2, 1)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(1,1,2,1)");
  test_for_zero(t4ddg_1(1, 1, 2, 2)
                  - (t4ddg_2(1, 1, 2, 2) + t4ddg_3(1, 1, 2, 2)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(1,1,2,2)");
  test_for_zero(t4ddg_1(1, 2, 0, 0)
                  - (t4ddg_2(1, 2, 0, 0) + t4ddg_3(1, 2, 0, 0)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(1,2,0,0)");
  test_for_zero(t4ddg_1(1, 2, 0, 1)
                  - (t4ddg_2(1, 2, 0, 1) + t4ddg_3(1, 2, 0, 1)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(1,2,0,1)");
  test_for_zero(t4ddg_1(1, 2, 0, 2)
                  - (t4ddg_2(1, 2, 0, 2) + t4ddg_3(1, 2, 0, 2)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(1,2,0,2)");
  test_for_zero(t4ddg_1(1, 2, 1, 0)
                  - (t4ddg_2(1, 2, 1, 0) + t4ddg_3(1, 2, 1, 0)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(1,2,1,0)");
  test_for_zero(t4ddg_1(1, 2, 1, 1)
                  - (t4ddg_2(1, 2, 1, 1) + t4ddg_3(1, 2, 1, 1)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(1,2,1,1)");
  test_for_zero(t4ddg_1(1, 2, 1, 2)
                  - (t4ddg_2(1, 2, 1, 2) + t4ddg_3(1, 2, 1, 2)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(1,2,1,2)");
  test_for_zero(t4ddg_1(1, 2, 2, 0)
                  - (t4ddg_2(1, 2, 2, 0) + t4ddg_3(1, 2, 2, 0)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(1,2,2,0)");
  test_for_zero(t4ddg_1(1, 2, 2, 1)
                  - (t4ddg_2(1, 2, 2, 1) + t4ddg_3(1, 2, 2, 1)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(1,2,2,1)");
  test_for_zero(t4ddg_1(1, 2, 2, 2)
                  - (t4ddg_2(1, 2, 2, 2) + t4ddg_3(1, 2, 2, 2)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(1,2,2,2)");
  test_for_zero(t4ddg_1(2, 0, 0, 0)
                  - (t4ddg_2(2, 0, 0, 0) + t4ddg_3(2, 0, 0, 0)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(2,0,0,0)");
  test_for_zero(t4ddg_1(2, 0, 0, 1)
                  - (t4ddg_2(2, 0, 0, 1) + t4ddg_3(2, 0, 0, 1)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(2,0,0,1)");
  test_for_zero(t4ddg_1(2, 0, 0, 2)
                  - (t4ddg_2(2, 0, 0, 2) + t4ddg_3(2, 0, 0, 2)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(2,0,0,2)");
  test_for_zero(t4ddg_1(2, 0, 1, 0)
                  - (t4ddg_2(2, 0, 1, 0) + t4ddg_3(2, 0, 1, 0)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(2,0,1,0)");
  test_for_zero(t4ddg_1(2, 0, 1, 1)
                  - (t4ddg_2(2, 0, 1, 1) + t4ddg_3(2, 0, 1, 1)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(2,0,1,1)");
  test_for_zero(t4ddg_1(2, 0, 1, 2)
                  - (t4ddg_2(2, 0, 1, 2) + t4ddg_3(2, 0, 1, 2)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(2,0,1,2)");
  test_for_zero(t4ddg_1(2, 0, 2, 0)
                  - (t4ddg_2(2, 0, 2, 0) + t4ddg_3(2, 0, 2, 0)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(2,0,2,0)");
  test_for_zero(t4ddg_1(2, 0, 2, 1)
                  - (t4ddg_2(2, 0, 2, 1) + t4ddg_3(2, 0, 2, 1)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(2,0,2,1)");
  test_for_zero(t4ddg_1(2, 0, 2, 2)
                  - (t4ddg_2(2, 0, 2, 2) + t4ddg_3(2, 0, 2, 2)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(2,0,2,2)");
  test_for_zero(t4ddg_1(2, 1, 0, 0)
                  - (t4ddg_2(2, 1, 0, 0) + t4ddg_3(2, 1, 0, 0)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(2,1,0,0)");
  test_for_zero(t4ddg_1(2, 1, 0, 1)
                  - (t4ddg_2(2, 1, 0, 1) + t4ddg_3(2, 1, 0, 1)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(2,1,0,1)");
  test_for_zero(t4ddg_1(2, 1, 0, 2)
                  - (t4ddg_2(2, 1, 0, 2) + t4ddg_3(2, 1, 0, 2)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(2,1,0,2)");
  test_for_zero(t4ddg_1(2, 1, 1, 0)
                  - (t4ddg_2(2, 1, 1, 0) + t4ddg_3(2, 1, 1, 0)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(2,1,1,0)");
  test_for_zero(t4ddg_1(2, 1, 1, 1)
                  - (t4ddg_2(2, 1, 1, 1) + t4ddg_3(2, 1, 1, 1)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(2,1,1,1)");
  test_for_zero(t4ddg_1(2, 1, 1, 2)
                  - (t4ddg_2(2, 1, 1, 2) + t4ddg_3(2, 1, 1, 2)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(2,1,1,2)");
  test_for_zero(t4ddg_1(2, 1, 2, 0)
                  - (t4ddg_2(2, 1, 2, 0) + t4ddg_3(2, 1, 2, 0)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(2,1,2,0)");
  test_for_zero(t4ddg_1(2, 1, 2, 1)
                  - (t4ddg_2(2, 1, 2, 1) + t4ddg_3(2, 1, 2, 1)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(2,1,2,1)");
  test_for_zero(t4ddg_1(2, 1, 2, 2)
                  - (t4ddg_2(2, 1, 2, 2) + t4ddg_3(2, 1, 2, 2)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(2,1,2,2)");
  test_for_zero(t4ddg_1(2, 2, 0, 0)
                  - (t4ddg_2(2, 2, 0, 0) + t4ddg_3(2, 2, 0, 0)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(2,2,0,0)");
  test_for_zero(t4ddg_1(2, 2, 0, 1)
                  - (t4ddg_2(2, 2, 0, 1) + t4ddg_3(2, 2, 0, 1)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(2,2,0,1)");
  test_for_zero(t4ddg_1(2, 2, 0, 2)
                  - (t4ddg_2(2, 2, 0, 2) + t4ddg_3(2, 2, 0, 2)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(2,2,0,2)");
  test_for_zero(t4ddg_1(2, 2, 1, 0)
                  - (t4ddg_2(2, 2, 1, 0) + t4ddg_3(2, 2, 1, 0)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(2,2,1,0)");
  test_for_zero(t4ddg_1(2, 2, 1, 1)
                  - (t4ddg_2(2, 2, 1, 1) + t4ddg_3(2, 2, 1, 1)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(2,2,1,1)");
  test_for_zero(t4ddg_1(2, 2, 1, 2)
                  - (t4ddg_2(2, 2, 1, 2) + t4ddg_3(2, 2, 1, 2)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(2,2,1,2)");
  test_for_zero(t4ddg_1(2, 2, 2, 0)
                  - (t4ddg_2(2, 2, 2, 0) + t4ddg_3(2, 2, 2, 0)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(2,2,2,0)");
  test_for_zero(t4ddg_1(2, 2, 2, 1)
                  - (t4ddg_2(2, 2, 2, 1) + t4ddg_3(2, 2, 2, 1)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(2,2,2,1)");
  test_for_zero(t4ddg_1(2, 2, 2, 2)
                  - (t4ddg_2(2, 2, 2, 2) + t4ddg_3(2, 2, 2, 2)),
                "T4ddg(i,j,k,l)+T4ddg(i,j,k,l)(2,2,2,2)");

  t4ddg_1(i, j, k, l) = t4ddg_2(i, j, k, l) + t4ddg_3(k, l, i, j);
  test_for_zero(t4ddg_1(0, 0, 0, 0)
                  - (t4ddg_2(0, 0, 0, 0) + t4ddg_3(0, 0, 0, 0)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(0,0,0,0)");
  test_for_zero(t4ddg_1(0, 0, 0, 1)
                  - (t4ddg_2(0, 0, 0, 1) + t4ddg_3(0, 1, 0, 0)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(0,0,0,1)");
  test_for_zero(t4ddg_1(0, 0, 0, 2)
                  - (t4ddg_2(0, 0, 0, 2) + t4ddg_3(0, 2, 0, 0)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(0,0,0,2)");
  test_for_zero(t4ddg_1(0, 0, 1, 0)
                  - (t4ddg_2(0, 0, 1, 0) + t4ddg_3(1, 0, 0, 0)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(0,0,1,0)");
  test_for_zero(t4ddg_1(0, 0, 1, 1)
                  - (t4ddg_2(0, 0, 1, 1) + t4ddg_3(1, 1, 0, 0)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(0,0,1,1)");
  test_for_zero(t4ddg_1(0, 0, 1, 2)
                  - (t4ddg_2(0, 0, 1, 2) + t4ddg_3(1, 2, 0, 0)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(0,0,1,2)");
  test_for_zero(t4ddg_1(0, 0, 2, 0)
                  - (t4ddg_2(0, 0, 2, 0) + t4ddg_3(2, 0, 0, 0)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(0,0,2,0)");
  test_for_zero(t4ddg_1(0, 0, 2, 1)
                  - (t4ddg_2(0, 0, 2, 1) + t4ddg_3(2, 1, 0, 0)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(0,0,2,1)");
  test_for_zero(t4ddg_1(0, 0, 2, 2)
                  - (t4ddg_2(0, 0, 2, 2) + t4ddg_3(2, 2, 0, 0)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(0,0,2,2)");
  test_for_zero(t4ddg_1(0, 1, 0, 0)
                  - (t4ddg_2(0, 1, 0, 0) + t4ddg_3(0, 0, 0, 1)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(0,1,0,0)");
  test_for_zero(t4ddg_1(0, 1, 0, 1)
                  - (t4ddg_2(0, 1, 0, 1) + t4ddg_3(0, 1, 0, 1)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(0,1,0,1)");
  test_for_zero(t4ddg_1(0, 1, 0, 2)
                  - (t4ddg_2(0, 1, 0, 2) + t4ddg_3(0, 2, 0, 1)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(0,1,0,2)");
  test_for_zero(t4ddg_1(0, 1, 1, 0)
                  - (t4ddg_2(0, 1, 1, 0) + t4ddg_3(1, 0, 0, 1)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(0,1,1,0)");
  test_for_zero(t4ddg_1(0, 1, 1, 1)
                  - (t4ddg_2(0, 1, 1, 1) + t4ddg_3(1, 1, 0, 1)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(0,1,1,1)");
  test_for_zero(t4ddg_1(0, 1, 1, 2)
                  - (t4ddg_2(0, 1, 1, 2) + t4ddg_3(1, 2, 0, 1)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(0,1,1,2)");
  test_for_zero(t4ddg_1(0, 1, 2, 0)
                  - (t4ddg_2(0, 1, 2, 0) + t4ddg_3(2, 0, 0, 1)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(0,1,2,0)");
  test_for_zero(t4ddg_1(0, 1, 2, 1)
                  - (t4ddg_2(0, 1, 2, 1) + t4ddg_3(2, 1, 0, 1)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(0,1,2,1)");
  test_for_zero(t4ddg_1(0, 1, 2, 2)
                  - (t4ddg_2(0, 1, 2, 2) + t4ddg_3(2, 2, 0, 1)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(0,1,2,2)");
  test_for_zero(t4ddg_1(0, 2, 0, 0)
                  - (t4ddg_2(0, 2, 0, 0) + t4ddg_3(0, 0, 0, 2)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(0,2,0,0)");
  test_for_zero(t4ddg_1(0, 2, 0, 1)
                  - (t4ddg_2(0, 2, 0, 1) + t4ddg_3(0, 1, 0, 2)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(0,2,0,1)");
  test_for_zero(t4ddg_1(0, 2, 0, 2)
                  - (t4ddg_2(0, 2, 0, 2) + t4ddg_3(0, 2, 0, 2)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(0,2,0,2)");
  test_for_zero(t4ddg_1(0, 2, 1, 0)
                  - (t4ddg_2(0, 2, 1, 0) + t4ddg_3(1, 0, 0, 2)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(0,2,1,0)");
  test_for_zero(t4ddg_1(0, 2, 1, 1)
                  - (t4ddg_2(0, 2, 1, 1) + t4ddg_3(1, 1, 0, 2)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(0,2,1,1)");
  test_for_zero(t4ddg_1(0, 2, 1, 2)
                  - (t4ddg_2(0, 2, 1, 2) + t4ddg_3(1, 2, 0, 2)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(0,2,1,2)");
  test_for_zero(t4ddg_1(0, 2, 2, 0)
                  - (t4ddg_2(0, 2, 2, 0) + t4ddg_3(2, 0, 0, 2)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(0,2,2,0)");
  test_for_zero(t4ddg_1(0, 2, 2, 1)
                  - (t4ddg_2(0, 2, 2, 1) + t4ddg_3(2, 1, 0, 2)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(0,2,2,1)");
  test_for_zero(t4ddg_1(0, 2, 2, 2)
                  - (t4ddg_2(0, 2, 2, 2) + t4ddg_3(2, 2, 0, 2)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(0,2,2,2)");
  test_for_zero(t4ddg_1(1, 0, 0, 0)
                  - (t4ddg_2(1, 0, 0, 0) + t4ddg_3(0, 0, 1, 0)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(1,0,0,0)");
  test_for_zero(t4ddg_1(1, 0, 0, 1)
                  - (t4ddg_2(1, 0, 0, 1) + t4ddg_3(0, 1, 1, 0)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(1,0,0,1)");
  test_for_zero(t4ddg_1(1, 0, 0, 2)
                  - (t4ddg_2(1, 0, 0, 2) + t4ddg_3(0, 2, 1, 0)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(1,0,0,2)");
  test_for_zero(t4ddg_1(1, 0, 1, 0)
                  - (t4ddg_2(1, 0, 1, 0) + t4ddg_3(1, 0, 1, 0)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(1,0,1,0)");
  test_for_zero(t4ddg_1(1, 0, 1, 1)
                  - (t4ddg_2(1, 0, 1, 1) + t4ddg_3(1, 1, 1, 0)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(1,0,1,1)");
  test_for_zero(t4ddg_1(1, 0, 1, 2)
                  - (t4ddg_2(1, 0, 1, 2) + t4ddg_3(1, 2, 1, 0)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(1,0,1,2)");
  test_for_zero(t4ddg_1(1, 0, 2, 0)
                  - (t4ddg_2(1, 0, 2, 0) + t4ddg_3(2, 0, 1, 0)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(1,0,2,0)");
  test_for_zero(t4ddg_1(1, 0, 2, 1)
                  - (t4ddg_2(1, 0, 2, 1) + t4ddg_3(2, 1, 1, 0)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(1,0,2,1)");
  test_for_zero(t4ddg_1(1, 0, 2, 2)
                  - (t4ddg_2(1, 0, 2, 2) + t4ddg_3(2, 2, 1, 0)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(1,0,2,2)");
  test_for_zero(t4ddg_1(1, 1, 0, 0)
                  - (t4ddg_2(1, 1, 0, 0) + t4ddg_3(0, 0, 1, 1)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(1,1,0,0)");
  test_for_zero(t4ddg_1(1, 1, 0, 1)
                  - (t4ddg_2(1, 1, 0, 1) + t4ddg_3(0, 1, 1, 1)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(1,1,0,1)");
  test_for_zero(t4ddg_1(1, 1, 0, 2)
                  - (t4ddg_2(1, 1, 0, 2) + t4ddg_3(0, 2, 1, 1)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(1,1,0,2)");
  test_for_zero(t4ddg_1(1, 1, 1, 0)
                  - (t4ddg_2(1, 1, 1, 0) + t4ddg_3(1, 0, 1, 1)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(1,1,1,0)");
  test_for_zero(t4ddg_1(1, 1, 1, 1)
                  - (t4ddg_2(1, 1, 1, 1) + t4ddg_3(1, 1, 1, 1)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(1,1,1,1)");
  test_for_zero(t4ddg_1(1, 1, 1, 2)
                  - (t4ddg_2(1, 1, 1, 2) + t4ddg_3(1, 2, 1, 1)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(1,1,1,2)");
  test_for_zero(t4ddg_1(1, 1, 2, 0)
                  - (t4ddg_2(1, 1, 2, 0) + t4ddg_3(2, 0, 1, 1)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(1,1,2,0)");
  test_for_zero(t4ddg_1(1, 1, 2, 1)
                  - (t4ddg_2(1, 1, 2, 1) + t4ddg_3(2, 1, 1, 1)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(1,1,2,1)");
  test_for_zero(t4ddg_1(1, 1, 2, 2)
                  - (t4ddg_2(1, 1, 2, 2) + t4ddg_3(2, 2, 1, 1)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(1,1,2,2)");
  test_for_zero(t4ddg_1(1, 2, 0, 0)
                  - (t4ddg_2(1, 2, 0, 0) + t4ddg_3(0, 0, 1, 2)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(1,2,0,0)");
  test_for_zero(t4ddg_1(1, 2, 0, 1)
                  - (t4ddg_2(1, 2, 0, 1) + t4ddg_3(0, 1, 1, 2)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(1,2,0,1)");
  test_for_zero(t4ddg_1(1, 2, 0, 2)
                  - (t4ddg_2(1, 2, 0, 2) + t4ddg_3(0, 2, 1, 2)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(1,2,0,2)");
  test_for_zero(t4ddg_1(1, 2, 1, 0)
                  - (t4ddg_2(1, 2, 1, 0) + t4ddg_3(1, 0, 1, 2)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(1,2,1,0)");
  test_for_zero(t4ddg_1(1, 2, 1, 1)
                  - (t4ddg_2(1, 2, 1, 1) + t4ddg_3(1, 1, 1, 2)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(1,2,1,1)");
  test_for_zero(t4ddg_1(1, 2, 1, 2)
                  - (t4ddg_2(1, 2, 1, 2) + t4ddg_3(1, 2, 1, 2)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(1,2,1,2)");
  test_for_zero(t4ddg_1(1, 2, 2, 0)
                  - (t4ddg_2(1, 2, 2, 0) + t4ddg_3(2, 0, 1, 2)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(1,2,2,0)");
  test_for_zero(t4ddg_1(1, 2, 2, 1)
                  - (t4ddg_2(1, 2, 2, 1) + t4ddg_3(2, 1, 1, 2)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(1,2,2,1)");
  test_for_zero(t4ddg_1(1, 2, 2, 2)
                  - (t4ddg_2(1, 2, 2, 2) + t4ddg_3(2, 2, 1, 2)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(1,2,2,2)");
  test_for_zero(t4ddg_1(2, 0, 0, 0)
                  - (t4ddg_2(2, 0, 0, 0) + t4ddg_3(0, 0, 2, 0)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(2,0,0,0)");
  test_for_zero(t4ddg_1(2, 0, 0, 1)
                  - (t4ddg_2(2, 0, 0, 1) + t4ddg_3(0, 1, 2, 0)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(2,0,0,1)");
  test_for_zero(t4ddg_1(2, 0, 0, 2)
                  - (t4ddg_2(2, 0, 0, 2) + t4ddg_3(0, 2, 2, 0)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(2,0,0,2)");
  test_for_zero(t4ddg_1(2, 0, 1, 0)
                  - (t4ddg_2(2, 0, 1, 0) + t4ddg_3(1, 0, 2, 0)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(2,0,1,0)");
  test_for_zero(t4ddg_1(2, 0, 1, 1)
                  - (t4ddg_2(2, 0, 1, 1) + t4ddg_3(1, 1, 2, 0)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(2,0,1,1)");
  test_for_zero(t4ddg_1(2, 0, 1, 2)
                  - (t4ddg_2(2, 0, 1, 2) + t4ddg_3(1, 2, 2, 0)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(2,0,1,2)");
  test_for_zero(t4ddg_1(2, 0, 2, 0)
                  - (t4ddg_2(2, 0, 2, 0) + t4ddg_3(2, 0, 2, 0)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(2,0,2,0)");
  test_for_zero(t4ddg_1(2, 0, 2, 1)
                  - (t4ddg_2(2, 0, 2, 1) + t4ddg_3(2, 1, 2, 0)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(2,0,2,1)");
  test_for_zero(t4ddg_1(2, 0, 2, 2)
                  - (t4ddg_2(2, 0, 2, 2) + t4ddg_3(2, 2, 2, 0)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(2,0,2,2)");
  test_for_zero(t4ddg_1(2, 1, 0, 0)
                  - (t4ddg_2(2, 1, 0, 0) + t4ddg_3(0, 0, 2, 1)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(2,1,0,0)");
  test_for_zero(t4ddg_1(2, 1, 0, 1)
                  - (t4ddg_2(2, 1, 0, 1) + t4ddg_3(0, 1, 2, 1)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(2,1,0,1)");
  test_for_zero(t4ddg_1(2, 1, 0, 2)
                  - (t4ddg_2(2, 1, 0, 2) + t4ddg_3(0, 2, 2, 1)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(2,1,0,2)");
  test_for_zero(t4ddg_1(2, 1, 1, 0)
                  - (t4ddg_2(2, 1, 1, 0) + t4ddg_3(1, 0, 2, 1)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(2,1,1,0)");
  test_for_zero(t4ddg_1(2, 1, 1, 1)
                  - (t4ddg_2(2, 1, 1, 1) + t4ddg_3(1, 1, 2, 1)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(2,1,1,1)");
  test_for_zero(t4ddg_1(2, 1, 1, 2)
                  - (t4ddg_2(2, 1, 1, 2) + t4ddg_3(1, 2, 2, 1)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(2,1,1,2)");
  test_for_zero(t4ddg_1(2, 1, 2, 0)
                  - (t4ddg_2(2, 1, 2, 0) + t4ddg_3(2, 0, 2, 1)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(2,1,2,0)");
  test_for_zero(t4ddg_1(2, 1, 2, 1)
                  - (t4ddg_2(2, 1, 2, 1) + t4ddg_3(2, 1, 2, 1)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(2,1,2,1)");
  test_for_zero(t4ddg_1(2, 1, 2, 2)
                  - (t4ddg_2(2, 1, 2, 2) + t4ddg_3(2, 2, 2, 1)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(2,1,2,2)");
  test_for_zero(t4ddg_1(2, 2, 0, 0)
                  - (t4ddg_2(2, 2, 0, 0) + t4ddg_3(0, 0, 2, 2)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(2,2,0,0)");
  test_for_zero(t4ddg_1(2, 2, 0, 1)
                  - (t4ddg_2(2, 2, 0, 1) + t4ddg_3(0, 1, 2, 2)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(2,2,0,1)");
  test_for_zero(t4ddg_1(2, 2, 0, 2)
                  - (t4ddg_2(2, 2, 0, 2) + t4ddg_3(0, 2, 2, 2)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(2,2,0,2)");
  test_for_zero(t4ddg_1(2, 2, 1, 0)
                  - (t4ddg_2(2, 2, 1, 0) + t4ddg_3(1, 0, 2, 2)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(2,2,1,0)");
  test_for_zero(t4ddg_1(2, 2, 1, 1)
                  - (t4ddg_2(2, 2, 1, 1) + t4ddg_3(1, 1, 2, 2)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(2,2,1,1)");
  test_for_zero(t4ddg_1(2, 2, 1, 2)
                  - (t4ddg_2(2, 2, 1, 2) + t4ddg_3(1, 2, 2, 2)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(2,2,1,2)");
  test_for_zero(t4ddg_1(2, 2, 2, 0)
                  - (t4ddg_2(2, 2, 2, 0) + t4ddg_3(2, 0, 2, 2)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(2,2,2,0)");
  test_for_zero(t4ddg_1(2, 2, 2, 1)
                  - (t4ddg_2(2, 2, 2, 1) + t4ddg_3(2, 1, 2, 2)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(2,2,2,1)");
  test_for_zero(t4ddg_1(2, 2, 2, 2)
                  - (t4ddg_2(2, 2, 2, 2) + t4ddg_3(2, 2, 2, 2)),
                "T4ddg(i,j,k,l)+T4ddg(k,l,i,j)(2,2,2,2)");

  t4ddg_1(i, j, k, l) = t4ddg_2(i, j, k, l) - t4ddg_3(i, j, k, l);
  test_for_zero(t4ddg_1(0, 0, 0, 0)
                  - (t4ddg_2(0, 0, 0, 0) - t4ddg_3(0, 0, 0, 0)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(0,0,0,0)");
  test_for_zero(t4ddg_1(0, 0, 0, 1)
                  - (t4ddg_2(0, 0, 0, 1) - t4ddg_3(0, 0, 0, 1)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(0,0,0,1)");
  test_for_zero(t4ddg_1(0, 0, 0, 2)
                  - (t4ddg_2(0, 0, 0, 2) - t4ddg_3(0, 0, 0, 2)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(0,0,0,2)");
  test_for_zero(t4ddg_1(0, 0, 1, 0)
                  - (t4ddg_2(0, 0, 1, 0) - t4ddg_3(0, 0, 1, 0)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(0,0,1,0)");
  test_for_zero(t4ddg_1(0, 0, 1, 1)
                  - (t4ddg_2(0, 0, 1, 1) - t4ddg_3(0, 0, 1, 1)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(0,0,1,1)");
  test_for_zero(t4ddg_1(0, 0, 1, 2)
                  - (t4ddg_2(0, 0, 1, 2) - t4ddg_3(0, 0, 1, 2)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(0,0,1,2)");
  test_for_zero(t4ddg_1(0, 0, 2, 0)
                  - (t4ddg_2(0, 0, 2, 0) - t4ddg_3(0, 0, 2, 0)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(0,0,2,0)");
  test_for_zero(t4ddg_1(0, 0, 2, 1)
                  - (t4ddg_2(0, 0, 2, 1) - t4ddg_3(0, 0, 2, 1)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(0,0,2,1)");
  test_for_zero(t4ddg_1(0, 0, 2, 2)
                  - (t4ddg_2(0, 0, 2, 2) - t4ddg_3(0, 0, 2, 2)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(0,0,2,2)");
  test_for_zero(t4ddg_1(0, 1, 0, 0)
                  - (t4ddg_2(0, 1, 0, 0) - t4ddg_3(0, 1, 0, 0)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(0,1,0,0)");
  test_for_zero(t4ddg_1(0, 1, 0, 1)
                  - (t4ddg_2(0, 1, 0, 1) - t4ddg_3(0, 1, 0, 1)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(0,1,0,1)");
  test_for_zero(t4ddg_1(0, 1, 0, 2)
                  - (t4ddg_2(0, 1, 0, 2) - t4ddg_3(0, 1, 0, 2)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(0,1,0,2)");
  test_for_zero(t4ddg_1(0, 1, 1, 0)
                  - (t4ddg_2(0, 1, 1, 0) - t4ddg_3(0, 1, 1, 0)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(0,1,1,0)");
  test_for_zero(t4ddg_1(0, 1, 1, 1)
                  - (t4ddg_2(0, 1, 1, 1) - t4ddg_3(0, 1, 1, 1)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(0,1,1,1)");
  test_for_zero(t4ddg_1(0, 1, 1, 2)
                  - (t4ddg_2(0, 1, 1, 2) - t4ddg_3(0, 1, 1, 2)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(0,1,1,2)");
  test_for_zero(t4ddg_1(0, 1, 2, 0)
                  - (t4ddg_2(0, 1, 2, 0) - t4ddg_3(0, 1, 2, 0)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(0,1,2,0)");
  test_for_zero(t4ddg_1(0, 1, 2, 1)
                  - (t4ddg_2(0, 1, 2, 1) - t4ddg_3(0, 1, 2, 1)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(0,1,2,1)");
  test_for_zero(t4ddg_1(0, 1, 2, 2)
                  - (t4ddg_2(0, 1, 2, 2) - t4ddg_3(0, 1, 2, 2)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(0,1,2,2)");
  test_for_zero(t4ddg_1(0, 2, 0, 0)
                  - (t4ddg_2(0, 2, 0, 0) - t4ddg_3(0, 2, 0, 0)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(0,2,0,0)");
  test_for_zero(t4ddg_1(0, 2, 0, 1)
                  - (t4ddg_2(0, 2, 0, 1) - t4ddg_3(0, 2, 0, 1)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(0,2,0,1)");
  test_for_zero(t4ddg_1(0, 2, 0, 2)
                  - (t4ddg_2(0, 2, 0, 2) - t4ddg_3(0, 2, 0, 2)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(0,2,0,2)");
  test_for_zero(t4ddg_1(0, 2, 1, 0)
                  - (t4ddg_2(0, 2, 1, 0) - t4ddg_3(0, 2, 1, 0)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(0,2,1,0)");
  test_for_zero(t4ddg_1(0, 2, 1, 1)
                  - (t4ddg_2(0, 2, 1, 1) - t4ddg_3(0, 2, 1, 1)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(0,2,1,1)");
  test_for_zero(t4ddg_1(0, 2, 1, 2)
                  - (t4ddg_2(0, 2, 1, 2) - t4ddg_3(0, 2, 1, 2)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(0,2,1,2)");
  test_for_zero(t4ddg_1(0, 2, 2, 0)
                  - (t4ddg_2(0, 2, 2, 0) - t4ddg_3(0, 2, 2, 0)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(0,2,2,0)");
  test_for_zero(t4ddg_1(0, 2, 2, 1)
                  - (t4ddg_2(0, 2, 2, 1) - t4ddg_3(0, 2, 2, 1)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(0,2,2,1)");
  test_for_zero(t4ddg_1(0, 2, 2, 2)
                  - (t4ddg_2(0, 2, 2, 2) - t4ddg_3(0, 2, 2, 2)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(0,2,2,2)");
  test_for_zero(t4ddg_1(1, 0, 0, 0)
                  - (t4ddg_2(1, 0, 0, 0) - t4ddg_3(1, 0, 0, 0)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(1,0,0,0)");
  test_for_zero(t4ddg_1(1, 0, 0, 1)
                  - (t4ddg_2(1, 0, 0, 1) - t4ddg_3(1, 0, 0, 1)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(1,0,0,1)");
  test_for_zero(t4ddg_1(1, 0, 0, 2)
                  - (t4ddg_2(1, 0, 0, 2) - t4ddg_3(1, 0, 0, 2)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(1,0,0,2)");
  test_for_zero(t4ddg_1(1, 0, 1, 0)
                  - (t4ddg_2(1, 0, 1, 0) - t4ddg_3(1, 0, 1, 0)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(1,0,1,0)");
  test_for_zero(t4ddg_1(1, 0, 1, 1)
                  - (t4ddg_2(1, 0, 1, 1) - t4ddg_3(1, 0, 1, 1)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(1,0,1,1)");
  test_for_zero(t4ddg_1(1, 0, 1, 2)
                  - (t4ddg_2(1, 0, 1, 2) - t4ddg_3(1, 0, 1, 2)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(1,0,1,2)");
  test_for_zero(t4ddg_1(1, 0, 2, 0)
                  - (t4ddg_2(1, 0, 2, 0) - t4ddg_3(1, 0, 2, 0)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(1,0,2,0)");
  test_for_zero(t4ddg_1(1, 0, 2, 1)
                  - (t4ddg_2(1, 0, 2, 1) - t4ddg_3(1, 0, 2, 1)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(1,0,2,1)");
  test_for_zero(t4ddg_1(1, 0, 2, 2)
                  - (t4ddg_2(1, 0, 2, 2) - t4ddg_3(1, 0, 2, 2)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(1,0,2,2)");
  test_for_zero(t4ddg_1(1, 1, 0, 0)
                  - (t4ddg_2(1, 1, 0, 0) - t4ddg_3(1, 1, 0, 0)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(1,1,0,0)");
  test_for_zero(t4ddg_1(1, 1, 0, 1)
                  - (t4ddg_2(1, 1, 0, 1) - t4ddg_3(1, 1, 0, 1)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(1,1,0,1)");
  test_for_zero(t4ddg_1(1, 1, 0, 2)
                  - (t4ddg_2(1, 1, 0, 2) - t4ddg_3(1, 1, 0, 2)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(1,1,0,2)");
  test_for_zero(t4ddg_1(1, 1, 1, 0)
                  - (t4ddg_2(1, 1, 1, 0) - t4ddg_3(1, 1, 1, 0)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(1,1,1,0)");
  test_for_zero(t4ddg_1(1, 1, 1, 1)
                  - (t4ddg_2(1, 1, 1, 1) - t4ddg_3(1, 1, 1, 1)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(1,1,1,1)");
  test_for_zero(t4ddg_1(1, 1, 1, 2)
                  - (t4ddg_2(1, 1, 1, 2) - t4ddg_3(1, 1, 1, 2)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(1,1,1,2)");
  test_for_zero(t4ddg_1(1, 1, 2, 0)
                  - (t4ddg_2(1, 1, 2, 0) - t4ddg_3(1, 1, 2, 0)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(1,1,2,0)");
  test_for_zero(t4ddg_1(1, 1, 2, 1)
                  - (t4ddg_2(1, 1, 2, 1) - t4ddg_3(1, 1, 2, 1)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(1,1,2,1)");
  test_for_zero(t4ddg_1(1, 1, 2, 2)
                  - (t4ddg_2(1, 1, 2, 2) - t4ddg_3(1, 1, 2, 2)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(1,1,2,2)");
  test_for_zero(t4ddg_1(1, 2, 0, 0)
                  - (t4ddg_2(1, 2, 0, 0) - t4ddg_3(1, 2, 0, 0)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(1,2,0,0)");
  test_for_zero(t4ddg_1(1, 2, 0, 1)
                  - (t4ddg_2(1, 2, 0, 1) - t4ddg_3(1, 2, 0, 1)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(1,2,0,1)");
  test_for_zero(t4ddg_1(1, 2, 0, 2)
                  - (t4ddg_2(1, 2, 0, 2) - t4ddg_3(1, 2, 0, 2)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(1,2,0,2)");
  test_for_zero(t4ddg_1(1, 2, 1, 0)
                  - (t4ddg_2(1, 2, 1, 0) - t4ddg_3(1, 2, 1, 0)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(1,2,1,0)");
  test_for_zero(t4ddg_1(1, 2, 1, 1)
                  - (t4ddg_2(1, 2, 1, 1) - t4ddg_3(1, 2, 1, 1)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(1,2,1,1)");
  test_for_zero(t4ddg_1(1, 2, 1, 2)
                  - (t4ddg_2(1, 2, 1, 2) - t4ddg_3(1, 2, 1, 2)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(1,2,1,2)");
  test_for_zero(t4ddg_1(1, 2, 2, 0)
                  - (t4ddg_2(1, 2, 2, 0) - t4ddg_3(1, 2, 2, 0)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(1,2,2,0)");
  test_for_zero(t4ddg_1(1, 2, 2, 1)
                  - (t4ddg_2(1, 2, 2, 1) - t4ddg_3(1, 2, 2, 1)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(1,2,2,1)");
  test_for_zero(t4ddg_1(1, 2, 2, 2)
                  - (t4ddg_2(1, 2, 2, 2) - t4ddg_3(1, 2, 2, 2)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(1,2,2,2)");
  test_for_zero(t4ddg_1(2, 0, 0, 0)
                  - (t4ddg_2(2, 0, 0, 0) - t4ddg_3(2, 0, 0, 0)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(2,0,0,0)");
  test_for_zero(t4ddg_1(2, 0, 0, 1)
                  - (t4ddg_2(2, 0, 0, 1) - t4ddg_3(2, 0, 0, 1)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(2,0,0,1)");
  test_for_zero(t4ddg_1(2, 0, 0, 2)
                  - (t4ddg_2(2, 0, 0, 2) - t4ddg_3(2, 0, 0, 2)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(2,0,0,2)");
  test_for_zero(t4ddg_1(2, 0, 1, 0)
                  - (t4ddg_2(2, 0, 1, 0) - t4ddg_3(2, 0, 1, 0)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(2,0,1,0)");
  test_for_zero(t4ddg_1(2, 0, 1, 1)
                  - (t4ddg_2(2, 0, 1, 1) - t4ddg_3(2, 0, 1, 1)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(2,0,1,1)");
  test_for_zero(t4ddg_1(2, 0, 1, 2)
                  - (t4ddg_2(2, 0, 1, 2) - t4ddg_3(2, 0, 1, 2)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(2,0,1,2)");
  test_for_zero(t4ddg_1(2, 0, 2, 0)
                  - (t4ddg_2(2, 0, 2, 0) - t4ddg_3(2, 0, 2, 0)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(2,0,2,0)");
  test_for_zero(t4ddg_1(2, 0, 2, 1)
                  - (t4ddg_2(2, 0, 2, 1) - t4ddg_3(2, 0, 2, 1)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(2,0,2,1)");
  test_for_zero(t4ddg_1(2, 0, 2, 2)
                  - (t4ddg_2(2, 0, 2, 2) - t4ddg_3(2, 0, 2, 2)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(2,0,2,2)");
  test_for_zero(t4ddg_1(2, 1, 0, 0)
                  - (t4ddg_2(2, 1, 0, 0) - t4ddg_3(2, 1, 0, 0)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(2,1,0,0)");
  test_for_zero(t4ddg_1(2, 1, 0, 1)
                  - (t4ddg_2(2, 1, 0, 1) - t4ddg_3(2, 1, 0, 1)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(2,1,0,1)");
  test_for_zero(t4ddg_1(2, 1, 0, 2)
                  - (t4ddg_2(2, 1, 0, 2) - t4ddg_3(2, 1, 0, 2)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(2,1,0,2)");
  test_for_zero(t4ddg_1(2, 1, 1, 0)
                  - (t4ddg_2(2, 1, 1, 0) - t4ddg_3(2, 1, 1, 0)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(2,1,1,0)");
  test_for_zero(t4ddg_1(2, 1, 1, 1)
                  - (t4ddg_2(2, 1, 1, 1) - t4ddg_3(2, 1, 1, 1)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(2,1,1,1)");
  test_for_zero(t4ddg_1(2, 1, 1, 2)
                  - (t4ddg_2(2, 1, 1, 2) - t4ddg_3(2, 1, 1, 2)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(2,1,1,2)");
  test_for_zero(t4ddg_1(2, 1, 2, 0)
                  - (t4ddg_2(2, 1, 2, 0) - t4ddg_3(2, 1, 2, 0)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(2,1,2,0)");
  test_for_zero(t4ddg_1(2, 1, 2, 1)
                  - (t4ddg_2(2, 1, 2, 1) - t4ddg_3(2, 1, 2, 1)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(2,1,2,1)");
  test_for_zero(t4ddg_1(2, 1, 2, 2)
                  - (t4ddg_2(2, 1, 2, 2) - t4ddg_3(2, 1, 2, 2)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(2,1,2,2)");
  test_for_zero(t4ddg_1(2, 2, 0, 0)
                  - (t4ddg_2(2, 2, 0, 0) - t4ddg_3(2, 2, 0, 0)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(2,2,0,0)");
  test_for_zero(t4ddg_1(2, 2, 0, 1)
                  - (t4ddg_2(2, 2, 0, 1) - t4ddg_3(2, 2, 0, 1)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(2,2,0,1)");
  test_for_zero(t4ddg_1(2, 2, 0, 2)
                  - (t4ddg_2(2, 2, 0, 2) - t4ddg_3(2, 2, 0, 2)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(2,2,0,2)");
  test_for_zero(t4ddg_1(2, 2, 1, 0)
                  - (t4ddg_2(2, 2, 1, 0) - t4ddg_3(2, 2, 1, 0)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(2,2,1,0)");
  test_for_zero(t4ddg_1(2, 2, 1, 1)
                  - (t4ddg_2(2, 2, 1, 1) - t4ddg_3(2, 2, 1, 1)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(2,2,1,1)");
  test_for_zero(t4ddg_1(2, 2, 1, 2)
                  - (t4ddg_2(2, 2, 1, 2) - t4ddg_3(2, 2, 1, 2)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(2,2,1,2)");
  test_for_zero(t4ddg_1(2, 2, 2, 0)
                  - (t4ddg_2(2, 2, 2, 0) - t4ddg_3(2, 2, 2, 0)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(2,2,2,0)");
  test_for_zero(t4ddg_1(2, 2, 2, 1)
                  - (t4ddg_2(2, 2, 2, 1) - t4ddg_3(2, 2, 2, 1)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(2,2,2,1)");
  test_for_zero(t4ddg_1(2, 2, 2, 2)
                  - (t4ddg_2(2, 2, 2, 2) - t4ddg_3(2, 2, 2, 2)),
                "T4ddg(i,j,k,l)-T4ddg(i,j,k,l)(2,2,2,2)");

  t4ddg_2(i, k, j, l) = t2s_2(i, k) * t2s_2(j, l);
  t4ddg_3(i, l, j, k) = t2s_2(i, l) * t2s_2(j, k);
  t4ddg_1(i, j, k, l) = (t4ddg_2(i, k, j, l) || t4ddg_3(i, l, j, k));
  test_for_zero(t4ddg_1(0, 0, 0, 0)
                  - (t4ddg_2(0, 0, 0, 0) + t4ddg_3(0, 0, 0, 0)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(0,0,0,0)");
  test_for_zero(t4ddg_1(0, 0, 0, 1)
                  - (t4ddg_2(0, 0, 0, 1) + t4ddg_3(0, 1, 0, 0)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(0,0,0,1)");
  test_for_zero(t4ddg_1(0, 0, 0, 2)
                  - (t4ddg_2(0, 0, 0, 2) + t4ddg_3(0, 2, 0, 0)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(0,0,0,2)");
  test_for_zero(t4ddg_1(0, 1, 0, 0)
                  - (t4ddg_2(0, 0, 1, 0) + t4ddg_3(0, 0, 1, 0)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(0,0,1,0)");
  test_for_zero(t4ddg_1(0, 1, 0, 1)
                  - (t4ddg_2(0, 0, 1, 1) + t4ddg_3(0, 1, 1, 0)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(0,0,1,1)");
  test_for_zero(t4ddg_1(0, 1, 0, 2)
                  - (t4ddg_2(0, 0, 1, 2) + t4ddg_3(0, 2, 1, 0)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(0,0,1,2)");
  test_for_zero(t4ddg_1(0, 2, 0, 0)
                  - (t4ddg_2(0, 0, 2, 0) + t4ddg_3(0, 0, 2, 0)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(0,0,2,0)");
  test_for_zero(t4ddg_1(0, 2, 0, 1)
                  - (t4ddg_2(0, 0, 2, 1) + t4ddg_3(0, 1, 2, 0)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(0,0,2,1)");
  test_for_zero(t4ddg_1(0, 2, 0, 2)
                  - (t4ddg_2(0, 0, 2, 2) + t4ddg_3(0, 2, 2, 0)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(0,0,2,2)");
  test_for_zero(t4ddg_1(0, 0, 1, 0)
                  - (t4ddg_2(0, 1, 0, 0) + t4ddg_3(0, 0, 0, 1)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(0,1,0,0)");
  test_for_zero(t4ddg_1(0, 0, 1, 1)
                  - (t4ddg_2(0, 1, 0, 1) + t4ddg_3(0, 1, 0, 1)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(0,1,0,1)");
  test_for_zero(t4ddg_1(0, 0, 1, 2)
                  - (t4ddg_2(0, 1, 0, 2) + t4ddg_3(0, 2, 0, 1)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(0,1,0,2)");
  test_for_zero(t4ddg_1(0, 1, 1, 0)
                  - (t4ddg_2(0, 1, 1, 0) + t4ddg_3(0, 0, 1, 1)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(0,1,1,0)");
  test_for_zero(t4ddg_1(0, 1, 1, 1)
                  - (t4ddg_2(0, 1, 1, 1) + t4ddg_3(0, 1, 1, 1)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(0,1,1,1)");
  test_for_zero(t4ddg_1(0, 1, 1, 2)
                  - (t4ddg_2(0, 1, 1, 2) + t4ddg_3(0, 2, 1, 1)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(0,1,1,2)");
  test_for_zero(t4ddg_1(0, 2, 1, 0)
                  - (t4ddg_2(0, 1, 2, 0) + t4ddg_3(0, 0, 2, 1)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(0,1,2,0)");
  test_for_zero(t4ddg_1(0, 2, 1, 1)
                  - (t4ddg_2(0, 1, 2, 1) + t4ddg_3(0, 1, 2, 1)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(0,1,2,1)");
  test_for_zero(t4ddg_1(0, 2, 1, 2)
                  - (t4ddg_2(0, 1, 2, 2) + t4ddg_3(0, 2, 2, 1)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(0,1,2,2)");
  test_for_zero(t4ddg_1(0, 0, 2, 0)
                  - (t4ddg_2(0, 2, 0, 0) + t4ddg_3(0, 0, 0, 2)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(0,2,0,0)");
  test_for_zero(t4ddg_1(0, 0, 2, 1)
                  - (t4ddg_2(0, 2, 0, 1) + t4ddg_3(0, 1, 0, 2)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(0,2,0,1)");
  test_for_zero(t4ddg_1(0, 0, 2, 2)
                  - (t4ddg_2(0, 2, 0, 2) + t4ddg_3(0, 2, 0, 2)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(0,2,0,2)");
  test_for_zero(t4ddg_1(0, 1, 2, 0)
                  - (t4ddg_2(0, 2, 1, 0) + t4ddg_3(0, 0, 1, 2)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(0,2,1,0)");
  test_for_zero(t4ddg_1(0, 1, 2, 1)
                  - (t4ddg_2(0, 2, 1, 1) + t4ddg_3(0, 1, 1, 2)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(0,2,1,1)");
  test_for_zero(t4ddg_1(0, 1, 2, 2)
                  - (t4ddg_2(0, 2, 1, 2) + t4ddg_3(0, 2, 1, 2)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(0,2,1,2)");
  test_for_zero(t4ddg_1(0, 2, 2, 0)
                  - (t4ddg_2(0, 2, 2, 0) + t4ddg_3(0, 0, 2, 2)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(0,2,2,0)");
  test_for_zero(t4ddg_1(0, 2, 2, 1)
                  - (t4ddg_2(0, 2, 2, 1) + t4ddg_3(0, 1, 2, 2)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(0,2,2,1)");
  test_for_zero(t4ddg_1(0, 2, 2, 2)
                  - (t4ddg_2(0, 2, 2, 2) + t4ddg_3(0, 2, 2, 2)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(0,2,2,2)");
  test_for_zero(t4ddg_1(1, 0, 0, 0)
                  - (t4ddg_2(1, 0, 0, 0) + t4ddg_3(1, 0, 0, 0)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(1,0,0,0)");
  test_for_zero(t4ddg_1(1, 0, 0, 1)
                  - (t4ddg_2(1, 0, 0, 1) + t4ddg_3(1, 1, 0, 0)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(1,0,0,1)");
  test_for_zero(t4ddg_1(1, 0, 0, 2)
                  - (t4ddg_2(1, 0, 0, 2) + t4ddg_3(1, 2, 0, 0)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(1,0,0,2)");
  test_for_zero(t4ddg_1(1, 1, 0, 0)
                  - (t4ddg_2(1, 0, 1, 0) + t4ddg_3(1, 0, 1, 0)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(1,0,1,0)");
  test_for_zero(t4ddg_1(1, 1, 0, 1)
                  - (t4ddg_2(1, 0, 1, 1) + t4ddg_3(1, 1, 1, 0)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(1,0,1,1)");
  test_for_zero(t4ddg_1(1, 1, 0, 2)
                  - (t4ddg_2(1, 0, 1, 2) + t4ddg_3(1, 2, 1, 0)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(1,0,1,2)");
  test_for_zero(t4ddg_1(1, 2, 0, 0)
                  - (t4ddg_2(1, 0, 2, 0) + t4ddg_3(1, 0, 2, 0)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(1,0,2,0)");
  test_for_zero(t4ddg_1(1, 2, 0, 1)
                  - (t4ddg_2(1, 0, 2, 1) + t4ddg_3(1, 1, 2, 0)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(1,0,2,1)");
  test_for_zero(t4ddg_1(1, 2, 0, 2)
                  - (t4ddg_2(1, 0, 2, 2) + t4ddg_3(1, 2, 2, 0)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(1,0,2,2)");
  test_for_zero(t4ddg_1(1, 0, 1, 0)
                  - (t4ddg_2(1, 1, 0, 0) + t4ddg_3(1, 0, 0, 1)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(1,1,0,0)");
  test_for_zero(t4ddg_1(1, 0, 1, 1)
                  - (t4ddg_2(1, 1, 0, 1) + t4ddg_3(1, 1, 0, 1)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(1,1,0,1)");
  test_for_zero(t4ddg_1(1, 0, 1, 2)
                  - (t4ddg_2(1, 1, 0, 2) + t4ddg_3(1, 2, 0, 1)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(1,1,0,2)");
  test_for_zero(t4ddg_1(1, 1, 1, 0)
                  - (t4ddg_2(1, 1, 1, 0) + t4ddg_3(1, 0, 1, 1)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(1,1,1,0)");
  test_for_zero(t4ddg_1(1, 1, 1, 1)
                  - (t4ddg_2(1, 1, 1, 1) + t4ddg_3(1, 1, 1, 1)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(1,1,1,1)");
  test_for_zero(t4ddg_1(1, 1, 1, 2)
                  - (t4ddg_2(1, 1, 1, 2) + t4ddg_3(1, 2, 1, 1)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(1,1,1,2)");
  test_for_zero(t4ddg_1(1, 2, 1, 0)
                  - (t4ddg_2(1, 1, 2, 0) + t4ddg_3(1, 0, 2, 1)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(1,1,2,0)");
  test_for_zero(t4ddg_1(1, 2, 1, 1)
                  - (t4ddg_2(1, 1, 2, 1) + t4ddg_3(1, 1, 2, 1)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(1,1,2,1)");
  test_for_zero(t4ddg_1(1, 2, 1, 2)
                  - (t4ddg_2(1, 1, 2, 2) + t4ddg_3(1, 2, 2, 1)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(1,1,2,2)");
  test_for_zero(t4ddg_1(1, 0, 2, 0)
                  - (t4ddg_2(1, 2, 0, 0) + t4ddg_3(1, 0, 0, 2)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(1,2,0,0)");
  test_for_zero(t4ddg_1(1, 0, 2, 1)
                  - (t4ddg_2(1, 2, 0, 1) + t4ddg_3(1, 1, 0, 2)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(1,2,0,1)");
  test_for_zero(t4ddg_1(1, 0, 2, 2)
                  - (t4ddg_2(1, 2, 0, 2) + t4ddg_3(1, 2, 0, 2)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(1,2,0,2)");
  test_for_zero(t4ddg_1(1, 1, 2, 0)
                  - (t4ddg_2(1, 2, 1, 0) + t4ddg_3(1, 0, 1, 2)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(1,2,1,0)");
  test_for_zero(t4ddg_1(1, 1, 2, 1)
                  - (t4ddg_2(1, 2, 1, 1) + t4ddg_3(1, 1, 1, 2)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(1,2,1,1)");
  test_for_zero(t4ddg_1(1, 1, 2, 2)
                  - (t4ddg_2(1, 2, 1, 2) + t4ddg_3(1, 2, 1, 2)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(1,2,1,2)");
  test_for_zero(t4ddg_1(1, 2, 2, 0)
                  - (t4ddg_2(1, 2, 2, 0) + t4ddg_3(1, 0, 2, 2)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(1,2,2,0)");
  test_for_zero(t4ddg_1(1, 2, 2, 1)
                  - (t4ddg_2(1, 2, 2, 1) + t4ddg_3(1, 1, 2, 2)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(1,2,2,1)");
  test_for_zero(t4ddg_1(1, 2, 2, 2)
                  - (t4ddg_2(1, 2, 2, 2) + t4ddg_3(1, 2, 2, 2)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(1,2,2,2)");
  test_for_zero(t4ddg_1(2, 0, 0, 0)
                  - (t4ddg_2(2, 0, 0, 0) + t4ddg_3(2, 0, 0, 0)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(2,0,0,0)");
  test_for_zero(t4ddg_1(2, 0, 0, 1)
                  - (t4ddg_2(2, 0, 0, 1) + t4ddg_3(2, 1, 0, 0)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(2,0,0,1)");
  test_for_zero(t4ddg_1(2, 0, 0, 2)
                  - (t4ddg_2(2, 0, 0, 2) + t4ddg_3(2, 2, 0, 0)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(2,0,0,2)");
  test_for_zero(t4ddg_1(2, 1, 0, 0)
                  - (t4ddg_2(2, 0, 1, 0) + t4ddg_3(2, 0, 1, 0)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(2,0,1,0)");
  test_for_zero(t4ddg_1(2, 1, 0, 1)
                  - (t4ddg_2(2, 0, 1, 1) + t4ddg_3(2, 1, 1, 0)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(2,0,1,1)");
  test_for_zero(t4ddg_1(2, 1, 0, 2)
                  - (t4ddg_2(2, 0, 1, 2) + t4ddg_3(2, 2, 1, 0)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(2,0,1,2)");
  test_for_zero(t4ddg_1(2, 2, 0, 0)
                  - (t4ddg_2(2, 0, 2, 0) + t4ddg_3(2, 0, 2, 0)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(2,0,2,0)");
  test_for_zero(t4ddg_1(2, 2, 0, 1)
                  - (t4ddg_2(2, 0, 2, 1) + t4ddg_3(2, 1, 2, 0)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(2,0,2,1)");
  test_for_zero(t4ddg_1(2, 2, 0, 2)
                  - (t4ddg_2(2, 0, 2, 2) + t4ddg_3(2, 2, 2, 0)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(2,0,2,2)");
  test_for_zero(t4ddg_1(2, 0, 1, 0)
                  - (t4ddg_2(2, 1, 0, 0) + t4ddg_3(2, 0, 0, 1)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(2,1,0,0)");
  test_for_zero(t4ddg_1(2, 0, 1, 1)
                  - (t4ddg_2(2, 1, 0, 1) + t4ddg_3(2, 1, 0, 1)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(2,1,0,1)");
  test_for_zero(t4ddg_1(2, 0, 1, 2)
                  - (t4ddg_2(2, 1, 0, 2) + t4ddg_3(2, 2, 0, 1)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(2,1,0,2)");
  test_for_zero(t4ddg_1(2, 1, 1, 0)
                  - (t4ddg_2(2, 1, 1, 0) + t4ddg_3(2, 0, 1, 1)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(2,1,1,0)");
  test_for_zero(t4ddg_1(2, 1, 1, 1)
                  - (t4ddg_2(2, 1, 1, 1) + t4ddg_3(2, 1, 1, 1)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(2,1,1,1)");
  test_for_zero(t4ddg_1(2, 1, 1, 2)
                  - (t4ddg_2(2, 1, 1, 2) + t4ddg_3(2, 2, 1, 1)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(2,1,1,2)");
  test_for_zero(t4ddg_1(2, 2, 1, 0)
                  - (t4ddg_2(2, 1, 2, 0) + t4ddg_3(2, 0, 2, 1)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(2,1,2,0)");
  test_for_zero(t4ddg_1(2, 2, 1, 1)
                  - (t4ddg_2(2, 1, 2, 1) + t4ddg_3(2, 1, 2, 1)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(2,1,2,1)");
  test_for_zero(t4ddg_1(2, 2, 1, 2)
                  - (t4ddg_2(2, 1, 2, 2) + t4ddg_3(2, 2, 2, 1)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(2,1,2,2)");
  test_for_zero(t4ddg_1(2, 0, 2, 0)
                  - (t4ddg_2(2, 2, 0, 0) + t4ddg_3(2, 0, 0, 2)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(2,2,0,0)");
  test_for_zero(t4ddg_1(2, 0, 2, 1)
                  - (t4ddg_2(2, 2, 0, 1) + t4ddg_3(2, 1, 0, 2)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(2,2,0,1)");
  test_for_zero(t4ddg_1(2, 0, 2, 2)
                  - (t4ddg_2(2, 2, 0, 2) + t4ddg_3(2, 2, 0, 2)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(2,2,0,2)");
  test_for_zero(t4ddg_1(2, 1, 2, 0)
                  - (t4ddg_2(2, 2, 1, 0) + t4ddg_3(2, 0, 1, 2)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(2,2,1,0)");
  test_for_zero(t4ddg_1(2, 1, 2, 1)
                  - (t4ddg_2(2, 2, 1, 1) + t4ddg_3(2, 1, 1, 2)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(2,2,1,1)");
  test_for_zero(t4ddg_1(2, 1, 2, 2)
                  - (t4ddg_2(2, 2, 1, 2) + t4ddg_3(2, 2, 1, 2)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(2,2,1,2)");
  test_for_zero(t4ddg_1(2, 2, 2, 0)
                  - (t4ddg_2(2, 2, 2, 0) + t4ddg_3(2, 0, 2, 2)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(2,2,2,0)");
  test_for_zero(t4ddg_1(2, 2, 2, 1)
                  - (t4ddg_2(2, 2, 2, 1) + t4ddg_3(2, 1, 2, 2)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(2,2,2,1)");
  test_for_zero(t4ddg_1(2, 2, 2, 2)
                  - (t4ddg_2(2, 2, 2, 2) + t4ddg_3(2, 2, 2, 2)),
                "T4ddg(i,k,j,l)||T4ddg(i,l,j,k)(2,2,2,2)");
}
