#include "../../../src/FTensor.hpp"
#include "../test_for_zero.hpp"
#include <iostream>
using namespace GRLib;
using namespace std;

void test_T2s_26(Tensor2<double, 3, 3> &t2_1,
                 const Tensor2_symmetric<double, 3> &t2s_2,
                 const Tensor2_symmetric<double, 3> &t2s_3)
{
  Index<'i', 3> i;
  Index<'j', 3> j;
  Index<'k', 3> k;

  Number<0> N0;
  Number<1> N1;
  Number<2> N2;

  /* Tensor2_symmetric tests */

  /* Tensor2_symmetric*Tensor2_symmetric */

  t2_1(j, k) = t2s_2(i, j) * t2s_3(k, i);
  test_for_zero(t2_1(0, 0)
                  - (t2s_2(0, 0) * t2s_3(0, 0) + t2s_2(1, 0) * t2s_3(0, 1)
                     + t2s_2(2, 0) * t2s_3(0, 2)),
                "T2s(i,j)*T2s(k,i)(0,0)");
  test_for_zero(t2_1(0, 1)
                  - (t2s_2(0, 0) * t2s_3(1, 0) + t2s_2(1, 0) * t2s_3(1, 1)
                     + t2s_2(2, 0) * t2s_3(1, 2)),
                "T2s(i,j)*T2s(k,i)(0,1)");
  test_for_zero(t2_1(0, 2)
                  - (t2s_2(0, 0) * t2s_3(2, 0) + t2s_2(1, 0) * t2s_3(2, 1)
                     + t2s_2(2, 0) * t2s_3(2, 2)),
                "T2s(i,j)*T2s(k,i)(0,2)");
  test_for_zero(t2_1(1, 0)
                  - (t2s_2(0, 1) * t2s_3(0, 0) + t2s_2(1, 1) * t2s_3(0, 1)
                     + t2s_2(2, 1) * t2s_3(0, 2)),
                "T2s(i,j)*T2s(k,i)(1,0)");
  test_for_zero(t2_1(1, 1)
                  - (t2s_2(0, 1) * t2s_3(1, 0) + t2s_2(1, 1) * t2s_3(1, 1)
                     + t2s_2(2, 1) * t2s_3(1, 2)),
                "T2s(i,j)*T2s(k,i)(1,1)");
  test_for_zero(t2_1(1, 2)
                  - (t2s_2(0, 1) * t2s_3(2, 0) + t2s_2(1, 1) * t2s_3(2, 1)
                     + t2s_2(2, 1) * t2s_3(2, 2)),
                "T2s(i,j)*T2s(k,i)(1,2)");
  test_for_zero(t2_1(2, 0)
                  - (t2s_2(0, 2) * t2s_3(0, 0) + t2s_2(1, 2) * t2s_3(0, 1)
                     + t2s_2(2, 2) * t2s_3(0, 2)),
                "T2s(i,j)*T2s(k,i)(2,0)");
  test_for_zero(t2_1(2, 1)
                  - (t2s_2(0, 2) * t2s_3(1, 0) + t2s_2(1, 2) * t2s_3(1, 1)
                     + t2s_2(2, 2) * t2s_3(1, 2)),
                "T2s(i,j)*T2s(k,i)(2,1)");
  test_for_zero(t2_1(2, 2)
                  - (t2s_2(0, 2) * t2s_3(2, 0) + t2s_2(1, 2) * t2s_3(2, 1)
                     + t2s_2(2, 2) * t2s_3(2, 2)),
                "T2s(i,j)*T2s(k,i)(2,2)");
}
