#include "../../../src/FTensor.hpp"
#include "../test_for_zero.hpp"
#include <iostream>
using namespace GRLib;
using namespace std;

void test_T3_02(const Tensor1<double, 3> &t1_1, const Tensor1<double, 3> &t1_2,
                const Tensor2<double, 3, 3> &t2_2,
                const Tensor2<double, 3, 3> &t2_3)
{
  Index<'i', 3> i;
  Index<'j', 3> j;
  Index<'k', 3> k;

  Number<0> N0;
  Number<1> N1;
  Number<2> N2;

  test_for_zero(((t2_2(i, j) * t1_2(k)) + (t2_3(i, j) * t1_1(k)))(0, 0, 0)
                  - ((t2_2(0, 0) * t1_2(0)) + (t2_3(0, 0) * t1_1(0))),
                "T3(i,j,k)+T3(i,j,k)(0,0,0)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) + (t2_3(i, j) * t1_1(k)))(0, 0, 1)
                  - ((t2_2(0, 0) * t1_2(1)) + (t2_3(0, 0) * t1_1(1))),
                "T3(i,j,k)+T3(i,j,k)(0,0,1)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) + (t2_3(i, j) * t1_1(k)))(0, 0, 2)
                  - ((t2_2(0, 0) * t1_2(2)) + (t2_3(0, 0) * t1_1(2))),
                "T3(i,j,k)+T3(i,j,k)(0,0,2)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) + (t2_3(i, j) * t1_1(k)))(0, 1, 0)
                  - ((t2_2(0, 1) * t1_2(0)) + (t2_3(0, 1) * t1_1(0))),
                "T3(i,j,k)+T3(i,j,k)(0,1,0)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) + (t2_3(i, j) * t1_1(k)))(0, 1, 1)
                  - ((t2_2(0, 1) * t1_2(1)) + (t2_3(0, 1) * t1_1(1))),
                "T3(i,j,k)+T3(i,j,k)(0,1,1)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) + (t2_3(i, j) * t1_1(k)))(0, 1, 2)
                  - ((t2_2(0, 1) * t1_2(2)) + (t2_3(0, 1) * t1_1(2))),
                "T3(i,j,k)+T3(i,j,k)(0,1,2)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) + (t2_3(i, j) * t1_1(k)))(0, 2, 0)
                  - ((t2_2(0, 2) * t1_2(0)) + (t2_3(0, 2) * t1_1(0))),
                "T3(i,j,k)+T3(i,j,k)(0,2,0)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) + (t2_3(i, j) * t1_1(k)))(0, 2, 1)
                  - ((t2_2(0, 2) * t1_2(1)) + (t2_3(0, 2) * t1_1(1))),
                "T3(i,j,k)+T3(i,j,k)(0,2,1)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) + (t2_3(i, j) * t1_1(k)))(0, 2, 2)
                  - ((t2_2(0, 2) * t1_2(2)) + (t2_3(0, 2) * t1_1(2))),
                "T3(i,j,k)+T3(i,j,k)(0,2,2)");

  test_for_zero(((t2_2(i, j) * t1_2(k)) + (t2_3(i, k) * t1_1(j)))(0, 0, 0)
                  - ((t2_2(0, 0) * t1_2(0)) + (t2_3(0, 0) * t1_1(0))),
                "T3(i,j,k)+T3(i,k,j)(0,0,0)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) + (t2_3(i, k) * t1_1(j)))(0, 0, 1)
                  - ((t2_2(0, 0) * t1_2(1)) + (t2_3(0, 1) * t1_1(0))),
                "T3(i,j,k)+T3(i,k,j)(0,0,1)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) + (t2_3(i, k) * t1_1(j)))(0, 0, 2)
                  - ((t2_2(0, 0) * t1_2(2)) + (t2_3(0, 2) * t1_1(0))),
                "T3(i,j,k)+T3(i,k,j)(0,0,2)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) + (t2_3(i, k) * t1_1(j)))(0, 1, 0)
                  - ((t2_2(0, 1) * t1_2(0)) + (t2_3(0, 0) * t1_1(1))),
                "T3(i,j,k)+T3(i,k,j)(0,1,0)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) + (t2_3(i, k) * t1_1(j)))(0, 1, 1)
                  - ((t2_2(0, 1) * t1_2(1)) + (t2_3(0, 1) * t1_1(1))),
                "T3(i,j,k)+T3(i,k,j)(0,1,1)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) + (t2_3(i, k) * t1_1(j)))(0, 1, 2)
                  - ((t2_2(0, 1) * t1_2(2)) + (t2_3(0, 2) * t1_1(1))),
                "T3(i,j,k)+T3(i,k,j)(0,1,2)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) + (t2_3(i, k) * t1_1(j)))(0, 2, 0)
                  - ((t2_2(0, 2) * t1_2(0)) + (t2_3(0, 0) * t1_1(2))),
                "T3(i,j,k)+T3(i,k,j)(0,2,0)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) + (t2_3(i, k) * t1_1(j)))(0, 2, 1)
                  - ((t2_2(0, 2) * t1_2(1)) + (t2_3(0, 1) * t1_1(2))),
                "T3(i,j,k)+T3(i,k,j)(0,2,1)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) + (t2_3(i, k) * t1_1(j)))(0, 2, 2)
                  - ((t2_2(0, 2) * t1_2(2)) + (t2_3(0, 2) * t1_1(2))),
                "T3(i,j,k)+T3(i,k,j)(0,2,2)");

  test_for_zero(((t2_2(i, j) * t1_2(k)) + (t2_3(j, i) * t1_1(k)))(0, 0, 0)
                  - ((t2_2(0, 0) * t1_2(0)) + (t2_3(0, 0) * t1_1(0))),
                "T3(i,j,k)+T3(j,i,k)(0,0,0)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) + (t2_3(j, i) * t1_1(k)))(0, 0, 1)
                  - ((t2_2(0, 0) * t1_2(1)) + (t2_3(0, 0) * t1_1(1))),
                "T3(i,j,k)+T3(j,i,k)(0,0,1)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) + (t2_3(j, i) * t1_1(k)))(0, 0, 2)
                  - ((t2_2(0, 0) * t1_2(2)) + (t2_3(0, 0) * t1_1(2))),
                "T3(i,j,k)+T3(j,i,k)(0,0,2)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) + (t2_3(j, i) * t1_1(k)))(0, 1, 0)
                  - ((t2_2(0, 1) * t1_2(0)) + (t2_3(1, 0) * t1_1(0))),
                "T3(i,j,k)+T3(j,i,k)(0,1,0)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) + (t2_3(j, i) * t1_1(k)))(0, 1, 1)
                  - ((t2_2(0, 1) * t1_2(1)) + (t2_3(1, 0) * t1_1(1))),
                "T3(i,j,k)+T3(j,i,k)(0,1,1)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) + (t2_3(j, i) * t1_1(k)))(0, 1, 2)
                  - ((t2_2(0, 1) * t1_2(2)) + (t2_3(1, 0) * t1_1(2))),
                "T3(i,j,k)+T3(j,i,k)(0,1,2)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) + (t2_3(j, i) * t1_1(k)))(0, 2, 0)
                  - ((t2_2(0, 2) * t1_2(0)) + (t2_3(2, 0) * t1_1(0))),
                "T3(i,j,k)+T3(j,i,k)(0,2,0)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) + (t2_3(j, i) * t1_1(k)))(0, 2, 1)
                  - ((t2_2(0, 2) * t1_2(1)) + (t2_3(2, 0) * t1_1(1))),
                "T3(i,j,k)+T3(j,i,k)(0,2,1)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) + (t2_3(j, i) * t1_1(k)))(0, 2, 2)
                  - ((t2_2(0, 2) * t1_2(2)) + (t2_3(2, 0) * t1_1(2))),
                "T3(i,j,k)+T3(j,i,k)(0,2,2)");

  test_for_zero(((t2_2(i, j) * t1_2(k)) + (t2_3(j, k) * t1_1(i)))(0, 0, 0)
                  - ((t2_2(0, 0) * t1_2(0)) + (t2_3(0, 0) * t1_1(0))),
                "T3(i,j,k)+T3(j,k,i)(0,0,0)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) + (t2_3(j, k) * t1_1(i)))(0, 0, 1)
                  - ((t2_2(0, 0) * t1_2(1)) + (t2_3(0, 1) * t1_1(0))),
                "T3(i,j,k)+T3(j,k,i)(0,0,1)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) + (t2_3(j, k) * t1_1(i)))(0, 0, 2)
                  - ((t2_2(0, 0) * t1_2(2)) + (t2_3(0, 2) * t1_1(0))),
                "T3(i,j,k)+T3(j,k,i)(0,0,2)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) + (t2_3(j, k) * t1_1(i)))(0, 1, 0)
                  - ((t2_2(0, 1) * t1_2(0)) + (t2_3(1, 0) * t1_1(0))),
                "T3(i,j,k)+T3(j,k,i)(0,1,0)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) + (t2_3(j, k) * t1_1(i)))(0, 1, 1)
                  - ((t2_2(0, 1) * t1_2(1)) + (t2_3(1, 1) * t1_1(0))),
                "T3(i,j,k)+T3(j,k,i)(0,1,1)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) + (t2_3(j, k) * t1_1(i)))(0, 1, 2)
                  - ((t2_2(0, 1) * t1_2(2)) + (t2_3(1, 2) * t1_1(0))),
                "T3(i,j,k)+T3(j,k,i)(0,1,2)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) + (t2_3(j, k) * t1_1(i)))(0, 2, 0)
                  - ((t2_2(0, 2) * t1_2(0)) + (t2_3(2, 0) * t1_1(0))),
                "T3(i,j,k)+T3(j,k,i)(0,2,0)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) + (t2_3(j, k) * t1_1(i)))(0, 2, 1)
                  - ((t2_2(0, 2) * t1_2(1)) + (t2_3(2, 1) * t1_1(0))),
                "T3(i,j,k)+T3(j,k,i)(0,2,1)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) + (t2_3(j, k) * t1_1(i)))(0, 2, 2)
                  - ((t2_2(0, 2) * t1_2(2)) + (t2_3(2, 2) * t1_1(0))),
                "T3(i,j,k)+T3(j,k,i)(0,2,2)");

  test_for_zero(((t2_2(i, j) * t1_2(k)) + (t2_3(k, i) * t1_1(j)))(0, 0, 0)
                  - ((t2_2(0, 0) * t1_2(0)) + (t2_3(0, 0) * t1_1(0))),
                "T3(i,j,k)+T3(k,i,j)(0,0,0)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) + (t2_3(k, i) * t1_1(j)))(0, 0, 1)
                  - ((t2_2(0, 0) * t1_2(1)) + (t2_3(1, 0) * t1_1(0))),
                "T3(i,j,k)+T3(k,i,j)(0,0,1)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) + (t2_3(k, i) * t1_1(j)))(0, 0, 2)
                  - ((t2_2(0, 0) * t1_2(2)) + (t2_3(2, 0) * t1_1(0))),
                "T3(i,j,k)+T3(k,i,j)(0,0,2)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) + (t2_3(k, i) * t1_1(j)))(0, 1, 0)
                  - ((t2_2(0, 1) * t1_2(0)) + (t2_3(0, 0) * t1_1(1))),
                "T3(i,j,k)+T3(k,i,j)(0,1,0)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) + (t2_3(k, i) * t1_1(j)))(0, 1, 1)
                  - ((t2_2(0, 1) * t1_2(1)) + (t2_3(1, 0) * t1_1(1))),
                "T3(i,j,k)+T3(k,i,j)(0,1,1)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) + (t2_3(k, i) * t1_1(j)))(0, 1, 2)
                  - ((t2_2(0, 1) * t1_2(2)) + (t2_3(2, 0) * t1_1(1))),
                "T3(i,j,k)+T3(k,i,j)(0,1,2)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) + (t2_3(k, i) * t1_1(j)))(0, 2, 0)
                  - ((t2_2(0, 2) * t1_2(0)) + (t2_3(0, 0) * t1_1(2))),
                "T3(i,j,k)+T3(k,i,j)(0,2,0)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) + (t2_3(k, i) * t1_1(j)))(0, 2, 1)
                  - ((t2_2(0, 2) * t1_2(1)) + (t2_3(1, 0) * t1_1(2))),
                "T3(i,j,k)+T3(k,i,j)(0,2,1)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) + (t2_3(k, i) * t1_1(j)))(0, 2, 2)
                  - ((t2_2(0, 2) * t1_2(2)) + (t2_3(2, 0) * t1_1(2))),
                "T3(i,j,k)+T3(k,i,j)(0,2,2)");

  test_for_zero(((t2_2(i, j) * t1_2(k)) + (t2_3(k, j) * t1_1(i)))(0, 0, 0)
                  - ((t2_2(0, 0) * t1_2(0)) + (t2_3(0, 0) * t1_1(0))),
                "T3(i,j,k)+T3(k,j,i)(0,0,0)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) + (t2_3(k, j) * t1_1(i)))(0, 0, 1)
                  - ((t2_2(0, 0) * t1_2(1)) + (t2_3(1, 0) * t1_1(0))),
                "T3(i,j,k)+T3(k,j,i)(0,0,1)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) + (t2_3(k, j) * t1_1(i)))(0, 0, 2)
                  - ((t2_2(0, 0) * t1_2(2)) + (t2_3(2, 0) * t1_1(0))),
                "T3(i,j,k)+T3(k,j,i)(0,0,2)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) + (t2_3(k, j) * t1_1(i)))(0, 1, 0)
                  - ((t2_2(0, 1) * t1_2(0)) + (t2_3(0, 1) * t1_1(0))),
                "T3(i,j,k)+T3(k,j,i)(0,1,0)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) + (t2_3(k, j) * t1_1(i)))(0, 1, 1)
                  - ((t2_2(0, 1) * t1_2(1)) + (t2_3(1, 1) * t1_1(0))),
                "T3(i,j,k)+T3(k,j,i)(0,1,1)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) + (t2_3(k, j) * t1_1(i)))(0, 1, 2)
                  - ((t2_2(0, 1) * t1_2(2)) + (t2_3(2, 1) * t1_1(0))),
                "T3(i,j,k)+T3(k,j,i)(0,1,2)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) + (t2_3(k, j) * t1_1(i)))(0, 2, 0)
                  - ((t2_2(0, 2) * t1_2(0)) + (t2_3(0, 2) * t1_1(0))),
                "T3(i,j,k)+T3(k,j,i)(0,2,0)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) + (t2_3(k, j) * t1_1(i)))(0, 2, 1)
                  - ((t2_2(0, 2) * t1_2(1)) + (t2_3(1, 2) * t1_1(0))),
                "T3(i,j,k)+T3(k,j,i)(0,2,1)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) + (t2_3(k, j) * t1_1(i)))(0, 2, 2)
                  - ((t2_2(0, 2) * t1_2(2)) + (t2_3(2, 2) * t1_1(0))),
                "T3(i,j,k)+T3(k,j,i)(0,2,2)");

  test_for_zero(((t2_2(i, j) * t1_2(k)) - (t2_3(i, j) * t1_1(k)))(0, 0, 0)
                  - ((t2_2(0, 0) * t1_2(0)) - (t2_3(0, 0) * t1_1(0))),
                "T3(i,j,k)-T3(i,j,k)(0,0,0)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) - (t2_3(i, j) * t1_1(k)))(0, 0, 1)
                  - ((t2_2(0, 0) * t1_2(1)) - (t2_3(0, 0) * t1_1(1))),
                "T3(i,j,k)-T3(i,j,k)(0,0,1)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) - (t2_3(i, j) * t1_1(k)))(0, 0, 2)
                  - ((t2_2(0, 0) * t1_2(2)) - (t2_3(0, 0) * t1_1(2))),
                "T3(i,j,k)-T3(i,j,k)(0,0,2)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) - (t2_3(i, j) * t1_1(k)))(0, 1, 0)
                  - ((t2_2(0, 1) * t1_2(0)) - (t2_3(0, 1) * t1_1(0))),
                "T3(i,j,k)-T3(i,j,k)(0,1,0)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) - (t2_3(i, j) * t1_1(k)))(0, 1, 1)
                  - ((t2_2(0, 1) * t1_2(1)) - (t2_3(0, 1) * t1_1(1))),
                "T3(i,j,k)-T3(i,j,k)(0,1,1)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) - (t2_3(i, j) * t1_1(k)))(0, 1, 2)
                  - ((t2_2(0, 1) * t1_2(2)) - (t2_3(0, 1) * t1_1(2))),
                "T3(i,j,k)-T3(i,j,k)(0,1,2)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) - (t2_3(i, j) * t1_1(k)))(0, 2, 0)
                  - ((t2_2(0, 2) * t1_2(0)) - (t2_3(0, 2) * t1_1(0))),
                "T3(i,j,k)-T3(i,j,k)(0,2,0)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) - (t2_3(i, j) * t1_1(k)))(0, 2, 1)
                  - ((t2_2(0, 2) * t1_2(1)) - (t2_3(0, 2) * t1_1(1))),
                "T3(i,j,k)-T3(i,j,k)(0,2,1)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) - (t2_3(i, j) * t1_1(k)))(0, 2, 2)
                  - ((t2_2(0, 2) * t1_2(2)) - (t2_3(0, 2) * t1_1(2))),
                "T3(i,j,k)-T3(i,j,k)(0,2,2)");

  test_for_zero(((t2_2(i, j) * t1_2(k)) - (t2_3(i, k) * t1_1(j)))(0, 0, 0)
                  - ((t2_2(0, 0) * t1_2(0)) - (t2_3(0, 0) * t1_1(0))),
                "T3(i,j,k)-T3(i,k,j)(0,0,0)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) - (t2_3(i, k) * t1_1(j)))(0, 0, 1)
                  - ((t2_2(0, 0) * t1_2(1)) - (t2_3(0, 1) * t1_1(0))),
                "T3(i,j,k)-T3(i,k,j)(0,0,1)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) - (t2_3(i, k) * t1_1(j)))(0, 0, 2)
                  - ((t2_2(0, 0) * t1_2(2)) - (t2_3(0, 2) * t1_1(0))),
                "T3(i,j,k)-T3(i,k,j)(0,0,2)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) - (t2_3(i, k) * t1_1(j)))(0, 1, 0)
                  - ((t2_2(0, 1) * t1_2(0)) - (t2_3(0, 0) * t1_1(1))),
                "T3(i,j,k)-T3(i,k,j)(0,1,0)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) - (t2_3(i, k) * t1_1(j)))(0, 1, 1)
                  - ((t2_2(0, 1) * t1_2(1)) - (t2_3(0, 1) * t1_1(1))),
                "T3(i,j,k)-T3(i,k,j)(0,1,1)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) - (t2_3(i, k) * t1_1(j)))(0, 1, 2)
                  - ((t2_2(0, 1) * t1_2(2)) - (t2_3(0, 2) * t1_1(1))),
                "T3(i,j,k)-T3(i,k,j)(0,1,2)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) - (t2_3(i, k) * t1_1(j)))(0, 2, 0)
                  - ((t2_2(0, 2) * t1_2(0)) - (t2_3(0, 0) * t1_1(2))),
                "T3(i,j,k)-T3(i,k,j)(0,2,0)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) - (t2_3(i, k) * t1_1(j)))(0, 2, 1)
                  - ((t2_2(0, 2) * t1_2(1)) - (t2_3(0, 1) * t1_1(2))),
                "T3(i,j,k)-T3(i,k,j)(0,2,1)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) - (t2_3(i, k) * t1_1(j)))(0, 2, 2)
                  - ((t2_2(0, 2) * t1_2(2)) - (t2_3(0, 2) * t1_1(2))),
                "T3(i,j,k)-T3(i,k,j)(0,2,2)");

  test_for_zero(((t2_2(i, j) * t1_2(k)) - (t2_3(j, i) * t1_1(k)))(0, 0, 0)
                  - ((t2_2(0, 0) * t1_2(0)) - (t2_3(0, 0) * t1_1(0))),
                "T3(i,j,k)-T3(j,i,k)(0,0,0)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) - (t2_3(j, i) * t1_1(k)))(0, 0, 1)
                  - ((t2_2(0, 0) * t1_2(1)) - (t2_3(0, 0) * t1_1(1))),
                "T3(i,j,k)-T3(j,i,k)(0,0,1)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) - (t2_3(j, i) * t1_1(k)))(0, 0, 2)
                  - ((t2_2(0, 0) * t1_2(2)) - (t2_3(0, 0) * t1_1(2))),
                "T3(i,j,k)-T3(j,i,k)(0,0,2)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) - (t2_3(j, i) * t1_1(k)))(0, 1, 0)
                  - ((t2_2(0, 1) * t1_2(0)) - (t2_3(1, 0) * t1_1(0))),
                "T3(i,j,k)-T3(j,i,k)(0,1,0)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) - (t2_3(j, i) * t1_1(k)))(0, 1, 1)
                  - ((t2_2(0, 1) * t1_2(1)) - (t2_3(1, 0) * t1_1(1))),
                "T3(i,j,k)-T3(j,i,k)(0,1,1)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) - (t2_3(j, i) * t1_1(k)))(0, 1, 2)
                  - ((t2_2(0, 1) * t1_2(2)) - (t2_3(1, 0) * t1_1(2))),
                "T3(i,j,k)-T3(j,i,k)(0,1,2)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) - (t2_3(j, i) * t1_1(k)))(0, 2, 0)
                  - ((t2_2(0, 2) * t1_2(0)) - (t2_3(2, 0) * t1_1(0))),
                "T3(i,j,k)-T3(j,i,k)(0,2,0)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) - (t2_3(j, i) * t1_1(k)))(0, 2, 1)
                  - ((t2_2(0, 2) * t1_2(1)) - (t2_3(2, 0) * t1_1(1))),
                "T3(i,j,k)-T3(j,i,k)(0,2,1)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) - (t2_3(j, i) * t1_1(k)))(0, 2, 2)
                  - ((t2_2(0, 2) * t1_2(2)) - (t2_3(2, 0) * t1_1(2))),
                "T3(i,j,k)-T3(j,i,k)(0,2,2)");

  test_for_zero(((t2_2(i, j) * t1_2(k)) - (t2_3(j, k) * t1_1(i)))(0, 0, 0)
                  - ((t2_2(0, 0) * t1_2(0)) - (t2_3(0, 0) * t1_1(0))),
                "T3(i,j,k)-T3(j,k,i)(0,0,0)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) - (t2_3(j, k) * t1_1(i)))(0, 0, 1)
                  - ((t2_2(0, 0) * t1_2(1)) - (t2_3(0, 1) * t1_1(0))),
                "T3(i,j,k)-T3(j,k,i)(0,0,1)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) - (t2_3(j, k) * t1_1(i)))(0, 0, 2)
                  - ((t2_2(0, 0) * t1_2(2)) - (t2_3(0, 2) * t1_1(0))),
                "T3(i,j,k)-T3(j,k,i)(0,0,2)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) - (t2_3(j, k) * t1_1(i)))(0, 1, 0)
                  - ((t2_2(0, 1) * t1_2(0)) - (t2_3(1, 0) * t1_1(0))),
                "T3(i,j,k)-T3(j,k,i)(0,1,0)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) - (t2_3(j, k) * t1_1(i)))(0, 1, 1)
                  - ((t2_2(0, 1) * t1_2(1)) - (t2_3(1, 1) * t1_1(0))),
                "T3(i,j,k)-T3(j,k,i)(0,1,1)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) - (t2_3(j, k) * t1_1(i)))(0, 1, 2)
                  - ((t2_2(0, 1) * t1_2(2)) - (t2_3(1, 2) * t1_1(0))),
                "T3(i,j,k)-T3(j,k,i)(0,1,2)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) - (t2_3(j, k) * t1_1(i)))(0, 2, 0)
                  - ((t2_2(0, 2) * t1_2(0)) - (t2_3(2, 0) * t1_1(0))),
                "T3(i,j,k)-T3(j,k,i)(0,2,0)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) - (t2_3(j, k) * t1_1(i)))(0, 2, 1)
                  - ((t2_2(0, 2) * t1_2(1)) - (t2_3(2, 1) * t1_1(0))),
                "T3(i,j,k)-T3(j,k,i)(0,2,1)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) - (t2_3(j, k) * t1_1(i)))(0, 2, 2)
                  - ((t2_2(0, 2) * t1_2(2)) - (t2_3(2, 2) * t1_1(0))),
                "T3(i,j,k)-T3(j,k,i)(0,2,2)");

  test_for_zero(((t2_2(i, j) * t1_2(k)) - (t2_3(k, i) * t1_1(j)))(0, 0, 0)
                  - ((t2_2(0, 0) * t1_2(0)) - (t2_3(0, 0) * t1_1(0))),
                "T3(i,j,k)-T3(k,i,j)(0,0,0)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) - (t2_3(k, i) * t1_1(j)))(0, 0, 1)
                  - ((t2_2(0, 0) * t1_2(1)) - (t2_3(1, 0) * t1_1(0))),
                "T3(i,j,k)-T3(k,i,j)(0,0,1)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) - (t2_3(k, i) * t1_1(j)))(0, 0, 2)
                  - ((t2_2(0, 0) * t1_2(2)) - (t2_3(2, 0) * t1_1(0))),
                "T3(i,j,k)-T3(k,i,j)(0,0,2)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) - (t2_3(k, i) * t1_1(j)))(0, 1, 0)
                  - ((t2_2(0, 1) * t1_2(0)) - (t2_3(0, 0) * t1_1(1))),
                "T3(i,j,k)-T3(k,i,j)(0,1,0)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) - (t2_3(k, i) * t1_1(j)))(0, 1, 1)
                  - ((t2_2(0, 1) * t1_2(1)) - (t2_3(1, 0) * t1_1(1))),
                "T3(i,j,k)-T3(k,i,j)(0,1,1)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) - (t2_3(k, i) * t1_1(j)))(0, 1, 2)
                  - ((t2_2(0, 1) * t1_2(2)) - (t2_3(2, 0) * t1_1(1))),
                "T3(i,j,k)-T3(k,i,j)(0,1,2)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) - (t2_3(k, i) * t1_1(j)))(0, 2, 0)
                  - ((t2_2(0, 2) * t1_2(0)) - (t2_3(0, 0) * t1_1(2))),
                "T3(i,j,k)-T3(k,i,j)(0,2,0)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) - (t2_3(k, i) * t1_1(j)))(0, 2, 1)
                  - ((t2_2(0, 2) * t1_2(1)) - (t2_3(1, 0) * t1_1(2))),
                "T3(i,j,k)-T3(k,i,j)(0,2,1)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) - (t2_3(k, i) * t1_1(j)))(0, 2, 2)
                  - ((t2_2(0, 2) * t1_2(2)) - (t2_3(2, 0) * t1_1(2))),
                "T3(i,j,k)-T3(k,i,j)(0,2,2)");

  test_for_zero(((t2_2(i, j) * t1_2(k)) - (t2_3(k, j) * t1_1(i)))(0, 0, 0)
                  - ((t2_2(0, 0) * t1_2(0)) - (t2_3(0, 0) * t1_1(0))),
                "T3(i,j,k)-T3(k,j,i)(0,0,0)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) - (t2_3(k, j) * t1_1(i)))(0, 0, 1)
                  - ((t2_2(0, 0) * t1_2(1)) - (t2_3(1, 0) * t1_1(0))),
                "T3(i,j,k)-T3(k,j,i)(0,0,1)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) - (t2_3(k, j) * t1_1(i)))(0, 0, 2)
                  - ((t2_2(0, 0) * t1_2(2)) - (t2_3(2, 0) * t1_1(0))),
                "T3(i,j,k)-T3(k,j,i)(0,0,2)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) - (t2_3(k, j) * t1_1(i)))(0, 1, 0)
                  - ((t2_2(0, 1) * t1_2(0)) - (t2_3(0, 1) * t1_1(0))),
                "T3(i,j,k)-T3(k,j,i)(0,1,0)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) - (t2_3(k, j) * t1_1(i)))(0, 1, 1)
                  - ((t2_2(0, 1) * t1_2(1)) - (t2_3(1, 1) * t1_1(0))),
                "T3(i,j,k)-T3(k,j,i)(0,1,1)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) - (t2_3(k, j) * t1_1(i)))(0, 1, 2)
                  - ((t2_2(0, 1) * t1_2(2)) - (t2_3(2, 1) * t1_1(0))),
                "T3(i,j,k)-T3(k,j,i)(0,1,2)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) - (t2_3(k, j) * t1_1(i)))(0, 2, 0)
                  - ((t2_2(0, 2) * t1_2(0)) - (t2_3(0, 2) * t1_1(0))),
                "T3(i,j,k)-T3(k,j,i)(0,2,0)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) - (t2_3(k, j) * t1_1(i)))(0, 2, 1)
                  - ((t2_2(0, 2) * t1_2(1)) - (t2_3(1, 2) * t1_1(0))),
                "T3(i,j,k)-T3(k,j,i)(0,2,1)");
  test_for_zero(((t2_2(i, j) * t1_2(k)) - (t2_3(k, j) * t1_1(i)))(0, 2, 2)
                  - ((t2_2(0, 2) * t1_2(2)) - (t2_3(2, 2) * t1_1(0))),
                "T3(i,j,k)-T3(k,j,i)(0,2,2)");

  Dg<double, 3, 3> t3dg;

  t3dg(j, k, i) = (t2_2(i, j) * t1_2(k)) || (t2_2(i, k) * t1_2(j));
  test_for_zero(t3dg(0, 0, 0) - (t2_2(0, 0) * t1_2(0) + t2_2(0, 0) * t1_2(0)),
                "T3(i,j,k)||T3(i,k,j)(0,0,0)");
  test_for_zero(t3dg(0, 1, 0) - (t2_2(0, 0) * t1_2(1) + t2_2(0, 1) * t1_2(0)),
                "T3(i,j,k)||T3(i,k,j)(0,0,1)");
  test_for_zero(t3dg(0, 2, 0) - (t2_2(0, 0) * t1_2(2) + t2_2(0, 2) * t1_2(0)),
                "T3(i,j,k)||T3(i,k,j)(0,0,2)");
  test_for_zero(t3dg(1, 0, 0) - (t2_2(0, 1) * t1_2(0) + t2_2(0, 0) * t1_2(1)),
                "T3(i,j,k)||T3(i,k,j)(0,1,0)");
  test_for_zero(t3dg(1, 1, 0) - (t2_2(0, 1) * t1_2(1) + t2_2(0, 1) * t1_2(1)),
                "T3(i,j,k)||T3(i,k,j)(0,1,1)");
  test_for_zero(t3dg(1, 2, 0) - (t2_2(0, 1) * t1_2(2) + t2_2(0, 2) * t1_2(1)),
                "T3(i,j,k)||T3(i,k,j)(0,1,2)");
  test_for_zero(t3dg(2, 0, 0) - (t2_2(0, 2) * t1_2(0) + t2_2(0, 0) * t1_2(2)),
                "T3(i,j,k)||T3(i,k,j)(0,2,0)");
  test_for_zero(t3dg(2, 1, 0) - (t2_2(0, 2) * t1_2(1) + t2_2(0, 1) * t1_2(2)),
                "T3(i,j,k)||T3(i,k,j)(0,2,1)");
  test_for_zero(t3dg(2, 2, 0) - (t2_2(0, 2) * t1_2(2) + t2_2(0, 2) * t1_2(2)),
                "T3(i,j,k)||T3(i,k,j)(0,2,2)");
  test_for_zero(t3dg(0, 0, 1) - (t2_2(1, 0) * t1_2(0) + t2_2(1, 0) * t1_2(0)),
                "T3(i,j,k)||T3(i,k,j)(1,0,0)");
  test_for_zero(t3dg(0, 1, 1) - (t2_2(1, 0) * t1_2(1) + t2_2(1, 1) * t1_2(0)),
                "T3(i,j,k)||T3(i,k,j)(1,0,1)");
  test_for_zero(t3dg(0, 2, 1) - (t2_2(1, 0) * t1_2(2) + t2_2(1, 2) * t1_2(0)),
                "T3(i,j,k)||T3(i,k,j)(1,0,2)");
  test_for_zero(t3dg(1, 0, 1) - (t2_2(1, 1) * t1_2(0) + t2_2(1, 0) * t1_2(1)),
                "T3(i,j,k)||T3(i,k,j)(1,1,0)");
  test_for_zero(t3dg(1, 1, 1) - (t2_2(1, 1) * t1_2(1) + t2_2(1, 1) * t1_2(1)),
                "T3(i,j,k)||T3(i,k,j)(1,1,1)");
  test_for_zero(t3dg(1, 2, 1) - (t2_2(1, 1) * t1_2(2) + t2_2(1, 2) * t1_2(1)),
                "T3(i,j,k)||T3(i,k,j)(1,1,2)");
  test_for_zero(t3dg(2, 0, 1) - (t2_2(1, 2) * t1_2(0) + t2_2(1, 0) * t1_2(2)),
                "T3(i,j,k)||T3(i,k,j)(1,2,0)");
  test_for_zero(t3dg(2, 1, 1) - (t2_2(1, 2) * t1_2(1) + t2_2(1, 1) * t1_2(2)),
                "T3(i,j,k)||T3(i,k,j)(1,2,1)");
  test_for_zero(t3dg(2, 2, 1) - (t2_2(1, 2) * t1_2(2) + t2_2(1, 2) * t1_2(2)),
                "T3(i,j,k)||T3(i,k,j)(1,2,2)");
  test_for_zero(t3dg(0, 0, 2) - (t2_2(2, 0) * t1_2(0) + t2_2(2, 0) * t1_2(0)),
                "T3(i,j,k)||T3(i,k,j)(2,0,0)");
  test_for_zero(t3dg(0, 1, 2) - (t2_2(2, 0) * t1_2(1) + t2_2(2, 1) * t1_2(0)),
                "T3(i,j,k)||T3(i,k,j)(2,0,1)");
  test_for_zero(t3dg(0, 2, 2) - (t2_2(2, 0) * t1_2(2) + t2_2(2, 2) * t1_2(0)),
                "T3(i,j,k)||T3(i,k,j)(2,0,2)");
  test_for_zero(t3dg(1, 0, 2) - (t2_2(2, 1) * t1_2(0) + t2_2(2, 0) * t1_2(1)),
                "T3(i,j,k)||T3(i,k,j)(2,1,0)");
  test_for_zero(t3dg(1, 1, 2) - (t2_2(2, 1) * t1_2(1) + t2_2(2, 1) * t1_2(1)),
                "T3(i,j,k)||T3(i,k,j)(2,1,1)");
  test_for_zero(t3dg(1, 2, 2) - (t2_2(2, 1) * t1_2(2) + t2_2(2, 2) * t1_2(1)),
                "T3(i,j,k)||T3(i,k,j)(2,1,2)");
  test_for_zero(t3dg(2, 0, 2) - (t2_2(2, 2) * t1_2(0) + t2_2(2, 0) * t1_2(2)),
                "T3(i,j,k)||T3(i,k,j)(2,2,0)");
  test_for_zero(t3dg(2, 1, 2) - (t2_2(2, 2) * t1_2(1) + t2_2(2, 1) * t1_2(2)),
                "T3(i,j,k)||T3(i,k,j)(2,2,1)");
  test_for_zero(t3dg(2, 2, 2) - (t2_2(2, 2) * t1_2(2) + t2_2(2, 2) * t1_2(2)),
                "T3(i,j,k)||T3(i,k,j)(2,2,2)");

  t3dg(i, k, j) = (t2_2(i, j) * t1_2(k)) || (t2_2(k, j) * t1_2(i));
  test_for_zero(t3dg(0, 0, 0) - (t2_2(0, 0) * t1_2(0) + t2_2(0, 0) * t1_2(0)),
                "T3(i,j,k)||T3(k,j,i)(0,0,0)");
  test_for_zero(t3dg(0, 1, 0) - (t2_2(0, 0) * t1_2(1) + t2_2(1, 0) * t1_2(0)),
                "T3(i,j,k)||T3(k,j,i)(0,0,1)");
  test_for_zero(t3dg(0, 2, 0) - (t2_2(0, 0) * t1_2(2) + t2_2(2, 0) * t1_2(0)),
                "T3(i,j,k)||T3(k,j,i)(0,0,2)");
  test_for_zero(t3dg(0, 0, 1) - (t2_2(0, 1) * t1_2(0) + t2_2(0, 1) * t1_2(0)),
                "T3(i,j,k)||T3(k,j,i)(0,1,0)");
  test_for_zero(t3dg(0, 1, 1) - (t2_2(0, 1) * t1_2(1) + t2_2(1, 1) * t1_2(0)),
                "T3(i,j,k)||T3(k,j,i)(0,1,1)");
  test_for_zero(t3dg(0, 2, 1) - (t2_2(0, 1) * t1_2(2) + t2_2(2, 1) * t1_2(0)),
                "T3(i,j,k)||T3(k,j,i)(0,1,2)");
  test_for_zero(t3dg(0, 0, 2) - (t2_2(0, 2) * t1_2(0) + t2_2(0, 2) * t1_2(0)),
                "T3(i,j,k)||T3(k,j,i)(0,2,0)");
  test_for_zero(t3dg(0, 1, 2) - (t2_2(0, 2) * t1_2(1) + t2_2(1, 2) * t1_2(0)),
                "T3(i,j,k)||T3(k,j,i)(0,2,1)");
  test_for_zero(t3dg(0, 2, 2) - (t2_2(0, 2) * t1_2(2) + t2_2(2, 2) * t1_2(0)),
                "T3(i,j,k)||T3(k,j,i)(0,2,2)");
  test_for_zero(t3dg(1, 0, 0) - (t2_2(1, 0) * t1_2(0) + t2_2(0, 0) * t1_2(1)),
                "T3(i,j,k)||T3(k,j,i)(1,0,0)");
  test_for_zero(t3dg(1, 1, 0) - (t2_2(1, 0) * t1_2(1) + t2_2(1, 0) * t1_2(1)),
                "T3(i,j,k)||T3(k,j,i)(1,0,1)");
  test_for_zero(t3dg(1, 2, 0) - (t2_2(1, 0) * t1_2(2) + t2_2(2, 0) * t1_2(1)),
                "T3(i,j,k)||T3(k,j,i)(1,0,2)");
  test_for_zero(t3dg(1, 0, 1) - (t2_2(1, 1) * t1_2(0) + t2_2(0, 1) * t1_2(1)),
                "T3(i,j,k)||T3(k,j,i)(1,1,0)");
  test_for_zero(t3dg(1, 1, 1) - (t2_2(1, 1) * t1_2(1) + t2_2(1, 1) * t1_2(1)),
                "T3(i,j,k)||T3(k,j,i)(1,1,1)");
  test_for_zero(t3dg(1, 2, 1) - (t2_2(1, 1) * t1_2(2) + t2_2(2, 1) * t1_2(1)),
                "T3(i,j,k)||T3(k,j,i)(1,1,2)");
  test_for_zero(t3dg(1, 0, 2) - (t2_2(1, 2) * t1_2(0) + t2_2(0, 2) * t1_2(1)),
                "T3(i,j,k)||T3(k,j,i)(1,2,0)");
  test_for_zero(t3dg(1, 1, 2) - (t2_2(1, 2) * t1_2(1) + t2_2(1, 2) * t1_2(1)),
                "T3(i,j,k)||T3(k,j,i)(1,2,1)");
  test_for_zero(t3dg(1, 2, 2) - (t2_2(1, 2) * t1_2(2) + t2_2(2, 2) * t1_2(1)),
                "T3(i,j,k)||T3(k,j,i)(1,2,2)");
  test_for_zero(t3dg(2, 0, 0) - (t2_2(2, 0) * t1_2(0) + t2_2(0, 0) * t1_2(2)),
                "T3(i,j,k)||T3(k,j,i)(2,0,0)");
  test_for_zero(t3dg(2, 1, 0) - (t2_2(2, 0) * t1_2(1) + t2_2(1, 0) * t1_2(2)),
                "T3(i,j,k)||T3(k,j,i)(2,0,1)");
  test_for_zero(t3dg(2, 2, 0) - (t2_2(2, 0) * t1_2(2) + t2_2(2, 0) * t1_2(2)),
                "T3(i,j,k)||T3(k,j,i)(2,0,2)");
  test_for_zero(t3dg(2, 0, 1) - (t2_2(2, 1) * t1_2(0) + t2_2(0, 1) * t1_2(2)),
                "T3(i,j,k)||T3(k,j,i)(2,1,0)");
  test_for_zero(t3dg(2, 1, 1) - (t2_2(2, 1) * t1_2(1) + t2_2(1, 1) * t1_2(2)),
                "T3(i,j,k)||T3(k,j,i)(2,1,1)");
  test_for_zero(t3dg(2, 2, 1) - (t2_2(2, 1) * t1_2(2) + t2_2(2, 1) * t1_2(2)),
                "T3(i,j,k)||T3(k,j,i)(2,1,2)");
  test_for_zero(t3dg(2, 0, 2) - (t2_2(2, 2) * t1_2(0) + t2_2(0, 2) * t1_2(2)),
                "T3(i,j,k)||T3(k,j,i)(2,2,0)");
  test_for_zero(t3dg(2, 1, 2) - (t2_2(2, 2) * t1_2(1) + t2_2(1, 2) * t1_2(2)),
                "T3(i,j,k)||T3(k,j,i)(2,2,1)");
  test_for_zero(t3dg(2, 2, 2) - (t2_2(2, 2) * t1_2(2) + t2_2(2, 2) * t1_2(2)),
                "T3(i,j,k)||T3(k,j,i)(2,2,2)");
}