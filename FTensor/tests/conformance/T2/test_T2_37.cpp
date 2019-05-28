#include "../../../src/FTensor.hpp"
#include "../test_for_zero.hpp"
#include <iostream>
using namespace GRLib;
using namespace std;

void test_T2_37(const Tensor2<double, 3, 3> &t2_2)
{
  Index<'i', 3> i;
  Index<'j', 3> j;
  Index<'k', 3> k;

  Number<0> N0;
  Number<1> N1;
  Number<2> N2;

  /* Tensor2 tests */
  Tensor2<double, 3, 3> t2;
  Tensor2_symmetric<double, 3> t2s;

  t2(i, j) = t2_2(j, i);

  t2s(i, j) = t2(i, k) ^ t2_2(k, j);
  test_for_zero(t2s(0, 0)
                  - (t2(0, 0) * t2_2(0, 0) + t2(0, 1) * t2_2(1, 0)
                     + t2(0, 2) * t2_2(2, 0)),
                "T2(i,k)^T2(k,j)(0,0)");
  test_for_zero(t2s(1, 0)
                  - (t2(1, 0) * t2_2(0, 0) + t2(1, 1) * t2_2(1, 0)
                     + t2(1, 2) * t2_2(2, 0)),
                "T2(i,k)^T2(k,j)(1,0)");
  test_for_zero(t2s(2, 0)
                  - (t2(2, 0) * t2_2(0, 0) + t2(2, 1) * t2_2(1, 0)
                     + t2(2, 2) * t2_2(2, 0)),
                "T2(i,k)^T2(k,j)(2,0)");
  test_for_zero(t2s(0, 1)
                  - (t2(0, 0) * t2_2(0, 1) + t2(0, 1) * t2_2(1, 1)
                     + t2(0, 2) * t2_2(2, 1)),
                "T2(i,k)^T2(k,j)(0,1)");
  test_for_zero(t2s(1, 1)
                  - (t2(1, 0) * t2_2(0, 1) + t2(1, 1) * t2_2(1, 1)
                     + t2(1, 2) * t2_2(2, 1)),
                "T2(i,k)^T2(k,j)(1,1)");
  test_for_zero(t2s(2, 1)
                  - (t2(2, 0) * t2_2(0, 1) + t2(2, 1) * t2_2(1, 1)
                     + t2(2, 2) * t2_2(2, 1)),
                "T2(i,k)^T2(k,j)(2,1)");
  test_for_zero(t2s(0, 2)
                  - (t2(0, 0) * t2_2(0, 2) + t2(0, 1) * t2_2(1, 2)
                     + t2(0, 2) * t2_2(2, 2)),
                "T2(i,k)^T2(k,j)(0,2)");
  test_for_zero(t2s(1, 2)
                  - (t2(1, 0) * t2_2(0, 2) + t2(1, 1) * t2_2(1, 2)
                     + t2(1, 2) * t2_2(2, 2)),
                "T2(i,k)^T2(k,j)(1,2)");
  test_for_zero(t2s(2, 2)
                  - (t2(2, 0) * t2_2(0, 2) + t2(2, 1) * t2_2(1, 2)
                     + t2(2, 2) * t2_2(2, 2)),
                "T2(i,k)^T2(k,j)(2,2)");
}
