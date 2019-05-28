#include "../../../src/FTensor.hpp"
#include "../test_for_zero.hpp"
#include <iostream>
using namespace GRLib;
using namespace std;

void test_Levi_Civita_01(void);
void test_Levi_Civita_02(void);
void test_Levi_Civita_03(void);
void test_Levi_Civita_04(void);

void test_Levi_Civita()
{
  test_Levi_Civita_01();
  test_Levi_Civita_02();
  test_Levi_Civita_03();
  test_Levi_Civita_04();
}
