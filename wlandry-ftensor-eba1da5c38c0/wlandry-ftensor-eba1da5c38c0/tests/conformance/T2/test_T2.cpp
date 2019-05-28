#include "../../../src/FTensor.hpp"
#include "../test_for_zero.hpp"
#include <iostream>
using namespace FTensor;
using namespace std;

void test_T2_iostream();
void test_T2_01(const Tensor1<double, 3> &t1_1,
                const Tensor1<double, 3> &t1_2);
void test_T2_02(const Tensor1<double, 3> &t1_1);
void test_T2_03();
void test_T2_04(const Tensor2<double, 3, 3> &t2_1);
void test_T2_05(const Tensor2<double, 3, 3> &t2_1);
void test_T2_06(const Tensor2<double, 3, 3> &t2_1);
void test_T2_07(const Tensor2<double, 3, 3> &t2_1);
void test_T2_08(const Tensor1<double, 3> &t1_2);
void test_T2_09();
void test_T2_10(const Tensor2<double, 3, 3> &t2_1);
void test_T2_11(const Tensor2<double, 3, 3> &t2_1);
void test_T2_12(const Tensor2<double, 3, 3> &t2_1);
void test_T2_13(const Tensor2<double, 3, 3> &t2_1);
void test_T2_14(const Tensor1<double, 3> &t1_1, const Tensor1<double, 3> &t1_2,
                const Tensor2<double, 3, 3> &t2_2);
void test_T2_15(const Tensor1<double, 3> &t1_1, const Tensor1<double, 3> &t1_2,
                const Tensor2<double, 3, 3> &t2_2);
void test_T2_16(const Tensor1<double, 3> &t1_1, const Tensor1<double, 3> &t1_2,
                const Tensor2<double, 3, 3> &t2_2);
void test_T2_17(const Tensor2<double, 3, 3> &t2_1,
                const Tensor2<double, 3, 3> &t2_2);
void test_T2_18(const Tensor2<double, 3, 3> &t2_1,
                const Tensor2<double, 3, 3> &t2_2);
void test_T2_19(const Tensor1<double, 3> &t1_1, const Tensor1<double, 3> &t1_2,
                const Tensor2<double, 3, 3> &t2_2);
void test_T2_20(const Tensor2<double, 3, 3> &t2_1,
                const Tensor2<double, 3, 3> &t2_2);
void test_T2_21(const Tensor2<double, 3, 3> &t2_1,
                const Tensor2<double, 3, 3> &t2_2);
void test_T2_22(const Tensor2<double, 3, 3> &t2_1);
void test_T2_23(const Tensor1<double, 3> &t1_2,
                const Tensor2<double, 3, 3> &t2_2);
void test_T2_24(const Tensor1<double, 3> &t1_2,
                const Tensor2<double, 3, 3> &t2_2);
void test_T2_25(const Tensor2<double, 4, 3> &t2_4,
                const Tensor2<double, 3, 4> &t2_5);
void test_T2_26(const Tensor2<double, 4, 3> &t2_4,
                const Tensor2<double, 3, 4> &t2_5);
void test_T2_27(const Tensor2<double, 4, 3> &t2_4,
                const Tensor2<double, 3, 4> &t2_5);
void test_T2_28(const Tensor2<double, 4, 3> &t2_4,
                const Tensor2<double, 3, 4> &t2_5);
void test_T2_29(const Tensor2<double, 4, 3> &t2_4,
                const Tensor2<double, 3, 4> &t2_5);
void test_T2_30(const Tensor1<double, 3> &t1_2,
                const Tensor2<double, 3, 3> &t2_2);
void test_T2_31(const Tensor1<double, 3> &t1_2,
                const Tensor2<double, 3, 3> &t2_2);
void test_T2_32(const Tensor2<double, 3, 3> &t2_2);
void test_T2_33(const Tensor2<double, 3, 3> &t2_2);
void test_T2_34(const Tensor2<double, 3, 3> &t2_2);
void test_T2_35(const Tensor2<double, 3, 3> &t2_2);
void test_T2_36(const Tensor2<double, 3, 3> &t2_2);
void test_T2_37(const Tensor2<double, 3, 3> &t2_2);
void test_T2_38();

void test_T2(const Tensor1<double, 3> &t1_1, const Tensor1<double, 3> &t1_2,
             const Tensor2<double, 3, 3> &t2_1,
             const Tensor2<double, 3, 3> &t2_2,
             const Tensor2<double, 4, 3> &t2_4,
             const Tensor2<double, 3, 4> &t2_5)
{
  test_T2_iostream();
  test_T2_01(t1_1, t1_2);
  test_T2_02(t1_1);
  test_T2_03();
  test_T2_04(t2_1);
  test_T2_05(t2_1);
  test_T2_06(t2_1);
  test_T2_07(t2_1);
  test_T2_08(t1_2);
  test_T2_09();
  test_T2_10(t2_1);
  test_T2_11(t2_1);
  test_T2_12(t2_1);
  test_T2_13(t2_1);
  test_T2_14(t1_1, t1_2, t2_2);
  test_T2_15(t1_1, t1_2, t2_2);
  test_T2_16(t1_1, t1_2, t2_2);
  test_T2_17(t2_1, t2_2);
  test_T2_18(t2_1, t2_2);
  test_T2_19(t1_1, t1_2, t2_2);
  test_T2_20(t2_1, t2_2);
  test_T2_21(t2_1, t2_2);
  test_T2_22(t2_1);
  test_T2_23(t1_2, t2_2);
  test_T2_24(t1_2, t2_2);
  test_T2_25(t2_4, t2_5);
  test_T2_26(t2_4, t2_5);
  test_T2_27(t2_4, t2_5);
  test_T2_28(t2_4, t2_5);
  test_T2_29(t2_4, t2_5);
  test_T2_30(t1_2, t2_2);
  test_T2_31(t1_2, t2_2);
  test_T2_32(t2_2);
  test_T2_33(t2_2);
  test_T2_34(t2_2);
  test_T2_35(t2_2);
  test_T2_36(t2_2);
  test_T2_37(t2_2);
  test_T2_38();
}
