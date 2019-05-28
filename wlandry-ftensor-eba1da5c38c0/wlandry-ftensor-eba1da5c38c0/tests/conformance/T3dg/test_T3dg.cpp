#include "../../../src/FTensor.hpp"
#include "../test_for_zero.hpp"
#include <iostream>
using namespace FTensor;
using namespace std;

void test_T3dg_01(Tensor1<double, 3> &t1_1, const Dg<double, 3, 3> &t3dg_2);
void test_T3dg_02(Tensor2_symmetric<double, 3> &t2s_1,
                  const Tensor2_symmetric<double, 3> &t2s_2,
                  const Tensor2_symmetric<double, 3> &t2s_3,
                  Dg<double, 3, 3> &t3dg_1);
void test_T3dg_03(Tensor2_symmetric<double, 3> &t2s_1,
                  const Dg<double, 3, 3> &t3dg_2);
void test_T3dg_04(Tensor2<double, 3, 3> &t2_1, const Dg<double, 3, 3> &t3dg_2);
void test_T3dg_05(Tensor2<double, 3, 3> &t2_1, const Dg<double, 3, 3> &t3dg_2);
void test_T3dg_06(Tensor2_symmetric<double, 3> &t2s_1,
                  const Dg<double, 3, 3> &t3dg_2);
void test_T3dg_07(Tensor2<double, 3, 3> &t2_1, const Dg<double, 3, 3> &t3dg_2);
void test_T3dg_08(Tensor2<double, 3, 3> &t2_1, const Dg<double, 3, 3> &t3dg_2);
void test_T3dg_09(const Tensor1<double, 3> &t1_2,
                  const Tensor2_symmetric<double, 3> &t2s_2,
                  Dg<double, 3, 3> &t3dg_1);
void test_T3dg_10(Dg<double, 3, 3> &t3dg_1);
void test_T3dg_11(Dg<double, 3, 3> &t3dg_1, const Dg<double, 3, 3> &t3dg_2,
                  const Dg<double, 3, 3> &t3dg_3);
void test_T3dg_12(Dg<double, 3, 3> &t3dg_1, const Dg<double, 3, 3> &t3dg_2,
                  const Dg<double, 3, 3> &t3dg_3);
void test_T3dg_13(Dg<double, 3, 3> &t3dg_1, const Dg<double, 3, 3> &t3dg_2,
                  const Dg<double, 3, 3> &t3dg_3);
void test_T3dg_14(Dg<double, 3, 3> &t3dg_1, const Dg<double, 3, 3> &t3dg_2);
void test_T3dg_15(const Tensor1<double, 3> &t1_2, Dg<double, 3, 3> &t3dg_1,
                  const Dg<double, 3, 3> &t3dg_2,
                  const Dg<double, 3, 3> &t3dg_3);
void test_T3dg_16(Dg<double, 3, 3> &t3dg_1, const Dg<double, 3, 3> &t3dg_2);
void test_T3dg_17(const Tensor1<double, 3> &t1_2,
                  Tensor2_symmetric<double, 3> &t2s_1,
                  const Dg<double, 3, 3> &t3dg_2,
                  const Dg<double, 3, 3> &t3dg_3);
void test_T3dg_18(const Tensor1<double, 3> &t1_2, Tensor2<double, 3, 3> &t2_1,
                  const Dg<double, 3, 3> &t3dg_2,
                  const Dg<double, 3, 3> &t3dg_3);
void test_T3dg_19(const Tensor1<double, 3> &t1_2, Tensor2<double, 3, 3> &t2_1,
                  const Dg<double, 3, 3> &t3dg_2,
                  const Dg<double, 3, 3> &t3dg_3);
void test_T3dg_20(const Tensor2<double, 3, 3> &t2_2, Dg<double, 3, 3> &t3dg_1,
                  const Dg<double, 3, 3> &t3dg_2,
                  const Dg<double, 3, 3> &t3dg_3);
void test_T3dg_21(const Tensor2<double, 3, 3> &t2_2, Dg<double, 3, 3> &t3dg_1,
                  const Dg<double, 3, 3> &t3dg_2,
                  const Dg<double, 3, 3> &t3dg_3);
void test_T3dg_22(Tensor1<double, 3> &t1_1, const Tensor2<double, 3, 3> &t2_2,
                  const Dg<double, 3, 3> &t3dg_2);
void test_T3dg_23(Tensor1<double, 3> &t1_1, const Tensor2<double, 3, 3> &t2_2,
                  const Dg<double, 3, 3> &t3dg_2);
void test_T3dg_24(Tensor1<double, 3> &t1_1, const Tensor2<double, 3, 3> &t2_2,
                  const Dg<double, 3, 3> &t3dg_2);
void test_T3dg_25(Tensor1<double, 3> &t1_1, const Tensor2<double, 3, 3> &t2_2,
                  const Dg<double, 3, 3> &t3dg_2);
void test_T3dg_26(Tensor1<double, 3> &t1_1, const Tensor2<double, 3, 3> &t2_2,
                  const Dg<double, 3, 3> &t3dg_2);
void test_T3dg_27(Tensor1<double, 3> &t1_1, const Tensor2<double, 3, 3> &t2_2,
                  const Dg<double, 3, 3> &t3dg_2);
void test_T3dg_28(const Tensor2_symmetric<double, 3> &t2s_2,
                  Dg<double, 3, 3> &t3dg_1, const Dg<double, 3, 3> &t3dg_2,
                  const Dg<double, 3, 3> &t3dg_3);
