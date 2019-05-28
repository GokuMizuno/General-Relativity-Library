#include "../../../src/FTensor.hpp"
#include "../test_for_zero.hpp"
#include <iostream>
using namespace GRLib;
using namespace std;

void test_T2s_21(Tensor1<double, 3> &t1_1, const Tensor1<double, 3> &t1_2,
                 const Tensor2_symmetric<double, 3> &t2s_2)
{
  Index<'i', 3> i;
  Index<'j', 3> j;

  Number<0> N0;
  Number<1> N1;
  Number<2> N2;

  /* Tensor2_symmetric tests */

  /* Tensor2_symmetric*Tensor1 */

  t1_1(j) = t2s_2(i, j) * t1_2(i);
  test_for_zero(t1_1(0)
                  - (t2s_2(0, 0) * t1_2(0) + t2s_2(1, 0) * t1_2(1)
                     + t2s_2(2, 0) * t1_2(2)),
                "T2s(i,j)*T1(i)(0)");
  test_for_zero(t1_1(1)
                  - (t2s_2(0, 1) * t1_2(0) + t2s_2(1, 1) * t1_2(1)
                     + t2s_2(2, 1) * t1_2(2)),
                "T2s(i,j)*T1(i)(1)");
  test_for_zero(t1_1(2)
                  - (t2s_2(0, 2) * t1_2(0) + t2s_2(1, 2) * t1_2(1)
                     + t2s_2(2, 2) * t1_2(2)),
                "T2s(i,j)*T1(i)(2)");

  t1_1(j) = t1_2(i) * t2s_2(i, j);
  test_for_zero(t1_1(0)
                  - (t2s_2(0, 0) * t1_2(0) + t2s_2(1, 0) * t1_2(1)
                     + t2s_2(2, 0) * t1_2(2)),
                "T1(i)*T2s(i,j)(0)");
  test_for_zero(t1_1(1)
                  - (t2s_2(0, 1) * t1_2(0) + t2s_2(1, 1) * t1_2(1)
                     + t2s_2(2, 1) * t1_2(2)),
                "T1(i)*T2s(i,j)(1)");
  test_for_zero(t1_1(2)
                  - (t2s_2(0, 2) * t1_2(0) + t2s_2(1, 2) * t1_2(1)
                     + t2s_2(2, 2) * t1_2(2)),
                "T1(i)*T2s(i,j)(2)");
}
