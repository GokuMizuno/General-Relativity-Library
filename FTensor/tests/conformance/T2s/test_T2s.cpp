#include "../../../src/FTensor.hpp"
#include "../test_for_zero.hpp"
#include <iostream>
using namespace GRLib;
using namespace std;

void test_T2s_iostream();
void test_T2s_01(const Tensor1<double, 3> &t1_2,
                 Tensor2_symmetric<double, 3> &t2s_1);
void test_T2s_02(const Tensor1<double, 3> &t1_2,
                 Tensor2_symmetric<double, 3> &t2s_1);
void test_T2s_03(const Tensor2<double, 3, 3> &t2_2,
                 Tensor2_symmetric<double, 3> &t2s_1);
void test_T2s_04(Tensor2<double, 3, 3> &t2_1,
                 const Tensor2<double, 3, 3> &t2_2,
                 Tensor2_symmetric<double, 3> &t2s_1);
void test_T2s_05(const Tensor1<double, 3> &t1_2,
                 Tensor2_symmetric<double, 3> &t2s_1);
void test_T2s_06(const Tensor1<double, 3> &t1_2,
                 Tensor2_symmetric<double, 3> &t2s_1);
void test_T2s_07(Tensor1<double, 3> &t1_1,
                 Tensor2_symmetric<double, 3> &t2s_1);
void test_T2s_08(Tensor1<double, 3> &t1_1, const Tensor1<double, 3> &t1_2,
                 const Tensor2_symmetric<double, 3> &t2s_1);
void test_T2s_09(const Tensor1<double, 3> &t1_2,
                 Tensor2_symmetric<double, 3> &t2s_1,
                 const Tensor2_symmetric<double, 3> &t2s_2);
void test_T2s_10(const Tensor1<double, 3> &t1_2,
                 Tensor2_symmetric<double, 3> &t2s_1,
                 const Tensor2_symmetric<double, 3> &t2s_2);
void test_T2s_11(const Tensor1<double, 3> &t1_2,
                 Tensor2_symmetric<double, 3> &t2s_1,
                 const Tensor2_symmetric<double, 3> &t2s_2);
void test_T2s_12(const Tensor1<double, 3> &t1_2,
                 Tensor2_symmetric<double, 3> &t2s_1,
                 const Tensor2_symmetric<double, 3> &t2s_2);
void test_T2s_13(const Tensor1<double, 3> &t1_2,
                 Tensor2_symmetric<double, 3> &t2s_1,
                 const Tensor2_symmetric<double, 3> &t2s_2);
void test_T2s_14(const Tensor1<double, 3> &t1_2,
                 Tensor2_symmetric<double, 3> &t2s_1,
                 const Tensor2_symmetric<double, 3> &t2s_2);
void test_T2s_15(const Tensor1<double, 3> &t1_2,
                 Tensor2_symmetric<double, 3> &t2s_1,
                 const Tensor2_symmetric<double, 3> &t2s_2);
void test_T2s_16(const Tensor1<double, 3> &t1_2,
                 Tensor2_symmetric<double, 3> &t2s_1,
                 const Tensor2_symmetric<double, 3> &t2s_2);
void test_T2s_17(const Tensor1<double, 3> &t1_2,
                 Tensor2_symmetric<double, 3> &t2s_1,
                 const Tensor2_symmetric<double, 3> &t2s_2);
void test_T2s_18(const Tensor1<double, 3> &t1_2,
                 Tensor2_symmetric<double, 3> &t2s_1,
                 const Tensor2_symmetric<double, 3> &t2s_2);
void test_T2s_19(const Tensor1<double, 3> &t1_2,
                 Tensor2_symmetric<double, 3> &t2s_1,
                 const Tensor2_symmetric<double, 3> &t2s_2);
void test_T2s_20(Tensor1<double, 3> &t1_1, const Tensor1<double, 3> &t1_2,
                 const Tensor2_symmetric<double, 3> &t2s_2);
void test_T2s_21(Tensor1<double, 3> &t1_1, const Tensor1<double, 3> &t1_2,
                 const Tensor2_symmetric<double, 3> &t2s_2);