void test_T3dg_29(const Tensor2_symmetric<double, 3> &t2s_2,
                  Dg<double, 3, 3> &t3dg_1, const Dg<double, 3, 3> &t3dg_2,
                  const Dg<double, 3, 3> &t3dg_3);
void test_T3dg_30(Tensor1<double, 3> &t1_1,
                  const Tensor2_symmetric<double, 3> &t2s_2,
                  const Dg<double, 3, 3> &t3dg_2);
void test_T3dg_31(Tensor1<double, 3> &t1_1,
                  const Tensor2_symmetric<double, 3> &t2s_2,
                  const Dg<double, 3, 3> &t3dg_2);
void test_T3dg_32(Tensor1<double, 3> &t1_1,
                  const Tensor2_symmetric<double, 3> &t2s_2,
                  const Dg<double, 3, 3> &t3dg_2);
void test_T3dg_33(Tensor1<double, 3> &t1_1,
                  const Tensor2_symmetric<double, 3> &t2s_2,
                  const Dg<double, 3, 3> &t3dg_2);
void test_T3dg_34(Tensor1<double, 3> &t1_1,
                  const Tensor2_symmetric<double, 3> &t2s_2,
                  const Dg<double, 3, 3> &t3dg_2);
void test_T3dg_35(Tensor1<double, 3> &t1_1,
                  const Tensor2_symmetric<double, 3> &t2s_2,
                  const Dg<double, 3, 3> &t3dg_2);
void test_T3dg_36(Tensor2<double, 3, 3> &t2_1,
                  const Tensor2_symmetric<double, 3> &t2s_2,
                  Dg<double, 3, 3> &t3dg_1, const Dg<double, 3, 3> &t3dg_2,
                  const Dg<double, 3, 3> &t3dg_3);
void test_T3dg_37(const Tensor2<double, 3, 3> &t2_2,
                  const Tensor2_symmetric<double, 3> &t2s_2,
                  const Dg<double, 3, 3> &t3dg_2,
                  const Dg<double, 3, 3> &t3dg_3);

void test_T3dg(Tensor1<double, 3> &t1_1, const Tensor1<double, 3> &t1_2,
               Tensor2<double, 3, 3> &t2_1, const Tensor2<double, 3, 3> &t2_2,
               Tensor2_symmetric<double, 3> &t2s_1,
               const Tensor2_symmetric<double, 3> &t2s_2,
               const Tensor2_symmetric<double, 3> &t2s_3,
               Dg<double, 3, 3> &t3dg_1, const Dg<double, 3, 3> &t3dg_2,
               const Dg<double, 3, 3> &t3dg_3)
{
  test_T3dg_01(t1_1, t3dg_2);
  test_T3dg_02(t2s_1, t2s_2, t2s_3, t3dg_1);
  test_T3dg_03(t2s_1, t3dg_2);
  test_T3dg_04(t2_1, t3dg_2);
  test_T3dg_05(t2_1, t3dg_2);
  test_T3dg_06(t2s_1, t3dg_2);
  test_T3dg_07(t2_1, t3dg_2);
  test_T3dg_08(t2_1, t3dg_2);
  test_T3dg_09(t1_2, t2s_2, t3dg_1);
  test_T3dg_10(t3dg_1);
  test_T3dg_11(t3dg_1, t3dg_2, t3dg_3);
  test_T3dg_12(t3dg_1, t3dg_2, t3dg_3);
  test_T3dg_13(t3dg_1, t3dg_2, t3dg_3);
  test_T3dg_14(t3dg_1, t3dg_2);
  test_T3dg_15(t1_2, t3dg_1, t3dg_2, t3dg_3);
  test_T3dg_16(t3dg_1, t3dg_2);
  test_T3dg_17(t1_2, t2s_1, t3dg_2, t3dg_3);
  test_T3dg_18(t1_2, t2_1, t3dg_2, t3dg_3);
  test_T3dg_19(t1_2, t2_1, t3dg_2, t3dg_3);
  test_T3dg_20(t2_2, t3dg_1, t3dg_2, t3dg_3);
  test_T3dg_21(t2_2, t3dg_1, t3dg_2, t3dg_3);
  test_T3dg_22(t1_1, t2_2, t3dg_2);
  test_T3dg_23(t1_1, t2_2, t3dg_2);
  test_T3dg_24(t1_1, t2_2, t3dg_2);
  test_T3dg_25(t1_1, t2_2, t3dg_2);
  test_T3dg_26(t1_1, t2_2, t3dg_2);
  test_T3dg_27(t1_1, t2_2, t3dg_2);
  test_T3dg_28(t2s_2, t3dg_1, t3dg_2, t3dg_3);
  test_T3dg_29(t2s_2, t3dg_1, t3dg_2, t3dg_3);
  test_T3dg_30(t1_1, t2s_2, t3dg_2);
  test_T3dg_31(t1_1, t2s_2, t3dg_2);
  test_T3dg_32(t1_1, t2s_2, t3dg_2);
  test_T3dg_33(t1_1, t2s_2, t3dg_2);
  test_T3dg_34(t1_1, t2s_2, t3dg_2);
  test_T3dg_35(t1_1, t2s_2, t3dg_2);
  test_T3dg_36(t2_1, t2s_2, t3dg_1, t3dg_2, t3dg_3);
  test_T3dg_37(t2_2, t2s_2, t3dg_2, t3dg_3);
}
