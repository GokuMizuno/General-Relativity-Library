#include "../../../src/FTensor.hpp"
#include "../test_for_zero.hpp"
#include "../test_ostream.hpp"

using namespace GRLib;
using namespace std;

void test_T4_02(const Tensor4<double, 1, 2, 3, 4> &t4_1,
                const Tensor2<double, 4, 3> &t2_4,
                const Tensor2<double, 3, 4> &t2_5)
{
  Index<'i', 1> i;
  Index<'j', 2> j;
  Index<'k', 3> k;
  Index<'l', 4> l;

  for(int ii = 0; ii < 1; ++ii)
    {
      for(int jj = 0; jj < 2; ++jj)
        {
          test_for_zero((t4_1(i, j, k, l) * t2_5(k, l))(ii, jj)
                          - (t4_1(ii, jj, 0, 0) * t2_5(0, 0)
                             + t4_1(ii, jj, 0, 1) * t2_5(0, 1)
                             + t4_1(ii, jj, 0, 2) * t2_5(0, 2)
                             + t4_1(ii, jj, 0, 3) * t2_5(0, 3)
                             + t4_1(ii, jj, 1, 0) * t2_5(1, 0)
                             + t4_1(ii, jj, 1, 1) * t2_5(1, 1)
                             + t4_1(ii, jj, 1, 2) * t2_5(1, 2)
                             + t4_1(ii, jj, 1, 3) * t2_5(1, 3)
                             + t4_1(ii, jj, 2, 0) * t2_5(2, 0)
                             + t4_1(ii, jj, 2, 1) * t2_5(2, 1)
                             + t4_1(ii, jj, 2, 2) * t2_5(2, 2)
                             + t4_1(ii, jj, 2, 3) * t2_5(2, 3)),
                        "T4(i,j,k,l)*T2(k,l)(" + std::to_string(ii) + ","
                          + std::to_string(jj) + ")");
          test_for_zero((t2_5(k, l) * t4_1(i, j, k, l))(ii, jj)
                          - (t4_1(ii, jj, 0, 0) * t2_5(0, 0)
                             + t4_1(ii, jj, 0, 1) * t2_5(0, 1)
                             + t4_1(ii, jj, 0, 2) * t2_5(0, 2)
                             + t4_1(ii, jj, 0, 3) * t2_5(0, 3)
                             + t4_1(ii, jj, 1, 0) * t2_5(1, 0)
                             + t4_1(ii, jj, 1, 1) * t2_5(1, 1)
                             + t4_1(ii, jj, 1, 2) * t2_5(1, 2)
                             + t4_1(ii, jj, 1, 3) * t2_5(1, 3)
                             + t4_1(ii, jj, 2, 0) * t2_5(2, 0)
                             + t4_1(ii, jj, 2, 1) * t2_5(2, 1)
                             + t4_1(ii, jj, 2, 2) * t2_5(2, 2)
                             + t4_1(ii, jj, 2, 3) * t2_5(2, 3)),
                        "T2(k,l)*T4(i,j,k,l)(" + std::to_string(ii) + ","
                          + std::to_string(jj) + ")");
          test_for_zero((t4_1(i, j, k, l) * t2_4(l, k))(ii, jj)
                          - (t4_1(ii, jj, 0, 0) * t2_4(0, 0)
                             + t4_1(ii, jj, 0, 1) * t2_4(1, 0)
                             + t4_1(ii, jj, 0, 2) * t2_4(2, 0)
                             + t4_1(ii, jj, 0, 3) * t2_4(3, 0)
                             + t4_1(ii, jj, 1, 0) * t2_4(0, 1)
                             + t4_1(ii, jj, 1, 1) * t2_4(1, 1)
                             + t4_1(ii, jj, 1, 2) * t2_4(2, 1)
                             + t4_1(ii, jj, 1, 3) * t2_4(3, 1)
                             + t4_1(ii, jj, 2, 0) * t2_4(0, 2)
                             + t4_1(ii, jj, 2, 1) * t2_4(1, 2)
                             + t4_1(ii, jj, 2, 2) * t2_4(2, 2)
                             + t4_1(ii, jj, 2, 3) * t2_4(3, 2)),
                        "T4(i,j,k,l)*T2(l,k)(" + std::to_string(ii) + ","
                          + std::to_string(jj) + ")");
          test_for_zero((t2_4(l, k) * t4_1(i, j, k, l))(ii, jj)
                          - (t4_1(ii, jj, 0, 0) * t2_4(0, 0)
                             + t4_1(ii, jj, 0, 1) * t2_4(1, 0)
                             + t4_1(ii, jj, 0, 2) * t2_4(2, 0)
                             + t4_1(ii, jj, 0, 3) * t2_4(3, 0)
                             + t4_1(ii, jj, 1, 0) * t2_4(0, 1)
                             + t4_1(ii, jj, 1, 1) * t2_4(1, 1)
                             + t4_1(ii, jj, 1, 2) * t2_4(2, 1)
                             + t4_1(ii, jj, 1, 3) * t2_4(3, 1)
                             + t4_1(ii, jj, 2, 0) * t2_4(0, 2)
                             + t4_1(ii, jj, 2, 1) * t2_4(1, 2)
                             + t4_1(ii, jj, 2, 2) * t2_4(2, 2)
                             + t4_1(ii, jj, 2, 3) * t2_4(3, 2)),
                        "T2(l,k)*T4(i,j,k,l)(" + std::to_string(ii) + ","
                          + std::to_string(jj) + ")");
        }
      for(int kk = 0; kk < 3; ++kk)
        {
          test_for_zero((t4_1(i, j, k, l) * t2_5(j, l))(ii, kk)
                          - (t4_1(ii, 0, kk, 0) * t2_5(0, 0)
                             + t4_1(ii, 0, kk, 1) * t2_5(0, 1)
                             + t4_1(ii, 0, kk, 2) * t2_5(0, 2)
                             + t4_1(ii, 0, kk, 3) * t2_5(0, 3)
                             + t4_1(ii, 1, kk, 0) * t2_5(1, 0)
                             + t4_1(ii, 1, kk, 1) * t2_5(1, 1)
                             + t4_1(ii, 1, kk, 2) * t2_5(1, 2)
                             + t4_1(ii, 1, kk, 3) * t2_5(1, 3)),
                        "T4(i,j,k,l)*T2(j,l)(" + std::to_string(ii) + ","
                          + std::to_string(kk) + ")");
          test_for_zero((t2_5(j, l) * t4_1(i, j, k, l))(ii, kk)
                          - (t4_1(ii, 0, kk, 0) * t2_5(0, 0)
                             + t4_1(ii, 0, kk, 1) * t2_5(0, 1)
                             + t4_1(ii, 0, kk, 2) * t2_5(0, 2)
                             + t4_1(ii, 0, kk, 3) * t2_5(0, 3)
                             + t4_1(ii, 1, kk, 0) * t2_5(1, 0)
                             + t4_1(ii, 1, kk, 1) * t2_5(1, 1)
                             + t4_1(ii, 1, kk, 2) * t2_5(1, 2)
                             + t4_1(ii, 1, kk, 3) * t2_5(1, 3)),
                        "T2(j,l)*T4(i,j,k,l)(" + std::to_string(ii) + ","
                          + std::to_string(kk) + ")");
          test_for_zero((t4_1(i, j, k, l) * t2_4(l, j))(ii, kk)
                          - (t4_1(ii, 0, kk, 0) * t2_4(0, 0)
                             + t4_1(ii, 0, kk, 1) * t2_4(1, 0)
                             + t4_1(ii, 0, kk, 2) * t2_4(2, 0)
                             + t4_1(ii, 0, kk, 3) * t2_4(3, 0)
                             + t4_1(ii, 1, kk, 0) * t2_4(0, 1)
                             + t4_1(ii, 1, kk, 1) * t2_4(1, 1)
                             + t4_1(ii, 1, kk, 2) * t2_4(2, 1)
                             + t4_1(ii, 1, kk, 3) * t2_4(3, 1)),
                        "T4(i,j,k,l)*T2(l,j)(" + std::to_string(ii) + ","
                          + std::to_string(kk) + ")");
          test_for_zero((t2_4(l, j) * t4_1(i, j, k, l))(ii, kk)
                          - (t4_1(ii, 0, kk, 0) * t2_4(0, 0)
                             + t4_1(ii, 0, kk, 1) * t2_4(1, 0)
                             + t4_1(ii, 0, kk, 2) * t2_4(2, 0)
                             + t4_1(ii, 0, kk, 3) * t2_4(3, 0)
                             + t4_1(ii, 1, kk, 0) * t2_4(0, 1)
                             + t4_1(ii, 1, kk, 1) * t2_4(1, 1)
                             + t4_1(ii, 1, kk, 2) * t2_4(2, 1)
                             + t4_1(ii, 1, kk, 3) * t2_4(3, 1)),
                        "T2(l,j)*T4(i,j,k,l)(" + std::to_string(ii) + ","
                          + std::to_string(kk) + ")");
        }
      for(int ll = 0; ll < 4; ++ll)
        {
          test_for_zero((t4_1(i, j, k, l) * t2_5(j, k))(ii, ll)
                          - (t4_1(ii, 0, 0, ll) * t2_5(0, 0)
                             + t4_1(ii, 0, 1, ll) * t2_5(0, 1)
                             + t4_1(ii, 0, 2, ll) * t2_5(0, 2)
                             + t4_1(ii, 1, 0, ll) * t2_5(1, 0)
                             + t4_1(ii, 1, 1, ll) * t2_5(1, 1)
                             + t4_1(ii, 1, 2, ll) * t2_5(1, 2)),
                        "T4(i,j,k,l)*T2(j,k)(" + std::to_string(ii) + ","
                          + std::to_string(ll) + ")");
          test_for_zero((t2_5(j, k) * t4_1(i, j, k, l))(ii, ll)
                          - (t4_1(ii, 0, 0, ll) * t2_5(0, 0)
                             + t4_1(ii, 0, 1, ll) * t2_5(0, 1)
                             + t4_1(ii, 0, 2, ll) * t2_5(0, 2)
                             + t4_1(ii, 1, 0, ll) * t2_5(1, 0)
                             + t4_1(ii, 1, 1, ll) * t2_5(1, 1)
                             + t4_1(ii, 1, 2, ll) * t2_5(1, 2)),
                        "T2(j,k)*T4(i,j,k,l)(" + std::to_string(ii) + ","
                          + std::to_string(ll) + ")");
          test_for_zero((t4_1(i, j, k, l) * t2_4(k, j))(ii, ll)
                          - (t4_1(ii, 0, 0, ll) * t2_4(0, 0)
                             + t4_1(ii, 0, 1, ll) * t2_4(1, 0)
                             + t4_1(ii, 0, 2, ll) * t2_4(2, 0)
                             + t4_1(ii, 1, 0, ll) * t2_4(0, 1)
                             + t4_1(ii, 1, 1, ll) * t2_4(1, 1)
                             + t4_1(ii, 1, 2, ll) * t2_4(2, 1)),
                        "T4(i,j,k,l)*T2(k,j)(" + std::to_string(ii) + ","
                          + std::to_string(ll) + ")");
          test_for_zero((t2_4(k, j) * t4_1(i, j, k, l))(ii, ll)
                          - (t4_1(ii, 0, 0, ll) * t2_4(0, 0)
                             + t4_1(ii, 0, 1, ll) * t2_4(1, 0)
                             + t4_1(ii, 0, 2, ll) * t2_4(2, 0)
                             + t4_1(ii, 1, 0, ll) * t2_4(0, 1)
                             + t4_1(ii, 1, 1, ll) * t2_4(1, 1)
                             + t4_1(ii, 1, 2, ll) * t2_4(2, 1)),
                        "T2(k,j)*T4(i,j,k,l)(" + std::to_string(ii) + ","
                          + std::to_string(ll) + ")");
        }
    }
  for(int jj = 0; jj < 2; ++jj)
    {
      for(int kk = 0; kk < 3; ++kk)
        {
          test_for_zero((t4_1(i, j, k, l) * t2_5(i, l))(jj, kk)
                          - (t4_1(0, jj, kk, 0) * t2_5(0, 0)
                             + t4_1(0, jj, kk, 1) * t2_5(0, 1)
                             + t4_1(0, jj, kk, 2) * t2_5(0, 2)
                             + t4_1(0, jj, kk, 3) * t2_5(0, 3)),
                        "T4(i,j,k,l)*T2(i,l)(" + std::to_string(jj) + ","
                          + std::to_string(kk) + ")");
          test_for_zero((t2_5(i, l) * t4_1(i, j, k, l))(jj, kk)
                          - (t4_1(0, jj, kk, 0) * t2_5(0, 0)
                             + t4_1(0, jj, kk, 1) * t2_5(0, 1)
                             + t4_1(0, jj, kk, 2) * t2_5(0, 2)
                             + t4_1(0, jj, kk, 3) * t2_5(0, 3)),
                        "T2(i,l)*T4(i,j,k,l)(" + std::to_string(jj) + ","
                          + std::to_string(kk) + ")");
          test_for_zero((t4_1(i, j, k, l) * t2_4(l, i))(jj, kk)
                          - (t4_1(0, jj, kk, 0) * t2_4(0, 0)
                             + t4_1(0, jj, kk, 1) * t2_4(1, 0)
                             + t4_1(0, jj, kk, 2) * t2_4(2, 0)
                             + t4_1(0, jj, kk, 3) * t2_4(3, 0)),
                        "T4(i,j,k,l)*T2(l,i)(" + std::to_string(jj) + ","
                          + std::to_string(kk) + ")");
          test_for_zero((t2_4(l, i) * t4_1(i, j, k, l))(jj, kk)
                          - (t4_1(0, jj, kk, 0) * t2_4(0, 0)
                             + t4_1(0, jj, kk, 1) * t2_4(1, 0)
                             + t4_1(0, jj, kk, 2) * t2_4(2, 0)
                             + t4_1(0, jj, kk, 3) * t2_4(3, 0)),
                        "T2(l,i)*T4(i,j,k,l)(" + std::to_string(jj) + ","
                          + std::to_string(kk) + ")");
        }
      for(int ll = 0; ll < 4; ++ll)
        {
          test_for_zero((t4_1(i, j, k, l) * t2_5(i, k))(jj, ll)
                          - (t4_1(0, jj, 0, ll) * t2_5(0, 0)
                             + t4_1(0, jj, 1, ll) * t2_5(0, 1)
                             + t4_1(0, jj, 2, ll) * t2_5(0, 2)),
                        "T4(i,j,k,l)*T2(i,k)(" + std::to_string(jj) + ","
                          + std::to_string(ll) + ")");
          test_for_zero((t2_5(i, k) * t4_1(i, j, k, l))(jj, ll)
                          - (t4_1(0, jj, 0, ll) * t2_5(0, 0)
                             + t4_1(0, jj, 1, ll) * t2_5(0, 1)
                             + t4_1(0, jj, 2, ll) * t2_5(0, 2)),
                        "T2(i,k)*T4(i,j,k,l)(" + std::to_string(jj) + ","
                          + std::to_string(ll) + ")");
          test_for_zero((t4_1(i, j, k, l) * t2_4(k, i))(jj, ll)
                          - (t4_1(0, jj, 0, ll) * t2_4(0, 0)
                             + t4_1(0, jj, 1, ll) * t2_4(1, 0)
                             + t4_1(0, jj, 2, ll) * t2_4(2, 0)),
                        "T4(i,j,k,l)*T2(k,i)(" + std::to_string(jj) + ","
                          + std::to_string(ll) + ")");
          test_for_zero((t2_4(k, i) * t4_1(i, j, k, l))(jj, ll)
                          - (t4_1(0, jj, 0, ll) * t2_4(0, 0)
                             + t4_1(0, jj, 1, ll) * t2_4(1, 0)
                             + t4_1(0, jj, 2, ll) * t2_4(2, 0)),
                        "T2(k,i)*T4(i,j,k,l)(" + std::to_string(jj) + ","
                          + std::to_string(ll) + ")");
        }
    }
  for(int kk = 0; kk < 3; ++kk)
    for(int ll = 0; ll < 4; ++ll)
      {
        test_for_zero((t4_1(i, j, k, l) * t2_5(i, j))(kk, ll)
                        - (t4_1(0, 0, kk, ll) * t2_5(0, 0)
                           + t4_1(0, 1, kk, ll) * t2_5(0, 1)),
                      "T4(i,j,k,l)*T2(i,j)(" + std::to_string(kk) + ","
                        + std::to_string(ll) + ")");
        test_for_zero((t2_5(i, j) * t4_1(i, j, k, l))(kk, ll)
                        - (t4_1(0, 0, kk, ll) * t2_5(0, 0)
                           + t4_1(0, 1, kk, ll) * t2_5(0, 1)),
                      "T2(i,j)*T4(i,j,k,l)(" + std::to_string(kk) + ","
                        + std::to_string(ll) + ")");
        test_for_zero((t4_1(i, j, k, l) * t2_4(j, i))(kk, ll)
                        - (t4_1(0, 0, kk, ll) * t2_4(0, 0)
                           + t4_1(0, 1, kk, ll) * t2_4(1, 0)),
                      "T4(i,j,k,l)*T2(j,i)(" + std::to_string(kk) + ","
                        + std::to_string(ll) + ")");
        test_for_zero((t2_4(j, i) * t4_1(i, j, k, l))(kk, ll)
                        - (t4_1(0, 0, kk, ll) * t2_4(0, 0)
                           + t4_1(0, 1, kk, ll) * t2_4(1, 0)),
                      "T2(j,i)*T4(i,j,k,l)(" + std::to_string(kk) + ","
                        + std::to_string(ll) + ")");
      }
}