void test_T2s_22(Tensor2_symmetric<double, 3> &t2s_1,
                 const Tensor2_symmetric<double, 3> &t2s_2);
void test_T2s_23(Tensor2<double, 3, 3> &t2_1,
                 const Tensor2_symmetric<double, 3> &t2s_2,
                 const Tensor2_symmetric<double, 3> &t2s_3);
void test_T2s_24(Tensor2<double, 3, 3> &t2_1,
                 const Tensor2_symmetric<double, 3> &t2s_2,
                 const Tensor2_symmetric<double, 3> &t2s_3);
void test_T2s_25(Tensor2<double, 3, 3> &t2_1,
                 const Tensor2_symmetric<double, 3> &t2s_2,
                 const Tensor2_symmetric<double, 3> &t2s_3);
void test_T2s_26(Tensor2<double, 3, 3> &t2_1,
                 const Tensor2_symmetric<double, 3> &t2s_2,
                 const Tensor2_symmetric<double, 3> &t2s_3);
void test_T2s_27(Tensor2_symmetric<double, 3> &t2s_1,
                 const Tensor2_symmetric<double, 3> &t2s_2);
void test_T2s_28(Tensor2_symmetric<double, 3> &t2s_1,
                 const Tensor2_symmetric<double, 3> &t2s_2);
void test_T2s_29(Tensor2_symmetric<double, 3> &t2s_1,
                 const Tensor2_symmetric<double, 3> &t2s_2);
void test_T2s_30(Tensor2<double, 3, 3> &t2_1,
                 const Tensor2<double, 3, 3> &t2_2,
                 const Tensor2_symmetric<double, 3> &t2s_2);
void test_T2s_31(Tensor2<double, 3, 3> &t2_1,
                 const Tensor2<double, 3, 3> &t2_2,
                 const Tensor2_symmetric<double, 3> &t2s_2);
void test_T2s_32(Tensor2<double, 3, 3> &t2_1,
                 const Tensor2<double, 3, 3> &t2_2,
                 const Tensor2_symmetric<double, 3> &t2s_2);
void test_T2s_33(Tensor2<double, 3, 3> &t2_1,
                 const Tensor2<double, 3, 3> &t2_2,
                 const Tensor2_symmetric<double, 3> &t2s_2);
void test_T2s_34(const Tensor1<double, 3> &t1_2,
                 Tensor2_symmetric<double, 3> &t2s_1,
                 const Tensor2_symmetric<double, 3> &t2s_2);
void test_T2s_35(const Tensor1<double, 3> &t1_2,
                 Tensor2_symmetric<double, 3> &t2s_1,
                 const Tensor2_symmetric<double, 3> &t2s_2);
void test_T2s_36(const Tensor2<double, 3, 3> &t2_2,
                 const Tensor2_symmetric<double, 3> &t2s_2);
void test_T2s_37(Tensor2<double, 3, 3> &t2_1,
                 const Tensor2<double, 3, 3> &t2_2,
                 const Tensor2_symmetric<double, 3> &t2s_2);
void test_T2s_38(Tensor2<double, 3, 3> &t2_1,
                 const Tensor2<double, 3, 3> &t2_2,
                 const Tensor2_symmetric<double, 3> &t2s_2);
void test_T2s_39(Tensor2<double, 3, 3> &t2_1,
                 const Tensor2<double, 3, 3> &t2_2,
                 const Tensor2_symmetric<double, 3> &t2s_2);
void test_T2s_40(Tensor2<double, 3, 3> &t2_1,
                 const Tensor2<double, 3, 3> &t2_2,
                 const Tensor2_symmetric<double, 3> &t2s_2);
void test_T2s_41(Tensor2<double, 3, 3> &t2_1,
                 Tensor2_symmetric<double, 3> &t2s_1,
                 const Tensor2_symmetric<double, 3> &t2s_2);
void test_T2s_42(Tensor2<double, 3, 3> &t2_1,
                 Tensor2_symmetric<double, 3> &t2s_1,
                 const Tensor2_symmetric<double, 3> &t2s_2);
