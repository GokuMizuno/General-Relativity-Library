#include "../../../src/FTensor.hpp"
#include "../test_for_zero.hpp"
#include "../test_ostream.hpp"

using namespace GRLib;
using namespace std;

void test_T4_01(const Tensor4<double, 1, 2, 3, 4> &t4_1)
{
  Index<'i', 1> i;
  Index<'j', 2> j;
  Index<'k', 3> k;
  Index<'l', 4> l;

  // (i,...)
  {
    Tensor4<double, 1, 2, 3, 4> t4;
    t4(i, j, k, l) = t4_1(i, j, k, l);
    for(int i1 = 0; i1 < 2; ++i1)
      for(int i2 = 0; i2 < 3; ++i2)
        for(int i3 = 0; i3 < 4; ++i3)
          {
            test_for_zero(t4_1(0, i1, i2, i3) - t4(0, i1, i2, i3),
                          "T4(i,j,k,l)=T4(i,j,k,l)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
            test_for_zero((t4_1(i, j, k, l) + t4(i, j, k, l))(0, i1, i2, i3)
                            - 2 * t4_1(0, i1, i2, i3),
                          "T4(i,j,k,l)+T4(i,j,k,l)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
            test_for_zero((t4_1(i, j, k, l) - t4(i, j, k, l))(0, i1, i2, i3),
                          "T4(i,j,k,l)-T4(i,j,k,l)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
          }
  }
  {
    Tensor4<double, 1, 2, 4, 3> t4;
    t4(i, j, l, k) = t4_1(i, j, k, l);
    for(int i1 = 0; i1 < 2; ++i1)
      for(int i2 = 0; i2 < 3; ++i2)
        for(int i3 = 0; i3 < 4; ++i3)
          {
            test_for_zero(t4_1(0, i1, i2, i3) - t4(0, i1, i3, i2),
                          "T4(i,j,k,l)=T4(i,j,l,k)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
            test_for_zero((t4_1(i, j, k, l) + t4(i, j, l, k))(0, i1, i2, i3)
                            - 2 * t4_1(0, i1, i2, i3),
                          "T4(i,j,k,l)+T4(i,j,l,k)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
            test_for_zero((t4_1(i, j, k, l) - t4(i, j, l, k))(0, i1, i2, i3),
                          "T4(i,j,k,l)-T4(i,j,l,k)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
          }
  }
  {
    Tensor4<double, 1, 3, 2, 4> t4;
    t4(i, k, j, l) = t4_1(i, j, k, l);
    for(int i1 = 0; i1 < 2; ++i1)
      for(int i2 = 0; i2 < 3; ++i2)
        for(int i3 = 0; i3 < 4; ++i3)
          {
            test_for_zero(t4_1(0, i1, i2, i3) - t4(0, i2, i1, i3),
                          "T4(i,j,k,l)=T4(i,k,j,l)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
            test_for_zero((t4_1(i, j, k, l) + t4(i, k, j, l))(0, i1, i2, i3)
                            - 2 * t4_1(0, i1, i2, i3),
                          "T4(i,j,k,l)+T4(i,k,j,l)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
            test_for_zero((t4_1(i, j, k, l) - t4(i, k, j, l))(0, i1, i2, i3),
                          "T4(i,j,k,l)-T4(i,k,j,l)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
          }
  }
  {
    Tensor4<double, 1, 3, 4, 2> t4;
    t4(i, k, l, j) = t4_1(i, j, k, l);
    for(int i1 = 0; i1 < 2; ++i1)
      for(int i2 = 0; i2 < 3; ++i2)
        for(int i3 = 0; i3 < 4; ++i3)
          {
            test_for_zero(t4_1(0, i1, i2, i3) - t4(0, i2, i3, i1),
                          "T4(i,j,k,l)=T4(i,k,l,j)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
            test_for_zero((t4_1(i, j, k, l) + t4(i, k, l, j))(0, i1, i2, i3)
                            - 2 * t4_1(0, i1, i2, i3),
                          "T4(i,j,k,l)+T4(i,k,l,j)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
            test_for_zero((t4_1(i, j, k, l) - t4(i, k, l, j))(0, i1, i2, i3),
                          "T4(i,j,k,l)-T4(i,k,l,j)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
          }
  }
  {
    Tensor4<double, 1, 4, 2, 3> t4;
    t4(i, l, j, k) = t4_1(i, j, k, l);
    for(int i1 = 0; i1 < 2; ++i1)
      for(int i2 = 0; i2 < 3; ++i2)
        for(int i3 = 0; i3 < 4; ++i3)
          {
            test_for_zero(t4_1(0, i1, i2, i3) - t4(0, i3, i1, i2),
                          "T4(i,j,k,l)=T4(i,l,j,k)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
            test_for_zero((t4_1(i, j, k, l) + t4(i, l, j, k))(0, i1, i2, i3)
                            - 2 * t4_1(0, i1, i2, i3),
                          "T4(i,j,k,l)+T4(i,l,j,k)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
            test_for_zero((t4_1(i, j, k, l) - t4(i, l, j, k))(0, i1, i2, i3),
                          "T4(i,j,k,l)-T4(i,l,j,k)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
          }
  }
  {
    Tensor4<double, 1, 4, 3, 2> t4;
    t4(i, l, k, j) = t4_1(i, j, k, l);
    for(int i1 = 0; i1 < 2; ++i1)
      for(int i2 = 0; i2 < 3; ++i2)
        for(int i3 = 0; i3 < 4; ++i3)
          {
            test_for_zero(t4_1(0, i1, i2, i3) - t4(0, i3, i2, i1),
                          "T4(i,j,k,l)=T4(i,l,k,j)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
            test_for_zero((t4_1(i, j, k, l) + t4(i, l, k, j))(0, i1, i2, i3)
                            - 2 * t4_1(0, i1, i2, i3),
                          "T4(i,j,k,l)+T4(i,l,k,j)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
            test_for_zero((t4_1(i, j, k, l) - t4(i, l, k, j))(0, i1, i2, i3),
                          "T4(i,j,k,l)-T4(i,l,k,j)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
          }
  }

  // (j,...)
  {
    Tensor4<double, 2, 1, 3, 4> t4;
    t4(j, i, k, l) = t4_1(i, j, k, l);
    for(int i1 = 0; i1 < 2; ++i1)
      for(int i2 = 0; i2 < 3; ++i2)
        for(int i3 = 0; i3 < 4; ++i3)
          {
            test_for_zero(t4_1(0, i1, i2, i3) - t4(i1, 0, i2, i3),
                          "T4(j,i,k,l)=T4(i,j,k,l)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
            test_for_zero((t4_1(i, j, k, l) + t4(j, i, k, l))(0, i1, i2, i3)
                            - 2 * t4_1(0, i1, i2, i3),
                          "T4(j,i,k,l)+T4(i,j,k,l)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
            test_for_zero((t4_1(i, j, k, l) - t4(j, i, k, l))(0, i1, i2, i3),
                          "T4(j,i,k,l)-T4(i,j,k,l)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
          }
  }
  {
    Tensor4<double, 2, 1, 4, 3> t4;
    t4(j, i, l, k) = t4_1(i, j, k, l);
    for(int i1 = 0; i1 < 2; ++i1)
      for(int i2 = 0; i2 < 3; ++i2)
        for(int i3 = 0; i3 < 4; ++i3)
          {
            test_for_zero(t4_1(0, i1, i2, i3) - t4(i1, 0, i3, i2),
                          "T4(i,j,k,l)=T4(j,i,l,k)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
            test_for_zero((t4_1(i, j, k, l) + t4(j, i, l, k))(0, i1, i2, i3)
                            - 2 * t4_1(0, i1, i2, i3),
                          "T4(i,j,k,l)+T4(j,i,l,k)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
            test_for_zero((t4_1(i, j, k, l) - t4(j, i, l, k))(0, i1, i2, i3),
                          "T4(i,j,k,l)-T4(j,i,l,k)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
          }
  }
  {
    Tensor4<double, 2, 3, 1, 4> t4;
    t4(j, k, i, l) = t4_1(i, j, k, l);
    for(int i1 = 0; i1 < 2; ++i1)
      for(int i2 = 0; i2 < 3; ++i2)
        for(int i3 = 0; i3 < 4; ++i3)
          {
            test_for_zero(t4_1(0, i1, i2, i3) - t4(i1, i2, 0, i3),
                          "T4(i,j,k,l)=T4(j,k,i,l)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
            test_for_zero((t4_1(i, j, k, l) + t4(j, k, i, l))(0, i1, i2, i3)
                            - 2 * t4_1(0, i1, i2, i3),
                          "T4(i,j,k,l)+T4(j,k,i,l)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
            test_for_zero((t4_1(i, j, k, l) - t4(j, k, i, l))(0, i1, i2, i3),
                          "T4(i,j,k,l)-T4(j,k,i,l)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
          }
  }
  {
    Tensor4<double, 2, 3, 4, 1> t4;
    t4(j, k, l, i) = t4_1(i, j, k, l);
    for(int i1 = 0; i1 < 2; ++i1)
      for(int i2 = 0; i2 < 3; ++i2)
        for(int i3 = 0; i3 < 4; ++i3)
          {
            test_for_zero(t4_1(0, i1, i2, i3) - t4(i1, i2, i3, 0),
                          "T4(i,j,k,l)=T4(j,k,l,i)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
            test_for_zero((t4_1(i, j, k, l) + t4(j, k, l, i))(0, i1, i2, i3)
                            - 2 * t4_1(0, i1, i2, i3),
                          "T4(i,j,k,l)+T4(j,k,l,i)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
            test_for_zero((t4_1(i, j, k, l) - t4(j, k, l, i))(0, i1, i2, i3),
                          "T4(i,j,k,l)-T4(j,k,l,i)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
          }
  }
  {
    Tensor4<double, 2, 4, 1, 3> t4;
    t4(j, l, i, k) = t4_1(i, j, k, l);
    for(int i1 = 0; i1 < 2; ++i1)
      for(int i2 = 0; i2 < 3; ++i2)
        for(int i3 = 0; i3 < 4; ++i3)
          {
            test_for_zero(t4_1(0, i1, i2, i3) - t4(i1, i3, 0, i2),
                          "T4(i,j,k,l)=T4(j,l,i,k)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
            test_for_zero((t4_1(i, j, k, l) + t4(j, l, i, k))(0, i1, i2, i3)
                            - 2 * t4_1(0, i1, i2, i3),
                          "T4(i,j,k,l)+T4(j,l,i,k)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
            test_for_zero((t4_1(i, j, k, l) - t4(j, l, i, k))(0, i1, i2, i3),
                          "T4(i,j,k,l)-T4(j,l,i,k)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
          }
  }
  {
    Tensor4<double, 2, 4, 3, 1> t4;
    t4(j, l, k, i) = t4_1(i, j, k, l);
    for(int i1 = 0; i1 < 2; ++i1)
      for(int i2 = 0; i2 < 3; ++i2)
        for(int i3 = 0; i3 < 4; ++i3)
          {
            test_for_zero(t4_1(0, i1, i2, i3) - t4(i1, i3, i2, 0),
                          "T4(i,j,k,l)=T4(j,l,k,i)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
            test_for_zero((t4_1(i, j, k, l) + t4(j, l, k, i))(0, i1, i2, i3)
                            - 2 * t4_1(0, i1, i2, i3),
                          "T4(i,j,k,l)+T4(j,l,k,i)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
            test_for_zero((t4_1(i, j, k, l) - t4(j, l, k, i))(0, i1, i2, i3),
                          "T4(i,j,k,l)-T4(j,l,k,i)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
          }
  }

  // (k,...)
  {
    Tensor4<double, 3, 2, 1, 4> t4;
    t4(k, j, i, l) = t4_1(i, j, k, l);
    for(int i1 = 0; i1 < 2; ++i1)
      for(int i2 = 0; i2 < 3; ++i2)
        for(int i3 = 0; i3 < 4; ++i3)
          {
            test_for_zero(t4_1(0, i1, i2, i3) - t4(i2, i1, 0, i3),
                          "T4(k,j,i,l)=T4(i,j,k,l)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
            test_for_zero((t4_1(i, j, k, l) + t4(k, j, i, l))(0, i1, i2, i3)
                            - 2 * t4_1(0, i1, i2, i3),
                          "T4(k,j,i,l)+T4(i,j,k,l)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
            test_for_zero((t4_1(i, j, k, l) - t4(k, j, i, l))(0, i1, i2, i3),
                          "T4(k,j,i,l)-T4(i,j,k,l)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
          }
  }
  {
    Tensor4<double, 3, 2, 4, 1> t4;
    t4(k, j, l, i) = t4_1(i, j, k, l);
    for(int i1 = 0; i1 < 2; ++i1)
      for(int i2 = 0; i2 < 3; ++i2)
        for(int i3 = 0; i3 < 4; ++i3)
          {
            test_for_zero(t4_1(0, i1, i2, i3) - t4(i2, i1, i3, 0),
                          "T4(i,j,k,l)=T4(k,j,l,i)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
            test_for_zero((t4_1(i, j, k, l) + t4(k, j, l, i))(0, i1, i2, i3)
                            - 2 * t4_1(0, i1, i2, i3),
                          "T4(i,j,k,l)+T4(k,j,l,i)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
            test_for_zero((t4_1(i, j, k, l) - t4(k, j, l, i))(0, i1, i2, i3),
                          "T4(i,j,k,l)-T4(k,j,l,i)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
          }
  }
  {
    Tensor4<double, 3, 1, 2, 4> t4;
    t4(k, i, j, l) = t4_1(i, j, k, l);
    for(int i1 = 0; i1 < 2; ++i1)
      for(int i2 = 0; i2 < 3; ++i2)
        for(int i3 = 0; i3 < 4; ++i3)
          {
            test_for_zero(t4_1(0, i1, i2, i3) - t4(i2, 0, i1, i3),
                          "T4(i,j,k,l)=T4(k,i,j,l)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
            test_for_zero((t4_1(i, j, k, l) + t4(k, i, j, l))(0, i1, i2, i3)
                            - 2 * t4_1(0, i1, i2, i3),
                          "T4(i,j,k,l)+T4(k,i,j,l)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
            test_for_zero((t4_1(i, j, k, l) - t4(k, i, j, l))(0, i1, i2, i3),
                          "T4(i,j,k,l)-T4(k,i,j,l)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
          }
  }
  {
    Tensor4<double, 3, 1, 4, 2> t4;
    t4(k, i, l, j) = t4_1(i, j, k, l);
    for(int i1 = 0; i1 < 2; ++i1)
      for(int i2 = 0; i2 < 3; ++i2)
        for(int i3 = 0; i3 < 4; ++i3)
          {
            test_for_zero(t4_1(0, i1, i2, i3) - t4(i2, 0, i3, i1),
                          "T4(i,j,k,l)=T4(k,i,l,j)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
            test_for_zero((t4_1(i, j, k, l) + t4(k, i, l, j))(0, i1, i2, i3)
                            - 2 * t4_1(0, i1, i2, i3),
                          "T4(i,j,k,l)+T4(k,i,l,j)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
            test_for_zero((t4_1(i, j, k, l) - t4(k, i, l, j))(0, i1, i2, i3),
                          "T4(i,j,k,l)-T4(k,i,l,j)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
          }
  }
  {
    Tensor4<double, 3, 4, 2, 1> t4;
    t4(k, l, j, i) = t4_1(i, j, k, l);
    for(int i1 = 0; i1 < 2; ++i1)
      for(int i2 = 0; i2 < 3; ++i2)
        for(int i3 = 0; i3 < 4; ++i3)
          {
            test_for_zero(t4_1(0, i1, i2, i3) - t4(i2, i3, i1, 0),
                          "T4(i,j,k,l)=T4(k,l,j,i)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
            test_for_zero((t4_1(i, j, k, l) + t4(k, l, j, i))(0, i1, i2, i3)
                            - 2 * t4_1(0, i1, i2, i3),
                          "T4(i,j,k,l)+T4(k,l,j,i)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
            test_for_zero((t4_1(i, j, k, l) - t4(k, l, j, i))(0, i1, i2, i3),
                          "T4(i,j,k,l)-T4(k,l,j,i)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
          }
  }
  {
    Tensor4<double, 3, 4, 1, 2> t4;
    t4(k, l, i, j) = t4_1(i, j, k, l);
    for(int i1 = 0; i1 < 2; ++i1)
      for(int i2 = 0; i2 < 3; ++i2)
        for(int i3 = 0; i3 < 4; ++i3)
          {
            test_for_zero(t4_1(0, i1, i2, i3) - t4(i2, i3, 0, i1),
                          "T4(i,j,k,l)=T4(k,l,i,j)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
            test_for_zero((t4_1(i, j, k, l) + t4(k, l, i, j))(0, i1, i2, i3)
                            - 2 * t4_1(0, i1, i2, i3),
                          "T4(i,j,k,l)+T4(k,l,i,j)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
            test_for_zero((t4_1(i, j, k, l) - t4(k, l, i, j))(0, i1, i2, i3),
                          "T4(i,j,k,l)-T4(k,l,i,j)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
          }
  }

  // (l,...)
  {
    Tensor4<double, 4, 2, 3, 1> t4;
    t4(l, j, k, i) = t4_1(i, j, k, l);
    for(int i1 = 0; i1 < 2; ++i1)
      for(int i2 = 0; i2 < 3; ++i2)
        for(int i3 = 0; i3 < 4; ++i3)
          {
            test_for_zero(t4_1(0, i1, i2, i3) - t4(i3, i1, i2, 0),
                          "T4(l,j,k,i)=T4(i,j,k,l)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
            test_for_zero((t4_1(i, j, k, l) + t4(l, j, k, i))(0, i1, i2, i3)
                            - 2 * t4_1(0, i1, i2, i3),
                          "T4(l,j,k,i)+T4(i,j,k,l)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
            test_for_zero((t4_1(i, j, k, l) - t4(l, j, k, i))(0, i1, i2, i3),
                          "T4(l,j,k,i)-T4(i,j,k,l)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
          }
  }
  {
    Tensor4<double, 4, 2, 1, 3> t4;
    t4(l, j, i, k) = t4_1(i, j, k, l);
    for(int i1 = 0; i1 < 2; ++i1)
      for(int i2 = 0; i2 < 3; ++i2)
        for(int i3 = 0; i3 < 4; ++i3)
          {
            test_for_zero(t4_1(0, i1, i2, i3) - t4(i3, i1, 0, i2),
                          "T4(i,j,k,l)=T4(l,j,i,k)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
            test_for_zero((t4_1(i, j, k, l) + t4(l, j, i, k))(0, i1, i2, i3)
                            - 2 * t4_1(0, i1, i2, i3),
                          "T4(i,j,k,l)+T4(l,j,i,k)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
            test_for_zero((t4_1(i, j, k, l) - t4(l, j, i, k))(0, i1, i2, i3),
                          "T4(i,j,k,l)-T4(l,j,i,k)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
          }
  }
  {
    Tensor4<double, 4, 3, 2, 1> t4;
    t4(l, k, j, i) = t4_1(i, j, k, l);
    for(int i1 = 0; i1 < 2; ++i1)
      for(int i2 = 0; i2 < 3; ++i2)
        for(int i3 = 0; i3 < 4; ++i3)
          {
            test_for_zero(t4_1(0, i1, i2, i3) - t4(i3, i2, i1, 0),
                          "T4(i,j,k,l)=T4(l,k,j,i)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
            test_for_zero((t4_1(i, j, k, l) + t4(l, k, j, i))(0, i1, i2, i3)
                            - 2 * t4_1(0, i1, i2, i3),
                          "T4(i,j,k,l)+T4(l,k,j,i)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
            test_for_zero((t4_1(i, j, k, l) - t4(l, k, j, i))(0, i1, i2, i3),
                          "T4(i,j,k,l)-T4(l,k,j,i)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
          }
  }
  {
    Tensor4<double, 4, 3, 1, 2> t4;
    t4(l, k, i, j) = t4_1(i, j, k, l);
    for(int i1 = 0; i1 < 2; ++i1)
      for(int i2 = 0; i2 < 3; ++i2)
        for(int i3 = 0; i3 < 4; ++i3)
          {
            test_for_zero(t4_1(0, i1, i2, i3) - t4(i3, i2, 0, i1),
                          "T4(i,j,k,l)=T4(l,k,i,j)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
            test_for_zero((t4_1(i, j, k, l) + t4(l, k, i, j))(0, i1, i2, i3)
                            - 2 * t4_1(0, i1, i2, i3),
                          "T4(i,j,k,l)+T4(l,k,i,j)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
            test_for_zero((t4_1(i, j, k, l) - t4(l, k, i, j))(0, i1, i2, i3),
                          "T4(i,j,k,l)-T4(l,k,i,j)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
          }
  }
  {
    Tensor4<double, 4, 1, 2, 3> t4;
    t4(l, i, j, k) = t4_1(i, j, k, l);
    for(int i1 = 0; i1 < 2; ++i1)
      for(int i2 = 0; i2 < 3; ++i2)
        for(int i3 = 0; i3 < 4; ++i3)
          {
            test_for_zero(t4_1(0, i1, i2, i3) - t4(i3, 0, i1, i2),
                          "T4(i,j,k,l)=T4(l,i,j,k)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
            test_for_zero((t4_1(i, j, k, l) + t4(l, i, j, k))(0, i1, i2, i3)
                            - 2 * t4_1(0, i1, i2, i3),
                          "T4(i,j,k,l)+T4(l,i,j,k)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
            test_for_zero((t4_1(i, j, k, l) - t4(l, i, j, k))(0, i1, i2, i3),
                          "T4(i,j,k,l)-T4(l,i,j,k)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
          }
  }
  {
    Tensor4<double, 4, 1, 3, 2> t4;
    t4(l, i, k, j) = t4_1(i, j, k, l);
    for(int i1 = 0; i1 < 2; ++i1)
      for(int i2 = 0; i2 < 3; ++i2)
        for(int i3 = 0; i3 < 4; ++i3)
          {
            test_for_zero(t4_1(0, i1, i2, i3) - t4(i3, 0, i2, i1),
                          "T4(i,j,k,l)=T4(l,i,k,j)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
            test_for_zero((t4_1(i, j, k, l) + t4(l, i, k, j))(0, i1, i2, i3)
                            - 2 * t4_1(0, i1, i2, i3),
                          "T4(i,j,k,l)+T4(l,i,k,j)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
            test_for_zero((t4_1(i, j, k, l) - t4(l, i, k, j))(0, i1, i2, i3),
                          "T4(i,j,k,l)-T4(l,i,k,j)(0," + std::to_string(i1)
                            + "," + std::to_string(i2) + ","
                            + std::to_string(i3) + ")");
          }
  }
}
