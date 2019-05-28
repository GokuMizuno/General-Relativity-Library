#include "../../src/FTensor.hpp"
#include "test_for_zero.hpp"
#include <iostream>
using namespace FTensor;
using namespace std;

void test_T4R()
{
  Index<'i', 3> i;
  Index<'j', 3> j;
  Index<'k', 3> k;
  Index<'l', 3> l;

  Number<0> N0;
  Number<1> N1;
  Number<2> N2;

  Riemann<double, 3> t4R_1, t4R_2, t4R_3;

  Tensor2_symmetric<double, 3> delta_3(3., 0., 0., 3., 0., 3.),
    delta_5(5., 0., 0., 5., 0., 5.), delta_2(2., 0., 0., 2., 0., 2.),
    delta_7(7., 0., 0., 7., 0., 7.);

  t4R_1(i, j, k, l)
    = (delta_3(i, k) * delta_5(j, l) && delta_3(i, l) * delta_5(k, j));

  test_for_zero(
    t4R_1(0, 0, 0, 0)
      - (delta_3(0, 0) * delta_5(0, 0) - delta_3(0, 0) * delta_5(0, 0)),
    "T4ddg && T4ddg (0,0,0,0)");
  test_for_zero(
    t4R_1(0, 0, 0, 1)
      - (delta_3(0, 1) * delta_5(0, 0) - delta_3(0, 1) * delta_5(0, 0)),
    "T4ddg && T4ddg (0,0,0,1)");
  test_for_zero(
    t4R_1(0, 0, 0, 2)
      - (delta_3(0, 2) * delta_5(0, 0) - delta_3(0, 2) * delta_5(0, 0)),
    "T4ddg && T4ddg (0,0,0,2)");
  test_for_zero(
    t4R_1(0, 0, 1, 0)
      - (delta_3(0, 0) * delta_5(0, 1) - delta_3(0, 0) * delta_5(1, 0)),
    "T4ddg && T4ddg (0,0,1,0)");
  test_for_zero(
    t4R_1(0, 0, 1, 1)
      - (delta_3(0, 1) * delta_5(0, 1) - delta_3(0, 1) * delta_5(1, 0)),
    "T4ddg && T4ddg (0,0,1,1)");
  test_for_zero(
    t4R_1(0, 0, 1, 2)
      - (delta_3(0, 2) * delta_5(0, 1) - delta_3(0, 2) * delta_5(1, 0)),
    "T4ddg && T4ddg (0,0,1,2)");
  test_for_zero(
    t4R_1(0, 0, 2, 0)
      - (delta_3(0, 0) * delta_5(0, 2) - delta_3(0, 0) * delta_5(2, 0)),
    "T4ddg && T4ddg (0,0,2,0)");
  test_for_zero(
    t4R_1(0, 0, 2, 1)
      - (delta_3(0, 1) * delta_5(0, 2) - delta_3(0, 1) * delta_5(2, 0)),
    "T4ddg && T4ddg (0,0,2,1)");
  test_for_zero(
    t4R_1(0, 0, 2, 2)
      - (delta_3(0, 2) * delta_5(0, 2) - delta_3(0, 2) * delta_5(2, 0)),
    "T4ddg && T4ddg (0,0,2,2)");
  test_for_zero(
    t4R_1(0, 1, 0, 0)
      - (delta_3(0, 0) * delta_5(1, 0) - delta_3(0, 0) * delta_5(0, 1)),
    "T4ddg && T4ddg (0,1,0,0)");
  test_for_zero(
    t4R_1(0, 1, 0, 1)
      - (delta_3(0, 0) * delta_5(1, 1) - delta_3(0, 1) * delta_5(0, 1)),
    "T4ddg && T4ddg (0,1,0,1)");
  test_for_zero(
    t4R_1(0, 1, 0, 2)
      - (delta_3(0, 2) * delta_5(1, 0) - delta_3(0, 2) * delta_5(0, 1)),
    "T4ddg && T4ddg (0,1,0,2)");
  test_for_zero(
    t4R_1(0, 1, 1, 0)
      - (delta_3(0, 0) * delta_5(1, 1) - delta_3(0, 0) * delta_5(1, 1)),
    "T4ddg && T4ddg (0,1,1,0)");
  test_for_zero(
    t4R_1(0, 1, 1, 1)
      - (delta_3(0, 1) * delta_5(1, 1) - delta_3(0, 1) * delta_5(1, 1)),
    "T4ddg && T4ddg (0,1,1,1)");
  test_for_zero(
    t4R_1(0, 1, 1, 2)
      - (delta_3(0, 2) * delta_5(1, 1) - delta_3(0, 2) * delta_5(1, 1)),
    "T4ddg && T4ddg (0,1,1,2)");
  test_for_zero(
    t4R_1(0, 1, 2, 0)
      - (delta_3(0, 0) * delta_5(1, 2) - delta_3(0, 0) * delta_5(2, 1)),
    "T4ddg && T4ddg (0,1,2,0)");
  test_for_zero(
    t4R_1(0, 1, 2, 1)
      - (delta_3(0, 1) * delta_5(1, 2) - delta_3(0, 1) * delta_5(2, 1)),
    "T4ddg && T4ddg (0,1,2,1)");
  test_for_zero(
    t4R_1(0, 1, 2, 2)
      - (delta_3(0, 2) * delta_5(1, 2) - delta_3(0, 2) * delta_5(2, 1)),
    "T4ddg && T4ddg (0,1,2,2)");
  test_for_zero(
    t4R_1(0, 2, 0, 0)
      - (delta_3(0, 0) * delta_5(2, 0) - delta_3(0, 0) * delta_5(0, 2)),
    "T4ddg && T4ddg (0,2,0,0)");
  test_for_zero(
    t4R_1(0, 2, 0, 1)
      - (delta_3(0, 1) * delta_5(2, 0) - delta_3(0, 1) * delta_5(0, 2)),
    "T4ddg && T4ddg (0,2,0,1)");
  test_for_zero(
    t4R_1(0, 2, 0, 2)
      - (delta_3(0, 0) * delta_5(2, 2) - delta_3(0, 2) * delta_5(0, 2)),
    "T4ddg && T4ddg (0,2,0,2)");
  test_for_zero(
    t4R_1(0, 2, 1, 0)
      - (delta_3(0, 0) * delta_5(2, 1) - delta_3(0, 0) * delta_5(1, 2)),
    "T4ddg && T4ddg (0,2,1,0)");
  test_for_zero(
    t4R_1(0, 2, 1, 1)
      - (delta_3(0, 1) * delta_5(2, 1) - delta_3(0, 1) * delta_5(1, 2)),
    "T4ddg && T4ddg (0,2,1,1)");
  test_for_zero(
    t4R_1(0, 2, 1, 2)
      - (delta_3(0, 2) * delta_5(2, 1) - delta_3(0, 2) * delta_5(1, 2)),
    "T4ddg && T4ddg (0,2,1,2)");
  test_for_zero(
    t4R_1(0, 2, 2, 0)
      - (delta_3(0, 0) * delta_5(2, 2) - delta_3(0, 0) * delta_5(2, 2)),
    "T4ddg && T4ddg (0,2,2,0)");
  test_for_zero(
    t4R_1(0, 2, 2, 1)
      - (delta_3(0, 1) * delta_5(2, 2) - delta_3(0, 1) * delta_5(2, 2)),
    "T4ddg && T4ddg (0,2,2,1)");
  test_for_zero(
    t4R_1(0, 2, 2, 2)
      - (delta_3(0, 2) * delta_5(2, 2) - delta_3(0, 2) * delta_5(2, 2)),
    "T4ddg && T4ddg (0,2,2,2)");
  test_for_zero(
    t4R_1(1, 0, 0, 0)
      - (delta_3(1, 0) * delta_5(0, 0) - delta_3(1, 0) * delta_5(0, 0)),
    "T4ddg && T4ddg (1,0,0,0)");
  test_for_zero(
    t4R_1(1, 0, 0, 1)
      - (delta_3(1, 1) * delta_5(0, 0) - delta_3(1, 1) * delta_5(0, 0)),
    "T4ddg && T4ddg (1,0,0,1)");
  test_for_zero(
    t4R_1(1, 0, 0, 2)
      - (delta_3(1, 2) * delta_5(0, 0) - delta_3(1, 2) * delta_5(0, 0)),
    "T4ddg && T4ddg (1,0,0,2)");
  test_for_zero(
    t4R_1(1, 0, 1, 0)
      - (delta_3(1, 0) * delta_5(0, 1) - delta_3(1, 0) * delta_5(1, 0)),
    "T4ddg && T4ddg (1,0,1,0)");
  test_for_zero(
    t4R_1(1, 0, 1, 1)
      - (delta_3(1, 1) * delta_5(0, 1) - delta_3(1, 1) * delta_5(1, 0)),
    "T4ddg && T4ddg (1,0,1,1)");
  test_for_zero(
    t4R_1(1, 0, 1, 2)
      - (delta_3(1, 2) * delta_5(0, 1) - delta_3(1, 2) * delta_5(1, 0)),
    "T4ddg && T4ddg (1,0,1,2)");
  test_for_zero(
    t4R_1(1, 0, 2, 0)
      - (delta_3(1, 0) * delta_5(0, 2) - delta_3(1, 0) * delta_5(2, 0)),
    "T4ddg && T4ddg (1,0,2,0)");
  test_for_zero(
    t4R_1(1, 0, 2, 1)
      - (delta_3(1, 1) * delta_5(0, 2) - delta_3(1, 1) * delta_5(2, 0)),
    "T4ddg && T4ddg (1,0,2,1)");
  test_for_zero(
    t4R_1(1, 0, 2, 2)
      - (delta_3(1, 2) * delta_5(0, 2) - delta_3(1, 2) * delta_5(2, 0)),
    "T4ddg && T4ddg (1,0,2,2)");
  test_for_zero(
    t4R_1(1, 1, 0, 0)
      - (delta_3(1, 0) * delta_5(1, 0) - delta_3(1, 0) * delta_5(0, 1)),
    "T4ddg && T4ddg (1,1,0,0)");
  test_for_zero(
    t4R_1(1, 1, 0, 1)
      - (delta_3(1, 1) * delta_5(1, 0) - delta_3(1, 1) * delta_5(0, 1)),
    "T4ddg && T4ddg (1,1,0,1)");
  test_for_zero(
    t4R_1(1, 1, 0, 2)
      - (delta_3(1, 2) * delta_5(1, 0) - delta_3(1, 2) * delta_5(0, 1)),
    "T4ddg && T4ddg (1,1,0,2)");
  test_for_zero(
    t4R_1(1, 1, 1, 0)
      - (delta_3(1, 0) * delta_5(1, 1) - delta_3(1, 0) * delta_5(1, 1)),
    "T4ddg && T4ddg (1,1,1,0)");
  test_for_zero(
    t4R_1(1, 1, 1, 1)
      - (delta_3(1, 1) * delta_5(1, 1) - delta_3(1, 1) * delta_5(1, 1)),
    "T4ddg && T4ddg (1,1,1,1)");
  test_for_zero(
    t4R_1(1, 1, 1, 2)
      - (delta_3(1, 2) * delta_5(1, 1) - delta_3(1, 2) * delta_5(1, 1)),
    "T4ddg && T4ddg (1,1,1,2)");
  test_for_zero(
    t4R_1(1, 1, 2, 0)
      - (delta_3(1, 0) * delta_5(1, 2) - delta_3(1, 0) * delta_5(2, 1)),
    "T4ddg && T4ddg (1,1,2,0)");
  test_for_zero(
    t4R_1(1, 1, 2, 1)
      - (delta_3(1, 1) * delta_5(1, 2) - delta_3(1, 1) * delta_5(2, 1)),
    "T4ddg && T4ddg (1,1,2,1)");
  test_for_zero(
    t4R_1(1, 1, 2, 2)
      - (delta_3(1, 2) * delta_5(1, 2) - delta_3(1, 2) * delta_5(2, 1)),
    "T4ddg && T4ddg (1,1,2,2)");
  test_for_zero(
    t4R_1(1, 2, 0, 0)
      - (delta_3(1, 0) * delta_5(2, 0) - delta_3(1, 0) * delta_5(0, 2)),
    "T4ddg && T4ddg (1,2,0,0)");
  test_for_zero(
    t4R_1(1, 2, 0, 1)
      - (delta_3(1, 1) * delta_5(2, 0) - delta_3(1, 1) * delta_5(0, 2)),
    "T4ddg && T4ddg (1,2,0,1)");
  test_for_zero(
    t4R_1(1, 2, 0, 2)
      - (delta_3(1, 2) * delta_5(2, 0) - delta_3(1, 2) * delta_5(0, 2)),
    "T4ddg && T4ddg (1,2,0,2)");
  test_for_zero(
    t4R_1(1, 2, 1, 0)
      - (delta_3(1, 0) * delta_5(2, 1) - delta_3(1, 0) * delta_5(1, 2)),
    "T4ddg && T4ddg (1,2,1,0)");
  test_for_zero(
    t4R_1(1, 2, 1, 1)
      - (delta_3(1, 1) * delta_5(2, 1) - delta_3(1, 1) * delta_5(1, 2)),
    "T4ddg && T4ddg (1,2,1,1)");
  test_for_zero(
    t4R_1(1, 2, 1, 2)
      - (delta_3(1, 1) * delta_5(2, 2) - delta_3(1, 2) * delta_5(1, 2)),
    "T4ddg && T4ddg (1,2,1,2)");
  test_for_zero(
    t4R_1(1, 2, 2, 0)
      - (delta_3(1, 0) * delta_5(2, 2) - delta_3(1, 0) * delta_5(2, 2)),
    "T4ddg && T4ddg (1,2,2,0)");
  test_for_zero(
    t4R_1(1, 2, 2, 1)
      - (delta_3(1, 1) * delta_5(2, 2) - delta_3(1, 1) * delta_5(2, 2)),
    "T4ddg && T4ddg (1,2,2,1)");
  test_for_zero(
    t4R_1(1, 2, 2, 2)
      - (delta_3(1, 2) * delta_5(2, 2) - delta_3(1, 2) * delta_5(2, 2)),
    "T4ddg && T4ddg (1,2,2,2)");
  test_for_zero(
    t4R_1(2, 0, 0, 0)
      - (delta_3(2, 0) * delta_5(0, 0) - delta_3(2, 0) * delta_5(0, 0)),
    "T4ddg && T4ddg (2,0,0,0)");
  test_for_zero(
    t4R_1(2, 0, 0, 1)
      - (delta_3(2, 1) * delta_5(0, 0) - delta_3(2, 1) * delta_5(0, 0)),
    "T4ddg && T4ddg (2,0,0,1)");
  test_for_zero(
    t4R_1(2, 0, 0, 2)
      - (delta_3(2, 2) * delta_5(0, 0) - delta_3(2, 2) * delta_5(0, 0)),
    "T4ddg && T4ddg (2,0,0,2)");
  test_for_zero(
    t4R_1(2, 0, 1, 0)
      - (delta_3(2, 0) * delta_5(0, 1) - delta_3(2, 0) * delta_5(1, 0)),
    "T4ddg && T4ddg (2,0,1,0)");
  test_for_zero(
    t4R_1(2, 0, 1, 1)
      - (delta_3(2, 1) * delta_5(0, 1) - delta_3(2, 1) * delta_5(1, 0)),
    "T4ddg && T4ddg (2,0,1,1)");
  test_for_zero(
    t4R_1(2, 0, 1, 2)
      - (delta_3(2, 2) * delta_5(0, 1) - delta_3(2, 2) * delta_5(1, 0)),
    "T4ddg && T4ddg (2,0,1,2)");
  test_for_zero(
    t4R_1(2, 0, 2, 0)
      - (delta_3(2, 0) * delta_5(0, 2) - delta_3(2, 0) * delta_5(2, 0)),
    "T4ddg && T4ddg (2,0,2,0)");
  test_for_zero(
    t4R_1(2, 0, 2, 1)
      - (delta_3(2, 1) * delta_5(0, 2) - delta_3(2, 1) * delta_5(2, 0)),
    "T4ddg && T4ddg (2,0,2,1)");
  test_for_zero(
    t4R_1(2, 0, 2, 2)
      - (delta_3(2, 2) * delta_5(0, 2) - delta_3(2, 2) * delta_5(2, 0)),
    "T4ddg && T4ddg (2,0,2,2)");
  test_for_zero(
    t4R_1(2, 1, 0, 0)
      - (delta_3(2, 0) * delta_5(1, 0) - delta_3(2, 0) * delta_5(0, 1)),
    "T4ddg && T4ddg (2,1,0,0)");
  test_for_zero(
    t4R_1(2, 1, 0, 1)
      - (delta_3(2, 1) * delta_5(1, 0) - delta_3(2, 1) * delta_5(0, 1)),
    "T4ddg && T4ddg (2,1,0,1)");
  test_for_zero(
    t4R_1(2, 1, 0, 2)
      - (delta_3(2, 2) * delta_5(1, 0) - delta_3(2, 2) * delta_5(0, 1)),
    "T4ddg && T4ddg (2,1,0,2)");
  test_for_zero(
    t4R_1(2, 1, 1, 0)
      - (delta_3(2, 0) * delta_5(1, 1) - delta_3(2, 0) * delta_5(1, 1)),
    "T4ddg && T4ddg (2,1,1,0)");
  test_for_zero(
    t4R_1(2, 1, 1, 1)
      - (delta_3(2, 1) * delta_5(1, 1) - delta_3(2, 1) * delta_5(1, 1)),
    "T4ddg && T4ddg (2,1,1,1)");
  test_for_zero(
    t4R_1(2, 1, 1, 2)
      - (delta_3(2, 2) * delta_5(1, 1) - delta_3(2, 2) * delta_5(1, 1)),
    "T4ddg && T4ddg (2,1,1,2)");
  test_for_zero(
    t4R_1(2, 1, 2, 0)
      - (delta_3(2, 0) * delta_5(1, 2) - delta_3(2, 0) * delta_5(2, 1)),
    "T4ddg && T4ddg (2,1,2,0)");
  test_for_zero(
    t4R_1(2, 1, 2, 1)
      - (delta_3(2, 1) * delta_5(1, 2) - delta_3(2, 1) * delta_5(2, 1)),
    "T4ddg && T4ddg (2,1,2,1)");
  test_for_zero(
    t4R_1(2, 1, 2, 2)
      - (delta_3(2, 2) * delta_5(1, 2) - delta_3(2, 2) * delta_5(2, 1)),
    "T4ddg && T4ddg (2,1,2,2)");
  test_for_zero(
    t4R_1(2, 2, 0, 0)
      - (delta_3(2, 0) * delta_5(2, 0) - delta_3(2, 0) * delta_5(0, 2)),
    "T4ddg && T4ddg (2,2,0,0)");
  test_for_zero(
    t4R_1(2, 2, 0, 1)
      - (delta_3(2, 1) * delta_5(2, 0) - delta_3(2, 1) * delta_5(0, 2)),
    "T4ddg && T4ddg (2,2,0,1)");
  test_for_zero(
    t4R_1(2, 2, 0, 2)
      - (delta_3(2, 2) * delta_5(2, 0) - delta_3(2, 2) * delta_5(0, 2)),
    "T4ddg && T4ddg (2,2,0,2)");
  test_for_zero(
    t4R_1(2, 2, 1, 0)
      - (delta_3(2, 0) * delta_5(2, 1) - delta_3(2, 0) * delta_5(1, 2)),
    "T4ddg && T4ddg (2,2,1,0)");
  test_for_zero(
    t4R_1(2, 2, 1, 1)
      - (delta_3(2, 1) * delta_5(2, 1) - delta_3(2, 1) * delta_5(1, 2)),
    "T4ddg && T4ddg (2,2,1,1)");
  test_for_zero(
    t4R_1(2, 2, 1, 2)
      - (delta_3(2, 2) * delta_5(2, 1) - delta_3(2, 2) * delta_5(1, 2)),
    "T4ddg && T4ddg (2,2,1,2)");
  test_for_zero(
    t4R_1(2, 2, 2, 0)
      - (delta_3(2, 0) * delta_5(2, 2) - delta_3(2, 0) * delta_5(2, 2)),
    "T4ddg && T4ddg (2,2,2,0)");
  test_for_zero(
    t4R_1(2, 2, 2, 1)
      - (delta_3(2, 1) * delta_5(2, 2) - delta_3(2, 1) * delta_5(2, 2)),
    "T4ddg && T4ddg (2,2,2,1)");
  test_for_zero(
    t4R_1(2, 2, 2, 2)
      - (delta_3(2, 2) * delta_5(2, 2) - delta_3(2, 2) * delta_5(2, 2)),
    "T4ddg && T4ddg (2,2,2,2)");

  t4R_2(i, j, k, l)
    = (delta_2(i, k) * delta_7(j, l) && delta_2(i, l) * delta_7(k, j));

  t4R_3(i, j, k, l) = t4R_1(i, j, k, l) + t4R_2(i, j, k, l);
  test_for_zero(t4R_3(0, 0, 0, 0) - (t4R_1(0, 0, 0, 0) + t4R_2(0, 0, 0, 0)),
                "T4R + T4R (0,0,0,0)");
  test_for_zero(t4R_3(0, 0, 0, 1) - (t4R_1(0, 0, 0, 1) + t4R_2(0, 0, 0, 1)),
                "T4R + T4R (0,0,0,1)");
  test_for_zero(t4R_3(0, 0, 0, 2) - (t4R_1(0, 0, 0, 2) + t4R_2(0, 0, 0, 2)),
                "T4R + T4R (0,0,0,2)");
  test_for_zero(t4R_3(0, 0, 1, 0) - (t4R_1(0, 0, 1, 0) + t4R_2(0, 0, 1, 0)),
                "T4R + T4R (0,0,1,0)");
  test_for_zero(t4R_3(0, 0, 1, 1) - (t4R_1(0, 0, 1, 1) + t4R_2(0, 0, 1, 1)),
                "T4R + T4R (0,0,1,1)");
  test_for_zero(t4R_3(0, 0, 1, 2) - (t4R_1(0, 0, 1, 2) + t4R_2(0, 0, 1, 2)),
                "T4R + T4R (0,0,1,2)");
  test_for_zero(t4R_3(0, 0, 2, 0) - (t4R_1(0, 0, 2, 0) + t4R_2(0, 0, 2, 0)),
                "T4R + T4R (0,0,2,0)");
  test_for_zero(t4R_3(0, 0, 2, 1) - (t4R_1(0, 0, 2, 1) + t4R_2(0, 0, 2, 1)),
                "T4R + T4R (0,0,2,1)");
  test_for_zero(t4R_3(0, 0, 2, 2) - (t4R_1(0, 0, 2, 2) + t4R_2(0, 0, 2, 2)),
                "T4R + T4R (0,0,2,2)");
  test_for_zero(t4R_3(0, 1, 0, 0) - (t4R_1(0, 1, 0, 0) + t4R_2(0, 1, 0, 0)),
                "T4R + T4R (0,1,0,0)");
  test_for_zero(t4R_3(0, 1, 0, 1) - (t4R_1(0, 1, 0, 1) + t4R_2(0, 1, 0, 1)),
                "T4R + T4R (0,1,0,1)");
  test_for_zero(t4R_3(0, 1, 0, 2) - (t4R_1(0, 1, 0, 2) + t4R_2(0, 1, 0, 2)),
                "T4R + T4R (0,1,0,2)");
  test_for_zero(t4R_3(0, 1, 1, 0) - (t4R_1(0, 1, 1, 0) + t4R_2(0, 1, 1, 0)),
                "T4R + T4R (0,1,1,0)");
  test_for_zero(t4R_3(0, 1, 1, 1) - (t4R_1(0, 1, 1, 1) + t4R_2(0, 1, 1, 1)),
                "T4R + T4R (0,1,1,1)");
  test_for_zero(t4R_3(0, 1, 1, 2) - (t4R_1(0, 1, 1, 2) + t4R_2(0, 1, 1, 2)),
                "T4R + T4R (0,1,1,2)");
  test_for_zero(t4R_3(0, 1, 2, 0) - (t4R_1(0, 1, 2, 0) + t4R_2(0, 1, 2, 0)),
                "T4R + T4R (0,1,2,0)");
  test_for_zero(t4R_3(0, 1, 2, 1) - (t4R_1(0, 1, 2, 1) + t4R_2(0, 1, 2, 1)),
                "T4R + T4R (0,1,2,1)");
  test_for_zero(t4R_3(0, 1, 2, 2) - (t4R_1(0, 1, 2, 2) + t4R_2(0, 1, 2, 2)),
                "T4R + T4R (0,1,2,2)");
  test_for_zero(t4R_3(0, 2, 0, 0) - (t4R_1(0, 2, 0, 0) + t4R_2(0, 2, 0, 0)),
                "T4R + T4R (0,2,0,0)");
  test_for_zero(t4R_3(0, 2, 0, 1) - (t4R_1(0, 2, 0, 1) + t4R_2(0, 2, 0, 1)),
                "T4R + T4R (0,2,0,1)");
  test_for_zero(t4R_3(0, 2, 0, 2) - (t4R_1(0, 2, 0, 2) + t4R_2(0, 2, 0, 2)),
                "T4R + T4R (0,2,0,2)");
  test_for_zero(t4R_3(0, 2, 1, 0) - (t4R_1(0, 2, 1, 0) + t4R_2(0, 2, 1, 0)),
                "T4R + T4R (0,2,1,0)");
  test_for_zero(t4R_3(0, 2, 1, 1) - (t4R_1(0, 2, 1, 1) + t4R_2(0, 2, 1, 1)),
                "T4R + T4R (0,2,1,1)");
  test_for_zero(t4R_3(0, 2, 1, 2) - (t4R_1(0, 2, 1, 2) + t4R_2(0, 2, 1, 2)),
                "T4R + T4R (0,2,1,2)");
  test_for_zero(t4R_3(0, 2, 2, 0) - (t4R_1(0, 2, 2, 0) + t4R_2(0, 2, 2, 0)),
                "T4R + T4R (0,2,2,0)");
  test_for_zero(t4R_3(0, 2, 2, 1) - (t4R_1(0, 2, 2, 1) + t4R_2(0, 2, 2, 1)),
                "T4R + T4R (0,2,2,1)");
  test_for_zero(t4R_3(0, 2, 2, 2) - (t4R_1(0, 2, 2, 2) + t4R_2(0, 2, 2, 2)),
                "T4R + T4R (0,2,2,2)");
  test_for_zero(t4R_3(1, 0, 0, 0) - (t4R_1(1, 0, 0, 0) + t4R_2(1, 0, 0, 0)),
                "T4R + T4R (1,0,0,0)");
  test_for_zero(t4R_3(1, 0, 0, 1) - (t4R_1(1, 0, 0, 1) + t4R_2(1, 0, 0, 1)),
                "T4R + T4R (1,0,0,1)");
  test_for_zero(t4R_3(1, 0, 0, 2) - (t4R_1(1, 0, 0, 2) + t4R_2(1, 0, 0, 2)),
                "T4R + T4R (1,0,0,2)");
  test_for_zero(t4R_3(1, 0, 1, 0) - (t4R_1(1, 0, 1, 0) + t4R_2(1, 0, 1, 0)),
                "T4R + T4R (1,0,1,0)");
  test_for_zero(t4R_3(1, 0, 1, 1) - (t4R_1(1, 0, 1, 1) + t4R_2(1, 0, 1, 1)),
                "T4R + T4R (1,0,1,1)");
  test_for_zero(t4R_3(1, 0, 1, 2) - (t4R_1(1, 0, 1, 2) + t4R_2(1, 0, 1, 2)),
                "T4R + T4R (1,0,1,2)");
  test_for_zero(t4R_3(1, 0, 2, 0) - (t4R_1(1, 0, 2, 0) + t4R_2(1, 0, 2, 0)),
                "T4R + T4R (1,0,2,0)");
  test_for_zero(t4R_3(1, 0, 2, 1) - (t4R_1(1, 0, 2, 1) + t4R_2(1, 0, 2, 1)),
                "T4R + T4R (1,0,2,1)");
  test_for_zero(t4R_3(1, 0, 2, 2) - (t4R_1(1, 0, 2, 2) + t4R_2(1, 0, 2, 2)),
                "T4R + T4R (1,0,2,2)");
  test_for_zero(t4R_3(1, 1, 0, 0) - (t4R_1(1, 1, 0, 0) + t4R_2(1, 1, 0, 0)),
                "T4R + T4R (1,1,0,0)");
  test_for_zero(t4R_3(1, 1, 0, 1) - (t4R_1(1, 1, 0, 1) + t4R_2(1, 1, 0, 1)),
                "T4R + T4R (1,1,0,1)");
  test_for_zero(t4R_3(1, 1, 0, 2) - (t4R_1(1, 1, 0, 2) + t4R_2(1, 1, 0, 2)),
                "T4R + T4R (1,1,0,2)");
  test_for_zero(t4R_3(1, 1, 1, 0) - (t4R_1(1, 1, 1, 0) + t4R_2(1, 1, 1, 0)),
                "T4R + T4R (1,1,1,0)");
  test_for_zero(t4R_3(1, 1, 1, 1) - (t4R_1(1, 1, 1, 1) + t4R_2(1, 1, 1, 1)),
                "T4R + T4R (1,1,1,1)");
  test_for_zero(t4R_3(1, 1, 1, 2) - (t4R_1(1, 1, 1, 2) + t4R_2(1, 1, 1, 2)),
                "T4R + T4R (1,1,1,2)");
  test_for_zero(t4R_3(1, 1, 2, 0) - (t4R_1(1, 1, 2, 0) + t4R_2(1, 1, 2, 0)),
                "T4R + T4R (1,1,2,0)");
  test_for_zero(t4R_3(1, 1, 2, 1) - (t4R_1(1, 1, 2, 1) + t4R_2(1, 1, 2, 1)),
                "T4R + T4R (1,1,2,1)");
  test_for_zero(t4R_3(1, 1, 2, 2) - (t4R_1(1, 1, 2, 2) + t4R_2(1, 1, 2, 2)),
                "T4R + T4R (1,1,2,2)");
  test_for_zero(t4R_3(1, 2, 0, 0) - (t4R_1(1, 2, 0, 0) + t4R_2(1, 2, 0, 0)),
                "T4R + T4R (1,2,0,0)");
  test_for_zero(t4R_3(1, 2, 0, 1) - (t4R_1(1, 2, 0, 1) + t4R_2(1, 2, 0, 1)),
                "T4R + T4R (1,2,0,1)");
  test_for_zero(t4R_3(1, 2, 0, 2) - (t4R_1(1, 2, 0, 2) + t4R_2(1, 2, 0, 2)),
                "T4R + T4R (1,2,0,2)");
  test_for_zero(t4R_3(1, 2, 1, 0) - (t4R_1(1, 2, 1, 0) + t4R_2(1, 2, 1, 0)),
                "T4R + T4R (1,2,1,0)");
  test_for_zero(t4R_3(1, 2, 1, 1) - (t4R_1(1, 2, 1, 1) + t4R_2(1, 2, 1, 1)),
                "T4R + T4R (1,2,1,1)");
  test_for_zero(t4R_3(1, 2, 1, 2) - (t4R_1(1, 2, 1, 2) + t4R_2(1, 2, 1, 2)),
                "T4R + T4R (1,2,1,2)");
  test_for_zero(t4R_3(1, 2, 2, 0) - (t4R_1(1, 2, 2, 0) + t4R_2(1, 2, 2, 0)),
                "T4R + T4R (1,2,2,0)");
  test_for_zero(t4R_3(1, 2, 2, 1) - (t4R_1(1, 2, 2, 1) + t4R_2(1, 2, 2, 1)),
                "T4R + T4R (1,2,2,1)");
  test_for_zero(t4R_3(1, 2, 2, 2) - (t4R_1(1, 2, 2, 2) + t4R_2(1, 2, 2, 2)),
                "T4R + T4R (1,2,2,2)");
  test_for_zero(t4R_3(2, 0, 0, 0) - (t4R_1(2, 0, 0, 0) + t4R_2(2, 0, 0, 0)),
                "T4R + T4R (2,0,0,0)");
  test_for_zero(t4R_3(2, 0, 0, 1) - (t4R_1(2, 0, 0, 1) + t4R_2(2, 0, 0, 1)),
                "T4R + T4R (2,0,0,1)");
  test_for_zero(t4R_3(2, 0, 0, 2) - (t4R_1(2, 0, 0, 2) + t4R_2(2, 0, 0, 2)),
                "T4R + T4R (2,0,0,2)");
  test_for_zero(t4R_3(2, 0, 1, 0) - (t4R_1(2, 0, 1, 0) + t4R_2(2, 0, 1, 0)),
                "T4R + T4R (2,0,1,0)");
  test_for_zero(t4R_3(2, 0, 1, 1) - (t4R_1(2, 0, 1, 1) + t4R_2(2, 0, 1, 1)),
                "T4R + T4R (2,0,1,1)");
  test_for_zero(t4R_3(2, 0, 1, 2) - (t4R_1(2, 0, 1, 2) + t4R_2(2, 0, 1, 2)),
                "T4R + T4R (2,0,1,2)");
  test_for_zero(t4R_3(2, 0, 2, 0) - (t4R_1(2, 0, 2, 0) + t4R_2(2, 0, 2, 0)),
                "T4R + T4R (2,0,2,0)");
  test_for_zero(t4R_3(2, 0, 2, 1) - (t4R_1(2, 0, 2, 1) + t4R_2(2, 0, 2, 1)),
                "T4R + T4R (2,0,2,1)");
  test_for_zero(t4R_3(2, 0, 2, 2) - (t4R_1(2, 0, 2, 2) + t4R_2(2, 0, 2, 2)),
                "T4R + T4R (2,0,2,2)");
  test_for_zero(t4R_3(2, 1, 0, 0) - (t4R_1(2, 1, 0, 0) + t4R_2(2, 1, 0, 0)),
                "T4R + T4R (2,1,0,0)");
  test_for_zero(t4R_3(2, 1, 0, 1) - (t4R_1(2, 1, 0, 1) + t4R_2(2, 1, 0, 1)),
                "T4R + T4R (2,1,0,1)");
  test_for_zero(t4R_3(2, 1, 0, 2) - (t4R_1(2, 1, 0, 2) + t4R_2(2, 1, 0, 2)),
                "T4R + T4R (2,1,0,2)");
  test_for_zero(t4R_3(2, 1, 1, 0) - (t4R_1(2, 1, 1, 0) + t4R_2(2, 1, 1, 0)),
                "T4R + T4R (2,1,1,0)");
  test_for_zero(t4R_3(2, 1, 1, 1) - (t4R_1(2, 1, 1, 1) + t4R_2(2, 1, 1, 1)),
                "T4R + T4R (2,1,1,1)");
  test_for_zero(t4R_3(2, 1, 1, 2) - (t4R_1(2, 1, 1, 2) + t4R_2(2, 1, 1, 2)),
                "T4R + T4R (2,1,1,2)");
  test_for_zero(t4R_3(2, 1, 2, 0) - (t4R_1(2, 1, 2, 0) + t4R_2(2, 1, 2, 0)),
                "T4R + T4R (2,1,2,0)");
  test_for_zero(t4R_3(2, 1, 2, 1) - (t4R_1(2, 1, 2, 1) + t4R_2(2, 1, 2, 1)),
                "T4R + T4R (2,1,2,1)");
  test_for_zero(t4R_3(2, 1, 2, 2) - (t4R_1(2, 1, 2, 2) + t4R_2(2, 1, 2, 2)),
                "T4R + T4R (2,1,2,2)");
  test_for_zero(t4R_3(2, 2, 0, 0) - (t4R_1(2, 2, 0, 0) + t4R_2(2, 2, 0, 0)),
                "T4R + T4R (2,2,0,0)");
  test_for_zero(t4R_3(2, 2, 0, 1) - (t4R_1(2, 2, 0, 1) + t4R_2(2, 2, 0, 1)),
                "T4R + T4R (2,2,0,1)");
  test_for_zero(t4R_3(2, 2, 0, 2) - (t4R_1(2, 2, 0, 2) + t4R_2(2, 2, 0, 2)),
                "T4R + T4R (2,2,0,2)");
  test_for_zero(t4R_3(2, 2, 1, 0) - (t4R_1(2, 2, 1, 0) + t4R_2(2, 2, 1, 0)),
                "T4R + T4R (2,2,1,0)");
  test_for_zero(t4R_3(2, 2, 1, 1) - (t4R_1(2, 2, 1, 1) + t4R_2(2, 2, 1, 1)),
                "T4R + T4R (2,2,1,1)");
  test_for_zero(t4R_3(2, 2, 1, 2) - (t4R_1(2, 2, 1, 2) + t4R_2(2, 2, 1, 2)),
                "T4R + T4R (2,2,1,2)");
  test_for_zero(t4R_3(2, 2, 2, 0) - (t4R_1(2, 2, 2, 0) + t4R_2(2, 2, 2, 0)),
                "T4R + T4R (2,2,2,0)");
  test_for_zero(t4R_3(2, 2, 2, 1) - (t4R_1(2, 2, 2, 1) + t4R_2(2, 2, 2, 1)),
                "T4R + T4R (2,2,2,1)");
  test_for_zero(t4R_3(2, 2, 2, 2) - (t4R_1(2, 2, 2, 2) + t4R_2(2, 2, 2, 2)),
                "T4R + T4R (2,2,2,2)");

  t4R_3(i, j, k, l) = t4R_1(i, j, k, l) - t4R_2(i, j, k, l);
  test_for_zero(t4R_3(0, 0, 0, 0) - (t4R_1(0, 0, 0, 0) - t4R_2(0, 0, 0, 0)),
                "T4R - T4R (0,0,0,0)");
  test_for_zero(t4R_3(0, 0, 0, 1) - (t4R_1(0, 0, 0, 1) - t4R_2(0, 0, 0, 1)),
                "T4R - T4R (0,0,0,1)");
  test_for_zero(t4R_3(0, 0, 0, 2) - (t4R_1(0, 0, 0, 2) - t4R_2(0, 0, 0, 2)),
                "T4R - T4R (0,0,0,2)");
  test_for_zero(t4R_3(0, 0, 1, 0) - (t4R_1(0, 0, 1, 0) - t4R_2(0, 0, 1, 0)),
                "T4R - T4R (0,0,1,0)");
  test_for_zero(t4R_3(0, 0, 1, 1) - (t4R_1(0, 0, 1, 1) - t4R_2(0, 0, 1, 1)),
                "T4R - T4R (0,0,1,1)");
  test_for_zero(t4R_3(0, 0, 1, 2) - (t4R_1(0, 0, 1, 2) - t4R_2(0, 0, 1, 2)),
                "T4R - T4R (0,0,1,2)");
  test_for_zero(t4R_3(0, 0, 2, 0) - (t4R_1(0, 0, 2, 0) - t4R_2(0, 0, 2, 0)),
                "T4R - T4R (0,0,2,0)");
  test_for_zero(t4R_3(0, 0, 2, 1) - (t4R_1(0, 0, 2, 1) - t4R_2(0, 0, 2, 1)),
                "T4R - T4R (0,0,2,1)");
  test_for_zero(t4R_3(0, 0, 2, 2) - (t4R_1(0, 0, 2, 2) - t4R_2(0, 0, 2, 2)),
                "T4R - T4R (0,0,2,2)");
  test_for_zero(t4R_3(0, 1, 0, 0) - (t4R_1(0, 1, 0, 0) - t4R_2(0, 1, 0, 0)),
                "T4R - T4R (0,1,0,0)");
  test_for_zero(t4R_3(0, 1, 0, 1) - (t4R_1(0, 1, 0, 1) - t4R_2(0, 1, 0, 1)),
                "T4R - T4R (0,1,0,1)");
  test_for_zero(t4R_3(0, 1, 0, 2) - (t4R_1(0, 1, 0, 2) - t4R_2(0, 1, 0, 2)),
                "T4R - T4R (0,1,0,2)");
  test_for_zero(t4R_3(0, 1, 1, 0) - (t4R_1(0, 1, 1, 0) - t4R_2(0, 1, 1, 0)),
                "T4R - T4R (0,1,1,0)");
  test_for_zero(t4R_3(0, 1, 1, 1) - (t4R_1(0, 1, 1, 1) - t4R_2(0, 1, 1, 1)),
                "T4R - T4R (0,1,1,1)");
  test_for_zero(t4R_3(0, 1, 1, 2) - (t4R_1(0, 1, 1, 2) - t4R_2(0, 1, 1, 2)),
                "T4R - T4R (0,1,1,2)");
  test_for_zero(t4R_3(0, 1, 2, 0) - (t4R_1(0, 1, 2, 0) - t4R_2(0, 1, 2, 0)),
                "T4R - T4R (0,1,2,0)");
  test_for_zero(t4R_3(0, 1, 2, 1) - (t4R_1(0, 1, 2, 1) - t4R_2(0, 1, 2, 1)),
                "T4R - T4R (0,1,2,1)");
  test_for_zero(t4R_3(0, 1, 2, 2) - (t4R_1(0, 1, 2, 2) - t4R_2(0, 1, 2, 2)),
                "T4R - T4R (0,1,2,2)");
  test_for_zero(t4R_3(0, 2, 0, 0) - (t4R_1(0, 2, 0, 0) - t4R_2(0, 2, 0, 0)),
                "T4R - T4R (0,2,0,0)");
  test_for_zero(t4R_3(0, 2, 0, 1) - (t4R_1(0, 2, 0, 1) - t4R_2(0, 2, 0, 1)),
                "T4R - T4R (0,2,0,1)");
  test_for_zero(t4R_3(0, 2, 0, 2) - (t4R_1(0, 2, 0, 2) - t4R_2(0, 2, 0, 2)),
                "T4R - T4R (0,2,0,2)");
  test_for_zero(t4R_3(0, 2, 1, 0) - (t4R_1(0, 2, 1, 0) - t4R_2(0, 2, 1, 0)),
                "T4R - T4R (0,2,1,0)");
  test_for_zero(t4R_3(0, 2, 1, 1) - (t4R_1(0, 2, 1, 1) - t4R_2(0, 2, 1, 1)),
                "T4R - T4R (0,2,1,1)");
  test_for_zero(t4R_3(0, 2, 1, 2) - (t4R_1(0, 2, 1, 2) - t4R_2(0, 2, 1, 2)),
                "T4R - T4R (0,2,1,2)");
  test_for_zero(t4R_3(0, 2, 2, 0) - (t4R_1(0, 2, 2, 0) - t4R_2(0, 2, 2, 0)),
                "T4R - T4R (0,2,2,0)");
  test_for_zero(t4R_3(0, 2, 2, 1) - (t4R_1(0, 2, 2, 1) - t4R_2(0, 2, 2, 1)),
                "T4R - T4R (0,2,2,1)");
  test_for_zero(t4R_3(0, 2, 2, 2) - (t4R_1(0, 2, 2, 2) - t4R_2(0, 2, 2, 2)),
                "T4R - T4R (0,2,2,2)");
  test_for_zero(t4R_3(1, 0, 0, 0) - (t4R_1(1, 0, 0, 0) - t4R_2(1, 0, 0, 0)),
                "T4R - T4R (1,0,0,0)");
  test_for_zero(t4R_3(1, 0, 0, 1) - (t4R_1(1, 0, 0, 1) - t4R_2(1, 0, 0, 1)),
                "T4R - T4R (1,0,0,1)");
  test_for_zero(t4R_3(1, 0, 0, 2) - (t4R_1(1, 0, 0, 2) - t4R_2(1, 0, 0, 2)),
                "T4R - T4R (1,0,0,2)");
  test_for_zero(t4R_3(1, 0, 1, 0) - (t4R_1(1, 0, 1, 0) - t4R_2(1, 0, 1, 0)),
                "T4R - T4R (1,0,1,0)");
  test_for_zero(t4R_3(1, 0, 1, 1) - (t4R_1(1, 0, 1, 1) - t4R_2(1, 0, 1, 1)),
                "T4R - T4R (1,0,1,1)");
  test_for_zero(t4R_3(1, 0, 1, 2) - (t4R_1(1, 0, 1, 2) - t4R_2(1, 0, 1, 2)),
                "T4R - T4R (1,0,1,2)");
  test_for_zero(t4R_3(1, 0, 2, 0) - (t4R_1(1, 0, 2, 0) - t4R_2(1, 0, 2, 0)),
                "T4R - T4R (1,0,2,0)");
  test_for_zero(t4R_3(1, 0, 2, 1) - (t4R_1(1, 0, 2, 1) - t4R_2(1, 0, 2, 1)),
                "T4R - T4R (1,0,2,1)");
  test_for_zero(t4R_3(1, 0, 2, 2) - (t4R_1(1, 0, 2, 2) - t4R_2(1, 0, 2, 2)),
                "T4R - T4R (1,0,2,2)");
  test_for_zero(t4R_3(1, 1, 0, 0) - (t4R_1(1, 1, 0, 0) - t4R_2(1, 1, 0, 0)),
                "T4R - T4R (1,1,0,0)");
  test_for_zero(t4R_3(1, 1, 0, 1) - (t4R_1(1, 1, 0, 1) - t4R_2(1, 1, 0, 1)),
                "T4R - T4R (1,1,0,1)");
  test_for_zero(t4R_3(1, 1, 0, 2) - (t4R_1(1, 1, 0, 2) - t4R_2(1, 1, 0, 2)),
                "T4R - T4R (1,1,0,2)");
  test_for_zero(t4R_3(1, 1, 1, 0) - (t4R_1(1, 1, 1, 0) - t4R_2(1, 1, 1, 0)),
                "T4R - T4R (1,1,1,0)");
  test_for_zero(t4R_3(1, 1, 1, 1) - (t4R_1(1, 1, 1, 1) - t4R_2(1, 1, 1, 1)),
                "T4R - T4R (1,1,1,1)");
  test_for_zero(t4R_3(1, 1, 1, 2) - (t4R_1(1, 1, 1, 2) - t4R_2(1, 1, 1, 2)),
                "T4R - T4R (1,1,1,2)");
  test_for_zero(t4R_3(1, 1, 2, 0) - (t4R_1(1, 1, 2, 0) - t4R_2(1, 1, 2, 0)),
                "T4R - T4R (1,1,2,0)");
  test_for_zero(t4R_3(1, 1, 2, 1) - (t4R_1(1, 1, 2, 1) - t4R_2(1, 1, 2, 1)),
                "T4R - T4R (1,1,2,1)");
  test_for_zero(t4R_3(1, 1, 2, 2) - (t4R_1(1, 1, 2, 2) - t4R_2(1, 1, 2, 2)),
                "T4R - T4R (1,1,2,2)");
  test_for_zero(t4R_3(1, 2, 0, 0) - (t4R_1(1, 2, 0, 0) - t4R_2(1, 2, 0, 0)),
                "T4R - T4R (1,2,0,0)");
  test_for_zero(t4R_3(1, 2, 0, 1) - (t4R_1(1, 2, 0, 1) - t4R_2(1, 2, 0, 1)),
                "T4R - T4R (1,2,0,1)");
  test_for_zero(t4R_3(1, 2, 0, 2) - (t4R_1(1, 2, 0, 2) - t4R_2(1, 2, 0, 2)),
                "T4R - T4R (1,2,0,2)");
  test_for_zero(t4R_3(1, 2, 1, 0) - (t4R_1(1, 2, 1, 0) - t4R_2(1, 2, 1, 0)),
                "T4R - T4R (1,2,1,0)");
  test_for_zero(t4R_3(1, 2, 1, 1) - (t4R_1(1, 2, 1, 1) - t4R_2(1, 2, 1, 1)),
                "T4R - T4R (1,2,1,1)");
  test_for_zero(t4R_3(1, 2, 1, 2) - (t4R_1(1, 2, 1, 2) - t4R_2(1, 2, 1, 2)),
                "T4R - T4R (1,2,1,2)");
  test_for_zero(t4R_3(1, 2, 2, 0) - (t4R_1(1, 2, 2, 0) - t4R_2(1, 2, 2, 0)),
                "T4R - T4R (1,2,2,0)");
  test_for_zero(t4R_3(1, 2, 2, 1) - (t4R_1(1, 2, 2, 1) - t4R_2(1, 2, 2, 1)),
                "T4R - T4R (1,2,2,1)");
  test_for_zero(t4R_3(1, 2, 2, 2) - (t4R_1(1, 2, 2, 2) - t4R_2(1, 2, 2, 2)),
                "T4R - T4R (1,2,2,2)");
  test_for_zero(t4R_3(2, 0, 0, 0) - (t4R_1(2, 0, 0, 0) - t4R_2(2, 0, 0, 0)),
                "T4R - T4R (2,0,0,0)");
  test_for_zero(t4R_3(2, 0, 0, 1) - (t4R_1(2, 0, 0, 1) - t4R_2(2, 0, 0, 1)),
                "T4R - T4R (2,0,0,1)");
  test_for_zero(t4R_3(2, 0, 0, 2) - (t4R_1(2, 0, 0, 2) - t4R_2(2, 0, 0, 2)),
                "T4R - T4R (2,0,0,2)");
  test_for_zero(t4R_3(2, 0, 1, 0) - (t4R_1(2, 0, 1, 0) - t4R_2(2, 0, 1, 0)),
                "T4R - T4R (2,0,1,0)");
  test_for_zero(t4R_3(2, 0, 1, 1) - (t4R_1(2, 0, 1, 1) - t4R_2(2, 0, 1, 1)),
                "T4R - T4R (2,0,1,1)");
  test_for_zero(t4R_3(2, 0, 1, 2) - (t4R_1(2, 0, 1, 2) - t4R_2(2, 0, 1, 2)),
                "T4R - T4R (2,0,1,2)");
  test_for_zero(t4R_3(2, 0, 2, 0) - (t4R_1(2, 0, 2, 0) - t4R_2(2, 0, 2, 0)),
                "T4R - T4R (2,0,2,0)");
  test_for_zero(t4R_3(2, 0, 2, 1) - (t4R_1(2, 0, 2, 1) - t4R_2(2, 0, 2, 1)),
                "T4R - T4R (2,0,2,1)");
  test_for_zero(t4R_3(2, 0, 2, 2) - (t4R_1(2, 0, 2, 2) - t4R_2(2, 0, 2, 2)),
                "T4R - T4R (2,0,2,2)");
  test_for_zero(t4R_3(2, 1, 0, 0) - (t4R_1(2, 1, 0, 0) - t4R_2(2, 1, 0, 0)),
                "T4R - T4R (2,1,0,0)");
  test_for_zero(t4R_3(2, 1, 0, 1) - (t4R_1(2, 1, 0, 1) - t4R_2(2, 1, 0, 1)),
                "T4R - T4R (2,1,0,1)");
  test_for_zero(t4R_3(2, 1, 0, 2) - (t4R_1(2, 1, 0, 2) - t4R_2(2, 1, 0, 2)),
                "T4R - T4R (2,1,0,2)");
  test_for_zero(t4R_3(2, 1, 1, 0) - (t4R_1(2, 1, 1, 0) - t4R_2(2, 1, 1, 0)),
                "T4R - T4R (2,1,1,0)");
  test_for_zero(t4R_3(2, 1, 1, 1) - (t4R_1(2, 1, 1, 1) - t4R_2(2, 1, 1, 1)),
                "T4R - T4R (2,1,1,1)");
  test_for_zero(t4R_3(2, 1, 1, 2) - (t4R_1(2, 1, 1, 2) - t4R_2(2, 1, 1, 2)),
                "T4R - T4R (2,1,1,2)");
  test_for_zero(t4R_3(2, 1, 2, 0) - (t4R_1(2, 1, 2, 0) - t4R_2(2, 1, 2, 0)),
                "T4R - T4R (2,1,2,0)");
  test_for_zero(t4R_3(2, 1, 2, 1) - (t4R_1(2, 1, 2, 1) - t4R_2(2, 1, 2, 1)),
                "T4R - T4R (2,1,2,1)");
  test_for_zero(t4R_3(2, 1, 2, 2) - (t4R_1(2, 1, 2, 2) - t4R_2(2, 1, 2, 2)),
                "T4R - T4R (2,1,2,2)");
  test_for_zero(t4R_3(2, 2, 0, 0) - (t4R_1(2, 2, 0, 0) - t4R_2(2, 2, 0, 0)),
                "T4R - T4R (2,2,0,0)");
  test_for_zero(t4R_3(2, 2, 0, 1) - (t4R_1(2, 2, 0, 1) - t4R_2(2, 2, 0, 1)),
                "T4R - T4R (2,2,0,1)");
  test_for_zero(t4R_3(2, 2, 0, 2) - (t4R_1(2, 2, 0, 2) - t4R_2(2, 2, 0, 2)),
                "T4R - T4R (2,2,0,2)");
  test_for_zero(t4R_3(2, 2, 1, 0) - (t4R_1(2, 2, 1, 0) - t4R_2(2, 2, 1, 0)),
                "T4R - T4R (2,2,1,0)");
  test_for_zero(t4R_3(2, 2, 1, 1) - (t4R_1(2, 2, 1, 1) - t4R_2(2, 2, 1, 1)),
                "T4R - T4R (2,2,1,1)");
  test_for_zero(t4R_3(2, 2, 1, 2) - (t4R_1(2, 2, 1, 2) - t4R_2(2, 2, 1, 2)),
                "T4R - T4R (2,2,1,2)");
  test_for_zero(t4R_3(2, 2, 2, 0) - (t4R_1(2, 2, 2, 0) - t4R_2(2, 2, 2, 0)),
                "T4R - T4R (2,2,2,0)");
  test_for_zero(t4R_3(2, 2, 2, 1) - (t4R_1(2, 2, 2, 1) - t4R_2(2, 2, 2, 1)),
                "T4R - T4R (2,2,2,1)");
  test_for_zero(t4R_3(2, 2, 2, 2) - (t4R_1(2, 2, 2, 2) - t4R_2(2, 2, 2, 2)),
                "T4R - T4R (2,2,2,2)");

  //   t3as_1(i,j,k)=t4R_1(i,j,k,l)*t1_2(l);
  //   t3as_1(i,j,k)=t1_2(l)*t4R_1(i,j,k,l);
  //   t3as_1(i,j,k)=t4R_1(i,j,l,k)*t1_2(l);
  //   t3as_1(i,j,k)=t1_2(l)*t4R_1(i,j,l,k);
  //   t3as_1(i,j,k)=t4R_1(i,l,j,k)*t1_2(l);
  //   t3as_1(i,j,k)=t1_2(l)*t4R_1(i,l,j,k);
  //   t3as_1(i,j,k)=t4R_1(l,i,j,k)*t1_2(l);
  //   t3as_1(i,j,k)=t1_2(l)*t4R_1(l,i,j,k);

  //   cout << '\n';

  //   test_for_zero(t4R_1(i,j,k,l)*t4ddg_2(i,j,k,l)
  //       ); test_for_zero(t4ddg_2(i,j,k,l)*t4R_1(i,j,k,l)
  //       ); test_for_zero(t4R_1(i,j,k,l)*t4ddg_2(i,k,j,l)
  //       ); test_for_zero(t4ddg_2(i,k,j,l)*t4R_1(i,j,k,l)
  //       ); test_for_zero(t4R_3(i,j,k,l)*t4ddg_2(i,j,k,l)
  //       ); test_for_zero(t4ddg_2(i,j,k,l)*t4R_3(i,j,k,l)
  //       ); test_for_zero(t4R_3(i,j,k,l)*t4ddg_2(i,k,j,l)
  //       ); test_for_zero(t4ddg_2(i,k,j,l)*t4R_3(i,j,k,l));

  //   cout << '\n';

  //   t2s_1(j,l)=t4R_1(i,j,k,l)*t2s_2(i,k);
  //   t2s_1(j,l)=t2s_2(i,k)*t4R_1(i,j,k,l);
}
