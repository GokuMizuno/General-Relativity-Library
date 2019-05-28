#include "../../../src/FTensor.hpp"
#include "../test_for_zero.hpp"
#include <iostream>
using namespace FTensor;
using namespace std;

void test_T3_01(const Tensor1<double, 3> &t1_1, const Tensor1<double, 3> &t1_2,
                const Tensor2<double, 3, 3> &t2_2,
                const Tensor2<double, 3, 3> &t2_3,
                const Tensor2_symmetric<double, 3> &t2s_2,
                const Tensor2_symmetric<double, 3> &t2s_3,
                const Dg<double, 3, 3> &t3dg_2);

void test_T3_02(const Tensor1<double, 3> &t1_1, const Tensor1<double, 3> &t1_2,
                const Tensor2<double, 3, 3> &t2_2,
                const Tensor2<double, 3, 3> &t2_3);

void test_T3_03(const Tensor3<double, 3, 3, 3> &t3_1);
void test_T3_iostream();

void test_T3(const Tensor1<double, 3> &t1_1, const Tensor1<double, 3> &t1_2,
             const Tensor2<double, 3, 3> &t2_2,
             const Tensor2<double, 3, 3> &t2_3,
             const Tensor2_symmetric<double, 3> &t2s_2,
             const Tensor2_symmetric<double, 3> &t2s_3,
             const Tensor3<double, 3, 3, 3> &t3_1,
             const Dg<double, 3, 3> &t3dg_2)
{
  test_T3_01(t1_1, t1_2, t2_2, t2_3, t2s_2, t2s_3, t3dg_2);
  test_T3_02(t1_1, t1_2, t2_2, t2_3);
  test_T3_03(t3_1);
  test_T3_iostream();
}
