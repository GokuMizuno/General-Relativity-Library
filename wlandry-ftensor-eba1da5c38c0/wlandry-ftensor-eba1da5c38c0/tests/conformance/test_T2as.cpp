#include "../../src/FTensor.hpp"
#include "test_for_zero.hpp"
#include "test_ostream.hpp"

using namespace FTensor;
using namespace std;
void test_T2as()
{
  test_ostream(Tensor2_antisymmetric<double, 3>(3., 7., 11.), "[[3,7],[11]]",
               "operator<<(T2as<3>)");
  test_ostream(Tensor2_antisymmetric<double, 2>(13.), "[[13]]",
               "operator<<(T2as<1>)");

  Tensor2_antisymmetric<double, 3> t2as_1;
  std::stringstream ss("[[3,7],[13]]");
  ss >> t2as_1;
  test_for_zero(t2as_1(0, 1) - 3, "operator>>(T2as)(0,1)");
  test_for_zero(t2as_1(0, 2) - 7, "operator>>(T2as)(0,2)");
  test_for_zero(t2as_1(1, 2) - 13, "operator>>(T2as)(1,2)");
}
