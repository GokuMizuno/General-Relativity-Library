#include "../../../src/FTensor.hpp"
#include "../test_for_zero.hpp"
#include <iostream>
using namespace FTensor;
using namespace std;

void test_T3_03(const Tensor3<double, 3, 3, 3> &t3_1)
{
  Index<'i', 3> i;
  Index<'j', 3> j;
  Index<'k', 3> k;

  Number<0> N0;
  Number<1> N1;
  Number<2> N2;

  Tensor3<double, 3, 3, 3> t3;

  t3(i, j, k) = t3_1(i, j, k);

  test_for_zero(t3(0, 0, 0) - t3_1(0, 0, 0), "T3(i,j,k)=T3(i,j,k)(0,0,0)");
  test_for_zero(t3(0, 0, 1) - t3_1(0, 0, 1), "T3(i,j,k)=T3(i,j,k)(0,0,1)");
  test_for_zero(t3(0, 0, 2) - t3_1(0, 0, 2), "T3(i,j,k)=T3(i,j,k)(0,0,2)");
  test_for_zero(t3(0, 1, 0) - t3_1(0, 1, 0), "T3(i,j,k)=T3(i,j,k)(0,1,0)");
  test_for_zero(t3(0, 1, 1) - t3_1(0, 1, 1), "T3(i,j,k)=T3(i,j,k)(0,1,1)");
  test_for_zero(t3(0, 1, 2) - t3_1(0, 1, 2), "T3(i,j,k)=T3(i,j,k)(0,1,2)");
  test_for_zero(t3(0, 2, 0) - t3_1(0, 2, 0), "T3(i,j,k)=T3(i,j,k)(0,2,0)");
  test_for_zero(t3(0, 2, 1) - t3_1(0, 2, 1), "T3(i,j,k)=T3(i,j,k)(0,2,1)");
  test_for_zero(t3(0, 2, 2) - t3_1(0, 2, 2), "T3(i,j,k)=T3(i,j,k)(0,2,2)");

  test_for_zero(t3(1, 0, 0) - t3_1(1, 0, 0), "T3(i,j,k)=T3(i,j,k)(1,0,0)");
  test_for_zero(t3(1, 0, 1) - t3_1(1, 0, 1), "T3(i,j,k)=T3(i,j,k)(1,0,1)");
  test_for_zero(t3(1, 0, 2) - t3_1(1, 0, 2), "T3(i,j,k)=T3(i,j,k)(1,0,2)");
  test_for_zero(t3(1, 1, 0) - t3_1(1, 1, 0), "T3(i,j,k)=T3(i,j,k)(1,1,0)");
  test_for_zero(t3(1, 1, 1) - t3_1(1, 1, 1), "T3(i,j,k)=T3(i,j,k)(1,1,1)");
  test_for_zero(t3(1, 1, 2) - t3_1(1, 1, 2), "T3(i,j,k)=T3(i,j,k)(1,1,2)");
  test_for_zero(t3(1, 2, 0) - t3_1(1, 2, 0), "T3(i,j,k)=T3(i,j,k)(1,2,0)");
  test_for_zero(t3(1, 2, 1) - t3_1(1, 2, 1), "T3(i,j,k)=T3(i,j,k)(1,2,1)");
  test_for_zero(t3(1, 2, 2) - t3_1(1, 2, 2), "T3(i,j,k)=T3(i,j,k)(1,2,2)");

  test_for_zero(t3(2, 0, 0) - t3_1(2, 0, 0), "T3(i,j,k)=T3(i,j,k)(2,0,0)");
  test_for_zero(t3(2, 0, 1) - t3_1(2, 0, 1), "T3(i,j,k)=T3(i,j,k)(2,0,1)");
  test_for_zero(t3(2, 0, 2) - t3_1(2, 0, 2), "T3(i,j,k)=T3(i,j,k)(2,0,2)");
  test_for_zero(t3(2, 1, 0) - t3_1(2, 1, 0), "T3(i,j,k)=T3(i,j,k)(2,1,0)");
  test_for_zero(t3(2, 1, 1) - t3_1(2, 1, 1), "T3(i,j,k)=T3(i,j,k)(2,1,1)");
  test_for_zero(t3(2, 1, 2) - t3_1(2, 1, 2), "T3(i,j,k)=T3(i,j,k)(2,1,2)");
  test_for_zero(t3(2, 2, 0) - t3_1(2, 2, 0), "T3(i,j,k)=T3(i,j,k)(2,2,0)");
  test_for_zero(t3(2, 2, 1) - t3_1(2, 2, 1), "T3(i,j,k)=T3(i,j,k)(2,2,1)");
  test_for_zero(t3(2, 2, 2) - t3_1(2, 2, 2), "T3(i,j,k)=T3(i,j,k)(2,2,2)");

  t3(i, j, k) = 10;

  test_for_zero(t3(0, 0, 0) - 10, "T3(i,j,k)=T(0,0,0)");
  test_for_zero(t3(0, 0, 1) - 10, "T3(i,j,k)=T(0,0,1)");
  test_for_zero(t3(0, 0, 2) - 10, "T3(i,j,k)=T(0,0,2)");
  test_for_zero(t3(0, 1, 0) - 10, "T3(i,j,k)=T(0,1,0)");
  test_for_zero(t3(0, 1, 1) - 10, "T3(i,j,k)=T(0,1,1)");
  test_for_zero(t3(0, 1, 2) - 10, "T3(i,j,k)=T(0,1,2)");
  test_for_zero(t3(0, 2, 0) - 10, "T3(i,j,k)=T(0,2,0)");
  test_for_zero(t3(0, 2, 1) - 10, "T3(i,j,k)=T(0,2,1)");
  test_for_zero(t3(0, 2, 2) - 10, "T3(i,j,k)=T(0,2,2)");

  test_for_zero(t3(1, 0, 0) - 10, "T3(i,j,k)=T(1,0,0)");
  test_for_zero(t3(1, 0, 1) - 10, "T3(i,j,k)=T(1,0,1)");
  test_for_zero(t3(1, 0, 2) - 10, "T3(i,j,k)=T(1,0,2)");
  test_for_zero(t3(1, 1, 0) - 10, "T3(i,j,k)=T(1,1,0)");
  test_for_zero(t3(1, 1, 1) - 10, "T3(i,j,k)=T(1,1,1)");
  test_for_zero(t3(1, 1, 2) - 10, "T3(i,j,k)=T(1,1,2)");
  test_for_zero(t3(1, 2, 0) - 10, "T3(i,j,k)=T(1,2,0)");
  test_for_zero(t3(1, 2, 1) - 10, "T3(i,j,k)=T(1,2,1)");
  test_for_zero(t3(1, 2, 2) - 10, "T3(i,j,k)=T(1,2,2)");

  test_for_zero(t3(2, 0, 0) - 10, "T3(i,j,k)=T(2,0,0)");
  test_for_zero(t3(2, 0, 1) - 10, "T3(i,j,k)=T(2,0,1)");
  test_for_zero(t3(2, 0, 2) - 10, "T3(i,j,k)=T(2,0,2)");
  test_for_zero(t3(2, 1, 0) - 10, "T3(i,j,k)=T(2,1,0)");
  test_for_zero(t3(2, 1, 1) - 10, "T3(i,j,k)=T(2,1,1)");
  test_for_zero(t3(2, 1, 2) - 10, "T3(i,j,k)=T(2,1,2)");
  test_for_zero(t3(2, 2, 0) - 10, "T3(i,j,k)=T(2,2,0)");
  test_for_zero(t3(2, 2, 1) - 10, "T3(i,j,k)=T(2,2,1)");
  test_for_zero(t3(2, 2, 2) - 10, "T3(i,j,k)=T(2,2,2)");

  t3(i, j, k) = t3_1(i, k, j);

  test_for_zero(t3(0, 0, 0) - t3_1(0, 0, 0), "T3(i,j,k)=T3(i,k,j)(0,0,0)");
  test_for_zero(t3(0, 0, 1) - t3_1(0, 1, 0), "T3(i,j,k)=T3(i,k,j)(0,0,1)");
  test_for_zero(t3(0, 0, 2) - t3_1(0, 2, 0), "T3(i,j,k)=T3(i,k,j)(0,0,2)");
  test_for_zero(t3(0, 1, 0) - t3_1(0, 0, 1), "T3(i,j,k)=T3(i,k,j)(0,1,0)");
  test_for_zero(t3(0, 1, 1) - t3_1(0, 1, 1), "T3(i,j,k)=T3(i,k,j)(0,1,1)");
  test_for_zero(t3(0, 1, 2) - t3_1(0, 2, 1), "T3(i,j,k)=T3(i,k,j)(0,1,2)");
  test_for_zero(t3(0, 2, 0) - t3_1(0, 0, 2), "T3(i,j,k)=T3(i,k,j)(0,2,0)");
  test_for_zero(t3(0, 2, 1) - t3_1(0, 1, 2), "T3(i,j,k)=T3(i,k,j)(0,2,1)");
  test_for_zero(t3(0, 2, 2) - t3_1(0, 2, 2), "T3(i,j,k)=T3(i,k,j)(0,2,2)");

  test_for_zero(t3(1, 0, 0) - t3_1(1, 0, 0), "T3(i,j,k)=T3(i,k,j)(1,0,0)");
  test_for_zero(t3(1, 0, 1) - t3_1(1, 1, 0), "T3(i,j,k)=T3(i,k,j)(1,0,1)");
  test_for_zero(t3(1, 0, 2) - t3_1(1, 2, 0), "T3(i,j,k)=T3(i,k,j)(1,0,2)");
  test_for_zero(t3(1, 1, 0) - t3_1(1, 0, 1), "T3(i,j,k)=T3(i,k,j)(1,1,0)");
  test_for_zero(t3(1, 1, 1) - t3_1(1, 1, 1), "T3(i,j,k)=T3(i,k,j)(1,1,1)");
  test_for_zero(t3(1, 1, 2) - t3_1(1, 2, 1), "T3(i,j,k)=T3(i,k,j)(1,1,2)");
  test_for_zero(t3(1, 2, 0) - t3_1(1, 0, 2), "T3(i,j,k)=T3(i,k,j)(1,2,0)");
  test_for_zero(t3(1, 2, 1) - t3_1(1, 1, 2), "T3(i,j,k)=T3(i,k,j)(1,2,1)");
  test_for_zero(t3(1, 2, 2) - t3_1(1, 2, 2), "T3(i,j,k)=T3(i,k,j)(1,2,2)");

  test_for_zero(t3(2, 0, 0) - t3_1(2, 0, 0), "T3(i,j,k)=T3(i,k,j)(2,0,0)");
  test_for_zero(t3(2, 0, 1) - t3_1(2, 1, 0), "T3(i,j,k)=T3(i,k,j)(2,0,1)");
  test_for_zero(t3(2, 0, 2) - t3_1(2, 2, 0), "T3(i,j,k)=T3(i,k,j)(2,0,2)");
  test_for_zero(t3(2, 1, 0) - t3_1(2, 0, 1), "T3(i,j,k)=T3(i,k,j)(2,1,0)");
  test_for_zero(t3(2, 1, 1) - t3_1(2, 1, 1), "T3(i,j,k)=T3(i,k,j)(2,1,1)");
  test_for_zero(t3(2, 1, 2) - t3_1(2, 2, 1), "T3(i,j,k)=T3(i,k,j)(2,1,2)");
  test_for_zero(t3(2, 2, 0) - t3_1(2, 0, 2), "T3(i,j,k)=T3(i,k,j)(2,2,0)");
  test_for_zero(t3(2, 2, 1) - t3_1(2, 1, 2), "T3(i,j,k)=T3(i,k,j)(2,2,1)");
  test_for_zero(t3(2, 2, 2) - t3_1(2, 2, 2), "T3(i,j,k)=T3(i,k,j)(2,2,2)");

  t3(i, j, k) = t3_1(j, i, k);

  test_for_zero(t3(0, 0, 0) - t3_1(0, 0, 0), "T3(i,j,k)=T3(j,i,k)(0,0,0)");
  test_for_zero(t3(0, 0, 1) - t3_1(0, 0, 1), "T3(i,j,k)=T3(j,i,k)(0,0,1)");
  test_for_zero(t3(0, 0, 2) - t3_1(0, 0, 2), "T3(i,j,k)=T3(j,i,k)(0,0,2)");
  test_for_zero(t3(0, 1, 0) - t3_1(1, 0, 0), "T3(i,j,k)=T3(j,i,k)(0,1,0)");
  test_for_zero(t3(0, 1, 1) - t3_1(1, 0, 1), "T3(i,j,k)=T3(j,i,k)(0,1,1)");
  test_for_zero(t3(0, 1, 2) - t3_1(1, 0, 2), "T3(i,j,k)=T3(j,i,k)(0,1,2)");
  test_for_zero(t3(0, 2, 0) - t3_1(2, 0, 0), "T3(i,j,k)=T3(j,i,k)(0,2,0)");
  test_for_zero(t3(0, 2, 1) - t3_1(2, 0, 1), "T3(i,j,k)=T3(j,i,k)(0,2,1)");
  test_for_zero(t3(0, 2, 2) - t3_1(2, 0, 2), "T3(i,j,k)=T3(j,i,k)(0,2,2)");

  test_for_zero(t3(1, 0, 0) - t3_1(0, 1, 0), "T3(i,j,k)=T3(j,i,k)(1,0,0)");
  test_for_zero(t3(1, 0, 1) - t3_1(0, 1, 1), "T3(i,j,k)=T3(j,i,k)(1,0,1)");
  test_for_zero(t3(1, 0, 2) - t3_1(0, 1, 2), "T3(i,j,k)=T3(j,i,k)(1,0,2)");
  test_for_zero(t3(1, 1, 0) - t3_1(1, 1, 0), "T3(i,j,k)=T3(j,i,k)(1,1,0)");
  test_for_zero(t3(1, 1, 1) - t3_1(1, 1, 1), "T3(i,j,k)=T3(j,i,k)(1,1,1)");
  test_for_zero(t3(1, 1, 2) - t3_1(1, 1, 2), "T3(i,j,k)=T3(j,i,k)(1,1,2)");
  test_for_zero(t3(1, 2, 0) - t3_1(2, 1, 0), "T3(i,j,k)=T3(j,i,k)(1,2,0)");
  test_for_zero(t3(1, 2, 1) - t3_1(2, 1, 1), "T3(i,j,k)=T3(j,i,k)(1,2,1)");
  test_for_zero(t3(1, 2, 2) - t3_1(2, 1, 2), "T3(i,j,k)=T3(j,i,k)(1,2,2)");

  test_for_zero(t3(2, 0, 0) - t3_1(0, 2, 0), "T3(i,j,k)=T3(j,i,k)(2,0,0)");
  test_for_zero(t3(2, 0, 1) - t3_1(0, 2, 1), "T3(i,j,k)=T3(j,i,k)(2,0,1)");
  test_for_zero(t3(2, 0, 2) - t3_1(0, 2, 2), "T3(i,j,k)=T3(j,i,k)(2,0,2)");
  test_for_zero(t3(2, 1, 0) - t3_1(1, 2, 0), "T3(i,j,k)=T3(j,i,k)(2,1,0)");
  test_for_zero(t3(2, 1, 1) - t3_1(1, 2, 1), "T3(i,j,k)=T3(j,i,k)(2,1,1)");
  test_for_zero(t3(2, 1, 2) - t3_1(1, 2, 2), "T3(i,j,k)=T3(j,i,k)(2,1,2)");
  test_for_zero(t3(2, 2, 0) - t3_1(2, 2, 0), "T3(i,j,k)=T3(j,i,k)(2,2,0)");
  test_for_zero(t3(2, 2, 1) - t3_1(2, 2, 1), "T3(i,j,k)=T3(j,i,k)(2,2,1)");
  test_for_zero(t3(2, 2, 2) - t3_1(2, 2, 2), "T3(i,j,k)=T3(j,i,k)(2,2,2)");

  t3(i, j, k) = t3_1(j, k, i);

  test_for_zero(t3(0, 0, 0) - t3_1(0, 0, 0), "T3(i,j,k)=T3(j,k,i)(0,0,0)");
  test_for_zero(t3(0, 0, 1) - t3_1(0, 1, 0), "T3(i,j,k)=T3(j,k,i)(0,0,1)");
  test_for_zero(t3(0, 0, 2) - t3_1(0, 2, 0), "T3(i,j,k)=T3(j,k,i)(0,0,2)");
  test_for_zero(t3(0, 1, 0) - t3_1(1, 0, 0), "T3(i,j,k)=T3(j,k,i)(0,1,0)");
  test_for_zero(t3(0, 1, 1) - t3_1(1, 1, 0), "T3(i,j,k)=T3(j,k,i)(0,1,1)");
  test_for_zero(t3(0, 1, 2) - t3_1(1, 2, 0), "T3(i,j,k)=T3(j,k,i)(0,1,2)");
  test_for_zero(t3(0, 2, 0) - t3_1(2, 0, 0), "T3(i,j,k)=T3(j,k,i)(0,2,0)");
  test_for_zero(t3(0, 2, 1) - t3_1(2, 1, 0), "T3(i,j,k)=T3(j,k,i)(0,2,1)");
  test_for_zero(t3(0, 2, 2) - t3_1(2, 2, 0), "T3(i,j,k)=T3(j,k,i)(0,2,2)");

  test_for_zero(t3(1, 0, 0) - t3_1(0, 0, 1), "T3(i,j,k)=T3(j,k,i)(1,0,0)");
  test_for_zero(t3(1, 0, 1) - t3_1(0, 1, 1), "T3(i,j,k)=T3(j,k,i)(1,0,1)");
  test_for_zero(t3(1, 0, 2) - t3_1(0, 2, 1), "T3(i,j,k)=T3(j,k,i)(1,0,2)");
  test_for_zero(t3(1, 1, 0) - t3_1(1, 0, 1), "T3(i,j,k)=T3(j,k,i)(1,1,0)");
  test_for_zero(t3(1, 1, 1) - t3_1(1, 1, 1), "T3(i,j,k)=T3(j,k,i)(1,1,1)");
  test_for_zero(t3(1, 1, 2) - t3_1(1, 2, 1), "T3(i,j,k)=T3(j,k,i)(1,1,2)");
  test_for_zero(t3(1, 2, 0) - t3_1(2, 0, 1), "T3(i,j,k)=T3(j,k,i)(1,2,0)");
  test_for_zero(t3(1, 2, 1) - t3_1(2, 1, 1), "T3(i,j,k)=T3(j,k,i)(1,2,1)");
  test_for_zero(t3(1, 2, 2) - t3_1(2, 2, 1), "T3(i,j,k)=T3(j,k,i)(1,2,2)");

  test_for_zero(t3(2, 0, 0) - t3_1(0, 0, 2), "T3(i,j,k)=T3(j,k,i)(2,0,0)");
  test_for_zero(t3(2, 0, 1) - t3_1(0, 1, 2), "T3(i,j,k)=T3(j,k,i)(2,0,1)");
  test_for_zero(t3(2, 0, 2) - t3_1(0, 2, 2), "T3(i,j,k)=T3(j,k,i)(2,0,2)");
  test_for_zero(t3(2, 1, 0) - t3_1(1, 0, 2), "T3(i,j,k)=T3(j,k,i)(2,1,0)");
  test_for_zero(t3(2, 1, 1) - t3_1(1, 1, 2), "T3(i,j,k)=T3(j,k,i)(2,1,1)");
  test_for_zero(t3(2, 1, 2) - t3_1(1, 2, 2), "T3(i,j,k)=T3(j,k,i)(2,1,2)");
  test_for_zero(t3(2, 2, 0) - t3_1(2, 0, 2), "T3(i,j,k)=T3(j,k,i)(2,2,0)");
  test_for_zero(t3(2, 2, 1) - t3_1(2, 1, 2), "T3(i,j,k)=T3(j,k,i)(2,2,1)");
  test_for_zero(t3(2, 2, 2) - t3_1(2, 2, 2), "T3(i,j,k)=T3(j,k,i)(2,2,2)");

  t3(i, j, k) = t3_1(k, i, j);

  test_for_zero(t3(0, 0, 0) - t3_1(0, 0, 0), "T3(i,j,k)=T3(k,i,j)(0,0,0)");
  test_for_zero(t3(0, 0, 1) - t3_1(1, 0, 0), "T3(i,j,k)=T3(k,i,j)(0,0,1)");
  test_for_zero(t3(0, 0, 2) - t3_1(2, 0, 0), "T3(i,j,k)=T3(k,i,j)(0,0,2)");
  test_for_zero(t3(0, 1, 0) - t3_1(0, 0, 1), "T3(i,j,k)=T3(k,i,j)(0,1,0)");
  test_for_zero(t3(0, 1, 1) - t3_1(1, 0, 1), "T3(i,j,k)=T3(k,i,j)(0,1,1)");
  test_for_zero(t3(0, 1, 2) - t3_1(2, 0, 1), "T3(i,j,k)=T3(k,i,j)(0,1,2)");
  test_for_zero(t3(0, 2, 0) - t3_1(0, 0, 2), "T3(i,j,k)=T3(k,i,j)(0,2,0)");
  test_for_zero(t3(0, 2, 1) - t3_1(1, 0, 2), "T3(i,j,k)=T3(k,i,j)(0,2,1)");
  test_for_zero(t3(0, 2, 2) - t3_1(2, 0, 2), "T3(i,j,k)=T3(k,i,j)(0,2,2)");

  test_for_zero(t3(1, 0, 0) - t3_1(0, 1, 0), "T3(i,j,k)=T3(k,i,j)(1,0,0)");
  test_for_zero(t3(1, 0, 1) - t3_1(1, 1, 0), "T3(i,j,k)=T3(k,i,j)(1,0,1)");
  test_for_zero(t3(1, 0, 2) - t3_1(2, 1, 0), "T3(i,j,k)=T3(k,i,j)(1,0,2)");
  test_for_zero(t3(1, 1, 0) - t3_1(0, 1, 1), "T3(i,j,k)=T3(k,i,j)(1,1,0)");
  test_for_zero(t3(1, 1, 1) - t3_1(1, 1, 1), "T3(i,j,k)=T3(k,i,j)(1,1,1)");
  test_for_zero(t3(1, 1, 2) - t3_1(2, 1, 1), "T3(i,j,k)=T3(k,i,j)(1,1,2)");
  test_for_zero(t3(1, 2, 0) - t3_1(0, 1, 2), "T3(i,j,k)=T3(k,i,j)(1,2,0)");
  test_for_zero(t3(1, 2, 1) - t3_1(1, 1, 2), "T3(i,j,k)=T3(k,i,j)(1,2,1)");
  test_for_zero(t3(1, 2, 2) - t3_1(2, 1, 2), "T3(i,j,k)=T3(k,i,j)(1,2,2)");

  test_for_zero(t3(2, 0, 0) - t3_1(0, 2, 0), "T3(i,j,k)=T3(k,i,j)(2,0,0)");
  test_for_zero(t3(2, 0, 1) - t3_1(1, 2, 0), "T3(i,j,k)=T3(k,i,j)(2,0,1)");
  test_for_zero(t3(2, 0, 2) - t3_1(2, 2, 0), "T3(i,j,k)=T3(k,i,j)(2,0,2)");
  test_for_zero(t3(2, 1, 0) - t3_1(0, 2, 1), "T3(i,j,k)=T3(k,i,j)(2,1,0)");
  test_for_zero(t3(2, 1, 1) - t3_1(1, 2, 1), "T3(i,j,k)=T3(k,i,j)(2,1,1)");
  test_for_zero(t3(2, 1, 2) - t3_1(2, 2, 1), "T3(i,j,k)=T3(k,i,j)(2,1,2)");
  test_for_zero(t3(2, 2, 0) - t3_1(0, 2, 2), "T3(i,j,k)=T3(k,i,j)(2,2,0)");
  test_for_zero(t3(2, 2, 1) - t3_1(1, 2, 2), "T3(i,j,k)=T3(k,i,j)(2,2,1)");
  test_for_zero(t3(2, 2, 2) - t3_1(2, 2, 2), "T3(i,j,k)=T3(k,i,j)(2,2,2)");

  t3(i, j, k) = t3_1(k, j, i);

  test_for_zero(t3(0, 0, 0) - t3_1(0, 0, 0), "T3(i,j,k)=T3(k,j,i)(0,0,0)");
  test_for_zero(t3(0, 0, 1) - t3_1(1, 0, 0), "T3(i,j,k)=T3(k,j,i)(0,0,1)");
  test_for_zero(t3(0, 0, 2) - t3_1(2, 0, 0), "T3(i,j,k)=T3(k,j,i)(0,0,2)");
  test_for_zero(t3(0, 1, 0) - t3_1(0, 1, 0), "T3(i,j,k)=T3(k,j,i)(0,1,0)");
  test_for_zero(t3(0, 1, 1) - t3_1(1, 1, 0), "T3(i,j,k)=T3(k,j,i)(0,1,1)");
  test_for_zero(t3(0, 1, 2) - t3_1(2, 1, 0), "T3(i,j,k)=T3(k,j,i)(0,1,2)");
  test_for_zero(t3(0, 2, 0) - t3_1(0, 2, 0), "T3(i,j,k)=T3(k,j,i)(0,2,0)");
  test_for_zero(t3(0, 2, 1) - t3_1(1, 2, 0), "T3(i,j,k)=T3(k,j,i)(0,2,1)");
  test_for_zero(t3(0, 2, 2) - t3_1(2, 2, 0), "T3(i,j,k)=T3(k,j,i)(0,2,2)");

  test_for_zero(t3(1, 0, 0) - t3_1(0, 0, 1), "T3(i,j,k)=T3(k,j,i)(1,0,0)");
  test_for_zero(t3(1, 0, 1) - t3_1(1, 0, 1), "T3(i,j,k)=T3(k,j,i)(1,0,1)");
  test_for_zero(t3(1, 0, 2) - t3_1(2, 0, 1), "T3(i,j,k)=T3(k,j,i)(1,0,2)");
  test_for_zero(t3(1, 1, 0) - t3_1(0, 1, 1), "T3(i,j,k)=T3(k,j,i)(1,1,0)");
  test_for_zero(t3(1, 1, 1) - t3_1(1, 1, 1), "T3(i,j,k)=T3(k,j,i)(1,1,1)");
  test_for_zero(t3(1, 1, 2) - t3_1(2, 1, 1), "T3(i,j,k)=T3(k,j,i)(1,1,2)");
  test_for_zero(t3(1, 2, 0) - t3_1(0, 2, 1), "T3(i,j,k)=T3(k,j,i)(1,2,0)");
  test_for_zero(t3(1, 2, 1) - t3_1(1, 2, 1), "T3(i,j,k)=T3(k,j,i)(1,2,1)");
  test_for_zero(t3(1, 2, 2) - t3_1(2, 2, 1), "T3(i,j,k)=T3(k,j,i)(1,2,2)");

  test_for_zero(t3(2, 0, 0) - t3_1(0, 0, 2), "T3(i,j,k)=T3(k,j,i)(2,0,0)");
  test_for_zero(t3(2, 0, 1) - t3_1(1, 0, 2), "T3(i,j,k)=T3(k,j,i)(2,0,1)");
  test_for_zero(t3(2, 0, 2) - t3_1(2, 0, 2), "T3(i,j,k)=T3(k,j,i)(2,0,2)");
  test_for_zero(t3(2, 1, 0) - t3_1(0, 1, 2), "T3(i,j,k)=T3(k,j,i)(2,1,0)");
  test_for_zero(t3(2, 1, 1) - t3_1(1, 1, 2), "T3(i,j,k)=T3(k,j,i)(2,1,1)");
  test_for_zero(t3(2, 1, 2) - t3_1(2, 1, 2), "T3(i,j,k)=T3(k,j,i)(2,1,2)");
  test_for_zero(t3(2, 2, 0) - t3_1(0, 2, 2), "T3(i,j,k)=T3(k,j,i)(2,2,0)");
  test_for_zero(t3(2, 2, 1) - t3_1(1, 2, 2), "T3(i,j,k)=T3(k,j,i)(2,2,1)");
  test_for_zero(t3(2, 2, 2) - t3_1(2, 2, 2), "T3(i,j,k)=T3(k,j,i)(2,2,2)");
}
