#include "../../../src/FTensor.hpp"
#include "../test_for_zero.hpp"
#include "../test_ostream.hpp"

using namespace FTensor;
using namespace std;
void test_T3_iostream()
{
  test_ostream(Tensor3<double, 2, 2, 2>(3., 4., 7., 8., 11., 12., 13., 14.),
               "[[[3,4],[7,8]],[[11,12],[13,14]]]", "operator<<(T3<3,3,2>)");

  Tensor3<double, 2, 2, 2> t3_1;
  std::stringstream ss("[[[3,4],[7,8]],[[11,12],[13,14]]]");
  ss >> t3_1;
  test_for_zero(t3_1(0, 0, 0) - 3, "operator>>(T3)(0,0,0)");
  test_for_zero(t3_1(0, 0, 1) - 4, "operator>>(T3)(0,0,1)");
  test_for_zero(t3_1(0, 1, 0) - 7, "operator>>(T3)(0,1,0)");
  test_for_zero(t3_1(0, 1, 1) - 8, "operator>>(T3)(0,1,1)");
  test_for_zero(t3_1(1, 0, 0) - 11, "operator>>(T3)(1,0,0)");
  test_for_zero(t3_1(1, 0, 1) - 12, "operator>>(T3)(1,0,1)");
  test_for_zero(t3_1(1, 1, 0) - 13, "operator>>(T3)(1,1,0)");
  test_for_zero(t3_1(1, 1, 1) - 14, "operator>>(T3)(1,1,1)");
}