void test_T2s_43(Tensor2<double, 3, 3> &t2_1,
                 Tensor2_symmetric<double, 3> &t2s_1,
                 const Tensor2_symmetric<double, 3> &t2s_2);
void test_T2s_44(Tensor2<double, 3, 3> &t2_1,
                 Tensor2_symmetric<double, 3> &t2s_1,
                 const Tensor2_symmetric<double, 3> &t2s_2);
void test_T2s_45(const Tensor1<double, 3> &t1_2,
                 Tensor2_symmetric<double, 3> &t2s_1);
void test_T2s_46(const Tensor1<double, 3> &t1_2,
                 Tensor2_symmetric<double, 3> &t2s_1);

void test_T2s(Tensor1<double, 3> &t1_1, const Tensor1<double, 3> &t1_2,
              Tensor2<double, 3, 3> &t2_1, const Tensor2<double, 3, 3> &t2_2,
              Tensor2_symmetric<double, 3> &t2s_1,
              const Tensor2_symmetric<double, 3> &t2s_2,
              const Tensor2_symmetric<double, 3> &t2s_3)
{
  test_T2s_iostream();
  test_T2s_01(t1_2, t2s_1);
  test_T2s_02(t1_2, t2s_1);
  test_T2s_03(t2_2, t2s_1);
  test_T2s_04(t2_1, t2_2, t2s_1);
  test_T2s_05(t1_2, t2s_1);
  test_T2s_06(t1_2, t2s_1);
  test_T2s_07(t1_1, t2s_1);
  test_T2s_08(t1_1, t1_2, t2s_1);
  test_T2s_09(t1_2, t2s_1, t2s_2);
  test_T2s_10(t1_2, t2s_1, t2s_2);
  test_T2s_11(t1_2, t2s_1, t2s_2);
  test_T2s_12(t1_2, t2s_1, t2s_2);
  test_T2s_13(t1_2, t2s_1, t2s_2);
  test_T2s_14(t1_2, t2s_1, t2s_2);
  test_T2s_15(t1_2, t2s_1, t2s_2);
  test_T2s_16(t1_2, t2s_1, t2s_2);
  test_T2s_17(t1_2, t2s_1, t2s_2);
  test_T2s_18(t1_2, t2s_1, t2s_2);
  test_T2s_19(t1_2, t2s_1, t2s_2);
  test_T2s_20(t1_1, t1_2, t2s_2);
  test_T2s_21(t1_1, t1_2, t2s_2);
  test_T2s_22(t2s_1, t2s_2);
  test_T2s_23(t2_1, t2s_2, t2s_3);
  test_T2s_24(t2_1, t2s_2, t2s_3);
  test_T2s_25(t2_1, t2s_2, t2s_3);
  test_T2s_26(t2_1, t2s_2, t2s_3);
  test_T2s_27(t2s_1, t2s_2);
  test_T2s_28(t2s_1, t2s_2);
  test_T2s_29(t2s_1, t2s_2);
  test_T2s_30(t2_1, t2_2, t2s_2);
  test_T2s_31(t2_1, t2_2, t2s_2);
  test_T2s_32(t2_1, t2_2, t2s_2);
  test_T2s_33(t2_1, t2_2, t2s_2);
  test_T2s_34(t1_2, t2s_1, t2s_2);
  test_T2s_35(t1_2, t2s_1, t2s_2);
  test_T2s_36(t2_2, t2s_2);
  test_T2s_37(t2_1, t2_2, t2s_2);
  test_T2s_38(t2_1, t2_2, t2s_2);
  test_T2s_39(t2_1, t2_2, t2s_2);
  test_T2s_40(t2_1, t2_2, t2s_2);
  test_T2s_41(t2_1, t2s_1, t2s_2);
  test_T2s_42(t2_1, t2s_1, t2s_2);
  test_T2s_43(t2_1, t2s_1, t2s_2);
  test_T2s_44(t2_1, t2s_1, t2s_2);
  test_T2s_45(t1_2, t2s_1);
  test_T2s_46(t1_2, t2s_1);
}
