#include "../../../src/FTensor.hpp"
#include "../test_for_zero.hpp"
#include <iostream>
using namespace GRLib;
using namespace std;

void test_T2_25(const Tensor2<double, 4, 3> &t2_4,
                const Tensor2<double, 3, 4> &t2_5)
{
  Index<'i', 4> i;
  Index<'j', 3> j;

  Tensor2<double, 4, 3> t2_a;
  t2_a(i, j) = t2_5(j, i);

  test_for_zero((t2_4(i, j) * t2_a(i, j)
                 - (t2_4(0, 0) * t2_a(0, 0) + t2_4(0, 1) * t2_a(0, 1)
                    + t2_4(0, 2) * t2_a(0, 2) + t2_4(1, 0) * t2_a(1, 0)
                    + t2_4(1, 1) * t2_a(1, 1) + t2_4(1, 2) * t2_a(1, 2)
                    + t2_4(2, 0) * t2_a(2, 0) + t2_4(2, 1) * t2_a(2, 1)
                    + t2_4(2, 2) * t2_a(2, 2) + t2_4(3, 0) * t2_a(3, 0)
                    + t2_4(3, 1) * t2_a(3, 1) + t2_4(3, 2) * t2_a(3, 2)))
                  * 1e-5,
                "T2(i,j)*T2(i,j)");

  test_for_zero((t2_4(i, j) * t2_5(j, i)
                 - (t2_4(0, 0) * t2_5(0, 0) + t2_4(0, 1) * t2_5(1, 0)
                    + t2_4(0, 2) * t2_5(2, 0) + t2_4(1, 0) * t2_5(0, 1)
                    + t2_4(1, 1) * t2_5(1, 1) + t2_4(1, 2) * t2_5(2, 1)
                    + t2_4(2, 0) * t2_5(0, 2) + t2_4(2, 1) * t2_5(1, 2)
                    + t2_4(2, 2) * t2_5(2, 2) + t2_4(3, 0) * t2_5(0, 3)
                    + t2_4(3, 1) * t2_5(1, 3) + t2_4(3, 2) * t2_5(2, 3)))
                  * 1e-5,
                "T2(i,j)*T2(j,i)");
}
