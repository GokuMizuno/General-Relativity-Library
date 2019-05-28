#include "../../../src/FTensor.hpp"
#include "../test_for_zero.hpp"
#include <iostream>
using namespace FTensor;
using namespace std;

void test_T4_01(const Tensor4<double, 1, 2, 3, 4> &t4_1);
void test_T4_02(const Tensor4<double, 1, 2, 3, 4> &t4_1,
                const Tensor2<double, 4, 3> &t2_4,
                const Tensor2<double, 3, 4> &t2_5);

void test_T4_04(const Tensor4<double, 1, 2, 3, 4> &t4_1);
void test_T4_05(const Tensor4<double, 1, 2, 3, 4> &t4,
                const Tensor2<double, 4, 3> &t2_4,
                const Tensor2<double, 3, 4> &t2_5);
void test_T4_06(const Tensor4<double, 1, 2, 3, 4> &t4,
                const Tensor3<double, 2, 3, 4> &t3_2);
void test_T4_iostream();

void test_T4(const Tensor4<double, 1, 2, 3, 4> &t4_1,
             const Tensor2<double, 4, 3> &t2_4,
             const Tensor2<double, 3, 4> &t2_5,
             const Tensor3<double, 2, 3, 4> &t3_2)
{
  test_T4_01(t4_1);
  test_T4_02(t4_1, t2_4, t2_5);
  test_T4_04(t4_1);
  test_T4_05(t4_1, t2_4, t2_5);
  test_T4_06(t4_1, t3_2);
  test_T4_iostream();
}
