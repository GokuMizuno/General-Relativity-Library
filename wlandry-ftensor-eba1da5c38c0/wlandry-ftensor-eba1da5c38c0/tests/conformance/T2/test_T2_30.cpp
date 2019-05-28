#include "../../../src/FTensor.hpp"
#include "../test_for_zero.hpp"
#include <iostream>
using namespace FTensor;
using namespace std;

void test_T2_30(const Tensor1<double, 3> &t1_2,
                const Tensor2<double, 3, 3> &t2_2)
{
  Index<'i', 3> i;
  Index<'j', 3> j;

  Number<0> N0;
  Number<1> N1;
  Number<2> N2;

  /* Tensor2 tests */

  /* Tensor2&Tensor1 */
  Tensor2<double, 3, 3> t2;

  t2(i, j) = (t2_2(i, j) & t1_2(j));
  test_for_zero(t2(0, 0) - (t2_2(0, 0) * t1_2(0)), "T2(i,j)&T2(j)(0,0)");
  test_for_zero(t2(0, 1) - (t2_2(0, 1) * t1_2(1)), "T2(i,j)&T2(j)(0,1)");
  test_for_zero(t2(0, 2) - (t2_2(0, 2) * t1_2(2)), "T2(i,j)&T2(j)(0,2)");
  test_for_zero(t2(1, 0) - (t2_2(1, 0) * t1_2(0)), "T2(i,j)&T2(j)(1,0)");
  test_for_zero(t2(1, 1) - (t2_2(1, 1) * t1_2(1)), "T2(i,j)&T2(j)(1,1)");
  test_for_zero(t2(1, 2) - (t2_2(1, 2) * t1_2(2)), "T2(i,j)&T2(j)(1,2)");
  test_for_zero(t2(2, 0) - (t2_2(2, 0) * t1_2(0)), "T2(i,j)&T2(j)(2,0)");
  test_for_zero(t2(2, 1) - (t2_2(2, 1) * t1_2(1)), "T2(i,j)&T2(j)(2,1)");
  test_for_zero(t2(2, 2) - (t2_2(2, 2) * t1_2(2)), "T2(i,j)&T2(j)(2,2)");

  t2(i, j) = (t1_2(j) & t2_2(i, j));
  test_for_zero(t2(0, 0) - (t2_2(0, 0) * t1_2(0)), "T2(j)&T2(i,j)(0,0)");
  test_for_zero(t2(0, 1) - (t2_2(0, 1) * t1_2(1)), "T2(j)&T2(i,j)(0,1)");
  test_for_zero(t2(0, 2) - (t2_2(0, 2) * t1_2(2)), "T2(j)&T2(i,j)(0,2)");
  test_for_zero(t2(1, 0) - (t2_2(1, 0) * t1_2(0)), "T2(j)&T2(i,j)(1,0)");
  test_for_zero(t2(1, 1) - (t2_2(1, 1) * t1_2(1)), "T2(j)&T2(i,j)(1,1)");
  test_for_zero(t2(1, 2) - (t2_2(1, 2) * t1_2(2)), "T2(j)&T2(i,j)(1,2)");
  test_for_zero(t2(2, 0) - (t2_2(2, 0) * t1_2(0)), "T2(j)&T2(i,j)(2,0)");
  test_for_zero(t2(2, 1) - (t2_2(2, 1) * t1_2(1)), "T2(j)&T2(i,j)(2,1)");
  test_for_zero(t2(2, 2) - (t2_2(2, 2) * t1_2(2)), "T2(j)&T2(i,j)(2,2)");
}
