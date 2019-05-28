#include "../../../src/FTensor.hpp"
#include "../test_for_zero.hpp"
#include "../test_ostream.hpp"

using namespace FTensor;
using namespace std;
void test_T2s_iostream()
{
  test_ostream(Tensor2_symmetric<double, 3>(3., 7., 11., 13., 17., 23.),
               "[[3,7,11],[13,17],[23]]", "operator<<(T2s<3>)");
  test_ostream(Tensor2_symmetric<double, 1>(13.), "[[13]]",
               "operator<<(T2s<1>)");

  Tensor2_symmetric<double, 3> t2s_1;
  std::stringstream ss("[[3,7,11],[13,17],[23]]");
  ss >> t2s_1;
  test_for_zero(t2s_1(0, 0) - 3, "operator>>(T2s)(0,0)");
  test_for_zero(t2s_1(0, 1) - 7, "operator>>(T2s)(0,1)");
  test_for_zero(t2s_1(0, 2) - 11, "operator>>(T2s)(0,2)");
  test_for_zero(t2s_1(1, 1) - 13, "operator>>(T2s)(1,1)");
  test_for_zero(t2s_1(1, 2) - 17, "operator>>(T2s)(1,2)");
  test_for_zero(t2s_1(2, 2) - 23, "operator>>(T2s)(2,2)");
}
