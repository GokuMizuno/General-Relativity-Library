#include "../../../src/FTensor.hpp"
#include "../test_for_zero.hpp"
#include <iostream>
using namespace GRLib;
using namespace std;

void test_T4_04(const Tensor4<double, 1, 2, 3, 4> &t4)
{
  Index<'i', 1> i;
  Index<'j', 2> j;
  Index<'k', 3> k;
  Index<'l', 4> l;

  {
    for(int ii = 0; ii < 1; ++ii)
      {
        for(int jj = 0; jj < 2; ++jj)
          {
            test_for_zero(
              t4(i, j, k, k)(ii, jj)
                - (t4(ii, jj, 0, 0) + t4(ii, jj, 1, 1) + t4(ii, jj, 2, 2)),
              "T4(i,j,k,k)(" + std::to_string(ii) + "," + std::to_string(jj)
                + ")");
          }
        for(int kk = 0; kk < 3; ++kk)
          {
            test_for_zero(t4(i, j, k, j)(ii, kk)
                            - (t4(ii, 0, kk, 0) + t4(ii, 1, kk, 1)),
                          "T4(i,j,k,j)(" + std::to_string(ii) + ","
                            + std::to_string(kk) + ")");
          }
        for(int ll = 0; ll < 3; ++ll)
          {
            test_for_zero(t4(i, j, j, l)(ii, ll)
                            - (t4(ii, 0, 0, ll) + t4(ii, 1, 1, ll)),
                          "T4(i,j,j,l)(" + std::to_string(ii) + ","
                            + std::to_string(ll) + ")");
          }
      }
    for(int jj = 0; jj < 2; ++jj)
      {
        for(int kk = 0; kk < 3; ++kk)
          {
            test_for_zero(t4(i, j, k, i)(jj, kk) - (t4(0, jj, kk, 0)),
                          "T4(i,j,k,i)(" + std::to_string(jj) + ","
                            + std::to_string(kk) + ")");
          }
        for(int ll = 0; ll < 3; ++ll)
          {
            test_for_zero(t4(i, j, i, l)(jj, ll) - (t4(0, jj, 0, ll)),
                          "T4(i,j,i,l)(" + std::to_string(jj) + ","
                            + std::to_string(ll) + ")");
          }
      }
    for(int kk = 0; kk < 3; ++kk)
      for(int ll = 0; ll < 3; ++ll)
        {
          test_for_zero(t4(i, i, k, l)(kk, ll) - (t4(0, 0, kk, ll)),
                        "T4(i,i,k,l)(" + std::to_string(kk) + ","
                          + std::to_string(ll) + ")");
        }
  }
}
