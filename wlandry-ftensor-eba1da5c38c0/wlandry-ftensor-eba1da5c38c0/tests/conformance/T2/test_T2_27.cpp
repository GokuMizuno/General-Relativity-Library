#include "../../../src/FTensor.hpp"
#include "../test_for_zero.hpp"
#include <iostream>
using namespace FTensor;
using namespace std;

void test_T2_27(const Tensor2<double, 4, 3> &t2_4,
                const Tensor2<double, 3, 4> &t2_5)
{
  Index<'i', 4> i;
  Index<'j', 3> j;
  Index<'k', 3> k;

  Tensor2<double, 3, 4> t2_a;
  t2_a(j, i) = t2_4(i, j);

  Tensor2<double, 3, 3> t2;
  t2(j, k) = t2_a(j, i) * t2_5(k, i);

  for(int jj = 0; jj < 3; ++jj)
    for(int kk = 0; kk < 3; ++kk)
      {
        test_for_zero(
          t2(jj, kk)
            - (t2_a(jj, 0) * t2_5(kk, 0) + t2_a(jj, 1) * t2_5(kk, 1)
               + t2_a(jj, 2) * t2_5(kk, 2) + t2_a(jj, 3) * t2_5(kk, 3)),
          "T2(i,j)*T2(k,j)(" + std::to_string(jj) + "," + std::to_string(kk)
            + ")");
      }
}
