#include "../../../src/FTensor.hpp"
#include "../test_for_zero.hpp"
#include <iostream>
using namespace FTensor;
using namespace std;

void test_T4_05(const Tensor4<double, 1, 2, 3, 4> &t4,
                const Tensor2<double, 4, 3> &t2_4,
                const Tensor2<double, 3, 4> &t2_5)
{
  Index<'i', 1> i;
  Index<'j', 2> j;
  Index<'k', 3> k;
  Index<'l', 4> l;
  Index<'m', 3> m;
  Index<'n', 4> n;

  for(int ii = 0; ii < 1; ++ii)
    {
      for(int jj = 0; jj < 2; ++jj)
        {
          for(int kk = 0; kk < 3; ++kk)
            for(int mm = 0; mm < 3; ++mm)
              {
                test_for_zero((t4(i, j, k, l) * t2_4(l, m))(ii, jj, kk, mm)
                                - (t4(ii, jj, kk, 0) * t2_4(0, mm)
                                   + t4(ii, jj, kk, 1) * t2_4(1, mm)
                                   + t4(ii, jj, kk, 2) * t2_4(2, mm)
                                   + t4(ii, jj, kk, 3) * t2_4(3, mm)),
                              "T4(i,j,k,l)*T2(l,m)(" + std::to_string(ii) + ","
                                + std::to_string(jj) + "," + std::to_string(kk)
                                + "," + std::to_string(mm) + ")");

                test_for_zero((t2_4(l, m) * t4(i, j, k, l))(ii, jj, kk, mm)
                                - (t4(ii, jj, kk, 0) * t2_4(0, mm)
                                   + t4(ii, jj, kk, 1) * t2_4(1, mm)
                                   + t4(ii, jj, kk, 2) * t2_4(2, mm)
                                   + t4(ii, jj, kk, 3) * t2_4(3, mm)),
                              "T2(l,m)*T4(i,j,k,l)(" + std::to_string(ii) + ","
                                + std::to_string(jj) + "," + std::to_string(kk)
                                + "," + std::to_string(mm) + ")");

                test_for_zero((t4(i, j, k, l) * t2_5(m, l))(ii, jj, kk, mm)
                                - (t4(ii, jj, kk, 0) * t2_5(mm, 0)
                                   + t4(ii, jj, kk, 1) * t2_5(mm, 1)
                                   + t4(ii, jj, kk, 2) * t2_5(mm, 2)
                                   + t4(ii, jj, kk, 3) * t2_5(mm, 3)),
                              "T4(i,j,k,l)*T2(m,l)(" + std::to_string(ii) + ","
                                + std::to_string(jj) + "," + std::to_string(kk)
                                + "," + std::to_string(mm) + ")");

                test_for_zero((t2_5(m, l) * t4(i, j, k, l))(ii, jj, kk, mm)
                                - (t4(ii, jj, kk, 0) * t2_5(mm, 0)
                                   + t4(ii, jj, kk, 1) * t2_5(mm, 1)
                                   + t4(ii, jj, kk, 2) * t2_5(mm, 2)
                                   + t4(ii, jj, kk, 3) * t2_5(mm, 3)),
                              "T2(m,l)*T4(i,j,k,l)(" + std::to_string(ii) + ","
                                + std::to_string(jj) + "," + std::to_string(kk)
                                + "," + std::to_string(mm) + ")");
              }
          for(int ll = 0; ll < 4; ++ll)
            for(int nn = 0; nn < 3; ++nn)
              {
                test_for_zero((t4(i, j, k, l) * t2_5(k, n))(ii, jj, ll, nn)
                                - (t4(ii, jj, 0, ll) * t2_5(0, nn)
                                   + t4(ii, jj, 1, ll) * t2_5(1, nn)
                                   + t4(ii, jj, 2, ll) * t2_5(2, nn)),
                              "T4(i,j,k,l)*T2(k,n)(" + std::to_string(ii) + ","
                                + std::to_string(jj) + "," + std::to_string(ll)
                                + "," + std::to_string(nn) + ")");
                test_for_zero((t2_5(k, n) * t4(i, j, k, l))(ii, jj, ll, nn)
                                - (t4(ii, jj, 0, ll) * t2_5(0, nn)
                                   + t4(ii, jj, 1, ll) * t2_5(1, nn)
                                   + t4(ii, jj, 2, ll) * t2_5(2, nn)),
                              "T2(k,n)*T4(i,j,k,l)(" + std::to_string(ii) + ","
                                + std::to_string(jj) + "," + std::to_string(ll)
                                + "," + std::to_string(nn) + ")");
                test_for_zero((t4(i, j, k, l) * t2_4(n, k))(ii, jj, ll, nn)
                                - (t4(ii, jj, 0, ll) * t2_4(nn, 0)
                                   + t4(ii, jj, 1, ll) * t2_4(nn, 1)
                                   + t4(ii, jj, 2, ll) * t2_4(nn, 2)),
                              "T4(i,j,k,l)*T2(n,k)(" + std::to_string(ii) + ","
                                + std::to_string(jj) + "," + std::to_string(ll)
                                + "," + std::to_string(nn) + ")");
                test_for_zero((t2_4(n, k) * t4(i, j, k, l))(ii, jj, ll, nn)
                                - (t4(ii, jj, 0, ll) * t2_4(nn, 0)
                                   + t4(ii, jj, 1, ll) * t2_4(nn, 1)
                                   + t4(ii, jj, 2, ll) * t2_4(nn, 2)),
                              "T2(n,k)*T4(i,j,k,l)(" + std::to_string(ii) + ","
                                + std::to_string(jj) + "," + std::to_string(ll)
                                + "," + std::to_string(nn) + ")");
              }
        }
      for(int kk = 0; kk < 3; ++kk)
        for(int ll = 0; ll < 4; ++ll)
          for(int mm = 0; mm < 3; ++mm)
            {
              test_for_zero((t4(i, j, k, l) * t2_4(j, m))(ii, kk, ll, mm)
                              - (t4(ii, 0, kk, ll) * t2_4(0, mm)
                                 + t4(ii, 1, kk, ll) * t2_4(1, mm)),
                            "T4(i,j,k,l)*T2(j,m)(" + std::to_string(ii) + ","
                              + std::to_string(kk) + "," + std::to_string(ll)
                              + "," + std::to_string(mm) + ")");
              test_for_zero((t2_4(j, m) * t4(i, j, k, l))(ii, kk, ll, mm)
                              - (t4(ii, 0, kk, ll) * t2_4(0, mm)
                                 + t4(ii, 1, kk, ll) * t2_4(1, mm)),
                            "T2(j,m)*T4(i,j,k,l)(" + std::to_string(ii) + ","
                              + std::to_string(kk) + "," + std::to_string(ll)
                              + "," + std::to_string(mm) + ")");
              test_for_zero((t4(i, j, k, l) * t2_4(m, j))(ii, kk, ll, mm)
                              - (t4(ii, 0, kk, ll) * t2_4(mm, 0)
                                 + t4(ii, 1, kk, ll) * t2_4(mm, 1)),
                            "T4(i,j,k,l)*T2(m,j)(" + std::to_string(ii) + ","
                              + std::to_string(kk) + "," + std::to_string(ll)
                              + "," + std::to_string(mm) + ")");
              test_for_zero((t2_4(m, j) * t4(i, j, k, l))(ii, kk, ll, mm)
                              - (t4(ii, 0, kk, ll) * t2_4(mm, 0)
                                 + t4(ii, 1, kk, ll) * t2_4(mm, 1)),
                            "T2(m,j)*T4(i,j,k,l)(" + std::to_string(ii) + ","
                              + std::to_string(kk) + "," + std::to_string(ll)
                              + "," + std::to_string(mm) + ")");
            }
    }
  for(int jj = 0; jj < 2; ++jj)
    for(int kk = 0; kk < 3; ++kk)
      for(int ll = 0; ll < 4; ++ll)
        for(int mm = 0; mm < 3; ++mm)
          {
            test_for_zero((t4(i, j, k, l) * t2_4(i, m))(jj, kk, ll, mm)
                            - t4(0, jj, kk, ll) * t2_4(0, mm),
                          "T4(i,j,k,l)*T2(i,m)(" + std::to_string(jj) + ","
                            + std::to_string(kk) + "," + std::to_string(ll)
                            + "," + std::to_string(mm) + ")");
            test_for_zero((t2_4(i, m) * t4(i, j, k, l))(jj, kk, ll, mm)
                            - t4(0, jj, kk, ll) * t2_4(0, mm),
                          "T2(i,m)*T4(i,j,k,l)(" + std::to_string(jj) + ","
                            + std::to_string(kk) + "," + std::to_string(ll)
                            + "," + std::to_string(mm) + ")");
            test_for_zero((t4(i, j, k, l) * t2_4(m, i))(jj, kk, ll, mm)
                            - t4(0, jj, kk, ll) * t2_4(mm, 0),
                          "T4(i,j,k,l)*T2(m,i)(" + std::to_string(jj) + ","
                            + std::to_string(kk) + "," + std::to_string(ll)
                            + "," + std::to_string(mm) + ")");
            test_for_zero((t2_4(m, i) * t4(i, j, k, l))(jj, kk, ll, mm)
                            - t4(0, jj, kk, ll) * t2_4(mm, 0),
                          "T2(m,i)*T4(i,j,k,l)(" + std::to_string(jj) + ","
                            + std::to_string(kk) + "," + std::to_string(ll)
                            + "," + std::to_string(mm) + ")");
          }
}
