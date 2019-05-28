#include "../../../src/FTensor.hpp"
#include "../test_for_zero.hpp"
#include <iostream>
using namespace GRLib;
using namespace std;

void test_T3as_01(const Dg<double, 3, 3> &t3dg_2,
                  Tensor3_antisymmetric<double, 3, 3> &t3as_1);
void test_T3as_02(const Dg<double, 3, 3> &t3dg_2,
                  Tensor3_antisymmetric<double, 3, 3> &t3as_1);
void test_T3as_03(const Dg<double, 3, 3> &t3dg_2,
                  Tensor3_antisymmetric<double, 3, 3> &t3as_1);
void test_T3as_04(Tensor3_antisymmetric<double, 3, 3> &t3as_1,
                  const Tensor3_antisymmetric<double, 3, 3> &t3as_2,
                  const Tensor3_antisymmetric<double, 3, 3> &t3as_3);
void test_T3as_05(Tensor3_antisymmetric<double, 3, 3> &t3as_1,
                  const Tensor3_antisymmetric<double, 3, 3> &t3as_2,
                  const Tensor3_antisymmetric<double, 3, 3> &t3as_3);
void test_T3as_06(Dg<double, 3, 3> &t3dg_1,
                  const Tensor3_antisymmetric<double, 3, 3> &t3as_2);
void test_T3as_07(Tensor3_antisymmetric<double, 3, 3> &t3as_1,
                  const Tensor3_antisymmetric<double, 3, 3> &t3as_2);
void test_T3as_08(Tensor3_antisymmetric<double, 3, 3> &t3as_1,
                  const Tensor3_antisymmetric<double, 3, 3> &t3as_2);
void test_T3as_09(const Tensor1<double, 3> &t1_2,
                  const Tensor2<double, 3, 3> &t2_2,
                  const Tensor3_antisymmetric<double, 3, 3> &t3as_2);
void test_T3as_10(const Tensor1<double, 3> &t1_2,
                  const Tensor2<double, 3, 3> &t2_2,
                  const Tensor3_antisymmetric<double, 3, 3> &t3as_2);
void test_T3as_11(const Tensor1<double, 3> &t1_2,
                  const Tensor2<double, 3, 3> &t2_2,
                  const Tensor3_antisymmetric<double, 3, 3> &t3as_2);
void test_T3as_12(const Tensor1<double, 3> &t1_2,
                  const Tensor2<double, 3, 3> &t2_2,
                  const Tensor3_antisymmetric<double, 3, 3> &t3as_2);
void test_T3as_13(const Tensor1<double, 3> &t1_2,
                  const Tensor2<double, 3, 3> &t2_2,
                  const Tensor3_antisymmetric<double, 3, 3> &t3as_2);
void test_T3as_14(const Tensor1<double, 3> &t1_2,
                  const Tensor2<double, 3, 3> &t2_2,
                  const Tensor3_antisymmetric<double, 3, 3> &t3as_2);

void test_T3as(const Tensor1<double, 3> &t1_2,
               const Tensor2<double, 3, 3> &t2_2, Dg<double, 3, 3> &t3dg_1,
               const Dg<double, 3, 3> &t3dg_2,
               Tensor3_antisymmetric<double, 3, 3> &t3as_1,
               const Tensor3_antisymmetric<double, 3, 3> &t3as_2,
               const Tensor3_antisymmetric<double, 3, 3> &t3as_3)
{
  test_T3as_01(t3dg_2, t3as_1);
  test_T3as_02(t3dg_2, t3as_1);
  test_T3as_03(t3dg_2, t3as_1);
  test_T3as_04(t3as_1, t3as_2, t3as_3);
  test_T3as_05(t3as_1, t3as_2, t3as_3);
  test_T3as_06(t3dg_1, t3as_2);
  test_T3as_07(t3as_1, t3as_2);
  test_T3as_08(t3as_1, t3as_2);
  test_T3as_09(t1_2, t2_2, t3as_2);
  test_T3as_10(t1_2, t2_2, t3as_2);
  test_T3as_11(t1_2, t2_2, t3as_2);
  test_T3as_12(t1_2, t2_2, t3as_2);
  test_T3as_13(t1_2, t2_2, t3as_2);
  test_T3as_14(t1_2, t2_2, t3as_2);
}
