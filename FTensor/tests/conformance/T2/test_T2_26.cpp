#include "../../../src/FTensor.hpp"
#include "../test_for_zero.hpp"
#include <iostream>
using namespace GRLib;
using namespace std;

void test_T2_26(const Tensor2<double, 4, 3> &t2_4,
                const Tensor2<double, 3, 4> &t2_5)
{
  Index<'i', 3> i;
  Index<'j', 4> j;
  Index<'k', 3> k;

  Tensor2<double, 3, 3> t2;
  t2(i, k) = t2_5(i, j) * t2_4(j, k);

  for(int ii = 0; ii < 3; ++ii)
    for(int kk = 0; kk < 3; ++kk)
      {
        test_for_zero(
          t2(ii, kk)
            - (t2_5(ii, 0) * t2_4(0, kk) + t2_5(ii, 1) * t2_4(1, kk)
               + t2_5(ii, 2) * t2_4(2, kk) + t2_5(ii, 3) * t2_4(3, kk)),
          "T2(i,j)*T2(j,k)(" + std::to_string(ii) + "," + std::to_string(kk)
            + ")");
      }
}
