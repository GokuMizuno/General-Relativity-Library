#include "../../../src/FTensor.hpp"
#include "../test_for_zero.hpp"
#include <iostream>
using namespace FTensor;
using namespace std;

void test_T2_28(const Tensor2<double, 4, 3> &t2_4,
                const Tensor2<double, 3, 4> &t2_5)
{
  Index<'i', 4> i;
  Index<'j', 3> j;
  Index<'k', 3> k;

  Tensor2<double, 4, 3> t2_a;
  t2_a(i, j) = t2_5(j, i);

  Tensor2<double, 3, 3> t2;
  t2(j, k) = t2_4(i, j) * t2_a(i, k);

  for(int jj = 0; jj < 3; ++jj)
    for(int kk = 0; kk < 3; ++kk)
      {
        test_for_zero(
          t2(jj, kk)
            - (t2_4(0, jj) * t2_a(0, kk) + t2_4(1, jj) * t2_a(1, kk)
               + t2_4(2, jj) * t2_a(2, kk) + t2_4(3, jj) * t2_a(3, kk)),
          "T2(i,j)*T2(i,k)(" + std::to_string(jj) + "," + std::to_string(kk)
            + ")");
      }
}
