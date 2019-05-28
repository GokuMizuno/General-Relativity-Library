#include "../../../src/FTensor.hpp"
#include "../test_for_zero.hpp"
#include <iostream>
using namespace FTensor;
using namespace std;

void test_T2_33(const Tensor2<double, 3, 3> &t2_2)
{
  Index<'i', 3> i;
  Index<'j', 3> j;

  Number<0> N0;
  Number<1> N1;
  Number<2> N2;

  /* Tensor2 tests */

  /* -Tensor2 */
  Tensor2<double, 3, 3> t2;

  t2(i, j) = -t2_2(i, j);
  test_for_zero(t2(0, 0) + (t2_2(0, 0)), "-T2(i,j)(0,0)");
  test_for_zero(t2(0, 1) + (t2_2(0, 1)), "-T2(i,j)(0,1)");
  test_for_zero(t2(0, 2) + (t2_2(0, 2)), "-T2(i,j)(0,2)");
  test_for_zero(t2(1, 0) + (t2_2(1, 0)), "-T2(i,j)(1,0)");
  test_for_zero(t2(1, 1) + (t2_2(1, 1)), "-T2(i,j)(1,1)");
  test_for_zero(t2(1, 2) + (t2_2(1, 2)), "-T2(i,j)(1,2)");
  test_for_zero(t2(2, 0) + (t2_2(2, 0)), "-T2(i,j)(2,0)");
  test_for_zero(t2(2, 1) + (t2_2(2, 1)), "-T2(i,j)(2,1)");
  test_for_zero(t2(2, 2) + (t2_2(2, 2)), "-T2(i,j)(2,2)");
}
