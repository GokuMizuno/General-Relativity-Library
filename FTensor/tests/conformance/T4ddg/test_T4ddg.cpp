#include "../../../src/FTensor.hpp"
#include "../test_for_zero.hpp"
#include <iostream>
using namespace GRLib;
using namespace std;

void test_T4ddg_01(const Tensor2_symmetric<double, 3> &t2s_2,
                   const Tensor2_symmetric<double, 3> &t2s_3,
                   const Dg<double, 3, 3> &t3dg_2,
                   const Dg<double, 3, 3> &t3dg_3);
void test_T4ddg_02(const Tensor2_symmetric<double, 3> &t2s_2);
void test_T4ddg_03(Tensor2<double, 3, 3> &t2_1,
                   Tensor2_symmetric<double, 3> &t2s_1,
                   const Tensor2_symmetric<double, 3> &t2s_2,
                   const Tensor2_symmetric<double, 3> &t2s_3);
void test_T4ddg_04(const Tensor1<double, 3> &t1_2,
                   const Tensor2<double, 3, 3> &t2_2,
                   const Tensor2<double, 3, 3> &t2_3,
                   Tensor2_symmetric<double, 3> &t2s_1,
                   const Tensor2_symmetric<double, 3> &t2s_2,
                   const Tensor2_symmetric<double, 3> &t2s_3,
                   Dg<double, 3, 3> &t3dg_1);
void test_T4ddg_05(Tensor1<double, 3> &t1_1, const Tensor1<double, 3> &t1_2,
                   Tensor2<double, 3, 3> &t2_1,
                   Tensor2_symmetric<double, 3> &t2s_1,
                   const Tensor2_symmetric<double, 3> &t2s_2,
                   const Tensor2_symmetric<double, 3> &t2s_3,
                   Dg<double, 3, 3> &t3dg_1, const Dg<double, 3, 3> &t3dg_2,
                   const Dg<double, 3, 3> &t3dg_3);

void test_T4ddg(Tensor1<double, 3> &t1_1, const Tensor1<double, 3> &t1_2,
                Tensor2<double, 3, 3> &t2_1, const Tensor2<double, 3, 3> &t2_2,
                const Tensor2<double, 3, 3> &t2_3,
                Tensor2_symmetric<double, 3> &t2s_1,
                const Tensor2_symmetric<double, 3> &t2s_2,
                const Tensor2_symmetric<double, 3> &t2s_3,
                Dg<double, 3, 3> &t3dg_1, const Dg<double, 3, 3> &t3dg_2,
                const Dg<double, 3, 3> &t3dg_3)
{
  test_T4ddg_01(t2s_2, t2s_3, t3dg_2, t3dg_3);
  test_T4ddg_02(t2s_2);
  test_T4ddg_03(t2_1, t2s_1, t2s_2, t2s_3);
  test_T4ddg_04(t1_2, t2_2, t2_3, t2s_1, t2s_2, t2s_3, t3dg_1);
  test_T4ddg_05(t1_1, t1_2, t2_1, t2s_1, t2s_2, t2s_3, t3dg_1, t3dg_2, t3dg_3);
}
