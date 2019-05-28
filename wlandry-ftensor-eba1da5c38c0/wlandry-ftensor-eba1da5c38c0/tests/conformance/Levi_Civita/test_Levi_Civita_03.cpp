#include "../../../src/FTensor.hpp"
#include "../test_for_zero.hpp"
#include <iostream>
using namespace FTensor;
using namespace std;

void test_Levi_Civita_03()
{
  Index<'k', 3> k;
  Index<'l', 3> l;
  Index<'m', 3> m;

  Index<'n', 4> n;
  Index<'o', 4> o;
  Index<'p', 4> p;
  Index<'q', 4> q;

  Number<0> N0;
  Number<1> N1;
  Number<2> N2;

  /* Test Levi_Civita Rank 3 */
  test_for_zero(levi_civita(0, 0, m)(0), "levi_civita(0,0,m)(0)");
  test_for_zero(levi_civita(0, 0, m)(1), "levi_civita(0,0,m)(1)");
  test_for_zero(levi_civita(0, 0, m)(2), "levi_civita(0,0,m)(2)");
  test_for_zero(levi_civita(0, 1, m)(0), "levi_civita(0,1,m)(0)");
  test_for_zero(levi_civita(0, 1, m)(1), "levi_civita(0,1,m)(1)");
  test_for_zero(levi_civita(0, 1, m)(2) - 1, "levi_civita(0,1,m)(2)");
  test_for_zero(levi_civita(0, 2, m)(0), "levi_civita(0,2,m)(0)");
  test_for_zero(levi_civita(0, 2, m)(1) + 1, "levi_civita(0,2,m)(1)");
  test_for_zero(levi_civita(0, 2, m)(2), "levi_civita(0,2,m)(2)");
  test_for_zero(levi_civita(1, 0, m)(0), "levi_civita(1,0,m)(0)");
  test_for_zero(levi_civita(1, 0, m)(1), "levi_civita(1,0,m)(1)");
  test_for_zero(levi_civita(1, 0, m)(2) + 1, "levi_civita(1,0,m)(2)");
  test_for_zero(levi_civita(1, 1, m)(0), "levi_civita(1,1,m)(0)");
  test_for_zero(levi_civita(1, 1, m)(1), "levi_civita(1,1,m)(1)");
  test_for_zero(levi_civita(1, 1, m)(2), "levi_civita(1,1,m)(2)");
  test_for_zero(levi_civita(1, 2, m)(0) - 1, "levi_civita(1,2,m)(0)");
  test_for_zero(levi_civita(1, 2, m)(1), "levi_civita(1,2,m)(1)");
  test_for_zero(levi_civita(1, 2, m)(2), "levi_civita(1,2,m)(2)");
  test_for_zero(levi_civita(2, 0, m)(0), "levi_civita(2,0,m)(0)");
  test_for_zero(levi_civita(2, 0, m)(1) - 1, "levi_civita(2,0,m)(1)");
  test_for_zero(levi_civita(2, 0, m)(2), "levi_civita(2,0,m)(2)");
  test_for_zero(levi_civita(2, 1, m)(0) + 1, "levi_civita(2,1,m)(0)");
  test_for_zero(levi_civita(2, 1, m)(1), "levi_civita(2,1,m)(1)");
  test_for_zero(levi_civita(2, 1, m)(2), "levi_civita(2,1,m)(2)");
  test_for_zero(levi_civita(2, 2, m)(0), "levi_civita(2,2,m)(0)");
  test_for_zero(levi_civita(2, 2, m)(1), "levi_civita(2,2,m)(1)");
  test_for_zero(levi_civita(2, 2, m)(2), "levi_civita(2,2,m)(2)");

  test_for_zero(levi_civita(0, l, 0)(0), "levi_civita(0,l,0)(0)");
  test_for_zero(levi_civita(0, l, 0)(1), "levi_civita(0,l,0)(1)");
  test_for_zero(levi_civita(0, l, 0)(2), "levi_civita(0,l,0)(2)");
  test_for_zero(levi_civita(0, l, 1)(0), "levi_civita(0,l,1)(0)");
  test_for_zero(levi_civita(0, l, 1)(1), "levi_civita(0,l,1)(1)");
  test_for_zero(levi_civita(0, l, 1)(2) + 1, "levi_civita(0,l,1)(2)");
  test_for_zero(levi_civita(0, l, 2)(0), "levi_civita(0,l,2)(0)");
  test_for_zero(levi_civita(0, l, 2)(1) - 1, "levi_civita(0,l,2)(1)");
  test_for_zero(levi_civita(0, l, 2)(2), "levi_civita(0,l,2)(2)");
  test_for_zero(levi_civita(1, l, 0)(0), "levi_civita(1,l,0)(0)");
  test_for_zero(levi_civita(1, l, 0)(1), "levi_civita(1,l,0)(1)");
  test_for_zero(levi_civita(1, l, 0)(2) - 1, "levi_civita(1,l,0)(2)");
  test_for_zero(levi_civita(1, l, 1)(0), "levi_civita(1,l,1)(0)");
  test_for_zero(levi_civita(1, l, 1)(1), "levi_civita(1,l,1)(1)");
  test_for_zero(levi_civita(1, l, 1)(2), "levi_civita(1,l,1)(2)");
  test_for_zero(levi_civita(1, l, 2)(0) + 1, "levi_civita(1,l,2)(0)");
  test_for_zero(levi_civita(1, l, 2)(1), "levi_civita(1,l,2)(1)");
  test_for_zero(levi_civita(1, l, 2)(2), "levi_civita(1,l,2)(2)");
  test_for_zero(levi_civita(2, l, 0)(0), "levi_civita(2,l,0)(0)");
  test_for_zero(levi_civita(2, l, 0)(1) + 1, "levi_civita(2,l,0)(1)");
  test_for_zero(levi_civita(2, l, 0)(2), "levi_civita(2,l,0)(2)");
  test_for_zero(levi_civita(2, l, 1)(0) - 1, "levi_civita(2,l,1)(0)");
  test_for_zero(levi_civita(2, l, 1)(1), "levi_civita(2,l,1)(1)");
  test_for_zero(levi_civita(2, l, 1)(2), "levi_civita(2,l,1)(2)");
  test_for_zero(levi_civita(2, l, 2)(0), "levi_civita(2,l,2)(0)");
  test_for_zero(levi_civita(2, l, 2)(1), "levi_civita(2,l,2)(1)");
  test_for_zero(levi_civita(2, l, 2)(2), "levi_civita(2,l,2)(2)");

  test_for_zero(levi_civita(k, 0, 0)(0), "levi_civita(k,0,0)(0)");
  test_for_zero(levi_civita(k, 0, 0)(1), "levi_civita(k,0,0)(1)");
  test_for_zero(levi_civita(k, 0, 0)(2), "levi_civita(k,0,0)(2)");
  test_for_zero(levi_civita(k, 0, 1)(0), "levi_civita(k,0,1)(0)");
  test_for_zero(levi_civita(k, 0, 1)(1), "levi_civita(k,0,1)(1)");
  test_for_zero(levi_civita(k, 0, 1)(2) - 1, "levi_civita(k,0,1)(2)");
  test_for_zero(levi_civita(k, 0, 2)(0), "levi_civita(k,0,2)(0)");
  test_for_zero(levi_civita(k, 0, 2)(1) + 1, "levi_civita(k,0,2)(1)");
  test_for_zero(levi_civita(k, 0, 2)(2), "levi_civita(k,0,2)(2)");
  test_for_zero(levi_civita(k, 1, 0)(0), "levi_civita(k,1,0)(0)");
  test_for_zero(levi_civita(k, 1, 0)(1), "levi_civita(k,1,0)(1)");
  test_for_zero(levi_civita(k, 1, 0)(2) + 1, "levi_civita(k,1,0)(2)");
  test_for_zero(levi_civita(k, 1, 1)(0), "levi_civita(k,1,1)(0)");
  test_for_zero(levi_civita(k, 1, 1)(1), "levi_civita(k,1,1)(1)");
  test_for_zero(levi_civita(k, 1, 1)(2), "levi_civita(k,1,1)(2)");
  test_for_zero(levi_civita(k, 1, 2)(0) - 1, "levi_civita(k,1,2)(0)");
  test_for_zero(levi_civita(k, 1, 2)(1), "levi_civita(k,1,2)(1)");
  test_for_zero(levi_civita(k, 1, 2)(2), "levi_civita(k,1,2)(2)");
  test_for_zero(levi_civita(k, 2, 0)(0), "levi_civita(k,2,0)(0)");
  test_for_zero(levi_civita(k, 2, 0)(1) - 1, "levi_civita(k,2,0)(1)");
  test_for_zero(levi_civita(k, 2, 0)(2), "levi_civita(k,2,0)(2)");
  test_for_zero(levi_civita(k, 2, 1)(0) + 1, "levi_civita(k,2,1)(0)");
  test_for_zero(levi_civita(k, 2, 1)(1), "levi_civita(k,2,1)(1)");
  test_for_zero(levi_civita(k, 2, 1)(2), "levi_civita(k,2,1)(2)");
  test_for_zero(levi_civita(k, 2, 2)(0), "levi_civita(k,2,2)(0)");
  test_for_zero(levi_civita(k, 2, 2)(1), "levi_civita(k,2,2)(1)");
  test_for_zero(levi_civita(k, 2, 2)(2), "levi_civita(k,2,2)(2)");

  /* Test Levi_Civita Rank 4 */
  test_for_zero(levi_civita(0, 0, p, q)(0, 0), "levi_civita(0,0,p,q)(0,0)");
  test_for_zero(levi_civita(0, 0, p, q)(0, 1), "levi_civita(0,0,p,q)(0,1)");
  test_for_zero(levi_civita(0, 0, p, q)(0, 2), "levi_civita(0,0,p,q)(0,2)");
  test_for_zero(levi_civita(0, 0, p, q)(0, 3), "levi_civita(0,0,p,q)(0,3)");
  test_for_zero(levi_civita(0, 0, p, q)(1, 0), "levi_civita(0,0,p,q)(1,0)");
  test_for_zero(levi_civita(0, 0, p, q)(1, 1), "levi_civita(0,0,p,q)(1,1)");
  test_for_zero(levi_civita(0, 0, p, q)(1, 2), "levi_civita(0,0,p,q)(1,2)");
  test_for_zero(levi_civita(0, 0, p, q)(1, 3), "levi_civita(0,0,p,q)(1,3)");
  test_for_zero(levi_civita(0, 0, p, q)(2, 0), "levi_civita(0,0,p,q)(2,0)");
  test_for_zero(levi_civita(0, 0, p, q)(2, 1), "levi_civita(0,0,p,q)(2,1)");
  test_for_zero(levi_civita(0, 0, p, q)(2, 2), "levi_civita(0,0,p,q)(2,2)");
  test_for_zero(levi_civita(0, 0, p, q)(2, 3), "levi_civita(0,0,p,q)(2,3)");
  test_for_zero(levi_civita(0, 0, p, q)(3, 0), "levi_civita(0,0,p,q)(3,0)");
  test_for_zero(levi_civita(0, 0, p, q)(3, 1), "levi_civita(0,0,p,q)(3,1)");
  test_for_zero(levi_civita(0, 0, p, q)(3, 2), "levi_civita(0,0,p,q)(3,2)");
  test_for_zero(levi_civita(0, 0, p, q)(3, 3), "levi_civita(0,0,p,q)(3,3)");

  test_for_zero(levi_civita(0, 1, p, q)(0, 0), "levi_civita(0,1,p,q)(0,0)");
  test_for_zero(levi_civita(0, 1, p, q)(0, 1), "levi_civita(0,1,p,q)(0,1)");
  test_for_zero(levi_civita(0, 1, p, q)(0, 2), "levi_civita(0,1,p,q)(0,2)");
  test_for_zero(levi_civita(0, 1, p, q)(0, 3), "levi_civita(0,1,p,q)(0,3)");
  test_for_zero(levi_civita(0, 1, p, q)(1, 0), "levi_civita(0,1,p,q)(1,0)");
  test_for_zero(levi_civita(0, 1, p, q)(1, 1), "levi_civita(0,1,p,q)(1,1)");
  test_for_zero(levi_civita(0, 1, p, q)(1, 2), "levi_civita(0,1,p,q)(1,2)");
  test_for_zero(levi_civita(0, 1, p, q)(1, 3), "levi_civita(0,1,p,q)(1,3)");
  test_for_zero(levi_civita(0, 1, p, q)(2, 0), "levi_civita(0,1,p,q)(2,0)");
  test_for_zero(levi_civita(0, 1, p, q)(2, 1), "levi_civita(0,1,p,q)(2,1)");
  test_for_zero(levi_civita(0, 1, p, q)(2, 2), "levi_civita(0,1,p,q)(2,2)");
  test_for_zero(levi_civita(0, 1, p, q)(2, 3) - 1,
                "levi_civita(0,1,p,q)(2,3)");
  test_for_zero(levi_civita(0, 1, p, q)(3, 0), "levi_civita(0,1,p,q)(3,0)");
  test_for_zero(levi_civita(0, 1, p, q)(3, 1), "levi_civita(0,1,p,q)(3,1)");
  test_for_zero(levi_civita(0, 1, p, q)(3, 2) + 1,
                "levi_civita(0,1,p,q)(3,2)");
  test_for_zero(levi_civita(0, 1, p, q)(3, 3), "levi_civita(0,1,p,q)(3,3)");

  test_for_zero(levi_civita(0, 2, p, q)(0, 0), "levi_civita(0,2,p,q)(0,0)");
  test_for_zero(levi_civita(0, 2, p, q)(0, 1), "levi_civita(0,2,p,q)(0,1)");
  test_for_zero(levi_civita(0, 2, p, q)(0, 2), "levi_civita(0,2,p,q)(0,2)");
  test_for_zero(levi_civita(0, 2, p, q)(0, 3), "levi_civita(0,2,p,q)(0,3)");
  test_for_zero(levi_civita(0, 2, p, q)(1, 0), "levi_civita(0,2,p,q)(1,0)");
  test_for_zero(levi_civita(0, 2, p, q)(1, 1), "levi_civita(0,2,p,q)(1,1)");
  test_for_zero(levi_civita(0, 2, p, q)(1, 2), "levi_civita(0,2,p,q)(1,2)");
  test_for_zero(levi_civita(0, 2, p, q)(1, 3) + 1,
                "levi_civita(0,2,p,q)(1,3)");
  test_for_zero(levi_civita(0, 2, p, q)(2, 0), "levi_civita(0,2,p,q)(2,0)");
  test_for_zero(levi_civita(0, 2, p, q)(2, 1), "levi_civita(0,2,p,q)(2,1)");
  test_for_zero(levi_civita(0, 2, p, q)(2, 2), "levi_civita(0,2,p,q)(2,2)");
  test_for_zero(levi_civita(0, 2, p, q)(2, 3), "levi_civita(0,2,p,q)(2,3)");
  test_for_zero(levi_civita(0, 2, p, q)(3, 0), "levi_civita(0,2,p,q)(3,0)");
  test_for_zero(levi_civita(0, 2, p, q)(3, 1) - 1,
                "levi_civita(0,2,p,q)(3,1)");
  test_for_zero(levi_civita(0, 2, p, q)(3, 2), "levi_civita(0,2,p,q)(3,2)");
  test_for_zero(levi_civita(0, 2, p, q)(3, 3), "levi_civita(0,2,p,q)(3,3)");

  test_for_zero(levi_civita(0, 3, p, q)(0, 0), "levi_civita(0,3,p,q)(0,0)");
  test_for_zero(levi_civita(0, 3, p, q)(0, 1), "levi_civita(0,3,p,q)(0,1)");
  test_for_zero(levi_civita(0, 3, p, q)(0, 2), "levi_civita(0,3,p,q)(0,2)");
  test_for_zero(levi_civita(0, 3, p, q)(0, 3), "levi_civita(0,3,p,q)(0,3)");
  test_for_zero(levi_civita(0, 3, p, q)(1, 0), "levi_civita(0,3,p,q)(1,0)");
  test_for_zero(levi_civita(0, 3, p, q)(1, 1), "levi_civita(0,3,p,q)(1,1)");
  test_for_zero(levi_civita(0, 3, p, q)(1, 2) - 1,
                "levi_civita(0,3,p,q)(1,2)");
  test_for_zero(levi_civita(0, 3, p, q)(1, 3), "levi_civita(0,3,p,q)(1,3)");
  test_for_zero(levi_civita(0, 3, p, q)(2, 0), "levi_civita(0,3,p,q)(2,0)");
  test_for_zero(levi_civita(0, 3, p, q)(2, 1) + 1,
                "levi_civita(0,3,p,q)(2,1)");
  test_for_zero(levi_civita(0, 3, p, q)(2, 2), "levi_civita(0,3,p,q)(2,2)");
  test_for_zero(levi_civita(0, 3, p, q)(2, 3), "levi_civita(0,3,p,q)(2,3)");
  test_for_zero(levi_civita(0, 3, p, q)(3, 0), "levi_civita(0,3,p,q)(3,0)");
  test_for_zero(levi_civita(0, 3, p, q)(3, 1), "levi_civita(0,3,p,q)(3,1)");
  test_for_zero(levi_civita(0, 3, p, q)(3, 2), "levi_civita(0,3,p,q)(3,2)");
  test_for_zero(levi_civita(0, 3, p, q)(3, 3), "levi_civita(0,3,p,q)(3,3)");

  test_for_zero(levi_civita(1, 0, p, q)(0, 0), "levi_civita(1,0,p,q)(0,0)");
  test_for_zero(levi_civita(1, 0, p, q)(0, 1), "levi_civita(1,0,p,q)(0,1)");
  test_for_zero(levi_civita(1, 0, p, q)(0, 2), "levi_civita(1,0,p,q)(0,2)");
  test_for_zero(levi_civita(1, 0, p, q)(0, 3), "levi_civita(1,0,p,q)(0,3)");
  test_for_zero(levi_civita(1, 0, p, q)(1, 0), "levi_civita(1,0,p,q)(1,0)");
  test_for_zero(levi_civita(1, 0, p, q)(1, 1), "levi_civita(1,0,p,q)(1,1)");
  test_for_zero(levi_civita(1, 0, p, q)(1, 2), "levi_civita(1,0,p,q)(1,2)");
  test_for_zero(levi_civita(1, 0, p, q)(1, 3), "levi_civita(1,0,p,q)(1,3)");
  test_for_zero(levi_civita(1, 0, p, q)(2, 0), "levi_civita(1,0,p,q)(2,0)");
  test_for_zero(levi_civita(1, 0, p, q)(2, 1), "levi_civita(1,0,p,q)(2,1)");
  test_for_zero(levi_civita(1, 0, p, q)(2, 2), "levi_civita(1,0,p,q)(2,2)");
  test_for_zero(levi_civita(1, 0, p, q)(2, 3) + 1,
                "levi_civita(1,0,p,q)(2,3)");
  test_for_zero(levi_civita(1, 0, p, q)(3, 0), "levi_civita(1,0,p,q)(3,0)");
  test_for_zero(levi_civita(1, 0, p, q)(3, 1), "levi_civita(1,0,p,q)(3,1)");
  test_for_zero(levi_civita(1, 0, p, q)(3, 2) - 1,
                "levi_civita(1,0,p,q)(3,2)");
  test_for_zero(levi_civita(1, 0, p, q)(3, 3), "levi_civita(1,0,p,q)(3,3)");

  test_for_zero(levi_civita(1, 1, p, q)(0, 0), "levi_civita(1,1,p,q)(0,0)");
  test_for_zero(levi_civita(1, 1, p, q)(0, 1), "levi_civita(1,1,p,q)(0,1)");
  test_for_zero(levi_civita(1, 1, p, q)(0, 2), "levi_civita(1,1,p,q)(0,2)");
  test_for_zero(levi_civita(1, 1, p, q)(0, 3), "levi_civita(1,1,p,q)(0,3)");
  test_for_zero(levi_civita(1, 1, p, q)(1, 0), "levi_civita(1,1,p,q)(1,0)");
  test_for_zero(levi_civita(1, 1, p, q)(1, 1), "levi_civita(1,1,p,q)(1,1)");
  test_for_zero(levi_civita(1, 1, p, q)(1, 2), "levi_civita(1,1,p,q)(1,2)");
  test_for_zero(levi_civita(1, 1, p, q)(1, 3), "levi_civita(1,1,p,q)(1,3)");
  test_for_zero(levi_civita(1, 1, p, q)(2, 0), "levi_civita(1,1,p,q)(2,0)");
  test_for_zero(levi_civita(1, 1, p, q)(2, 1), "levi_civita(1,1,p,q)(2,1)");
  test_for_zero(levi_civita(1, 1, p, q)(2, 2), "levi_civita(1,1,p,q)(2,2)");
  test_for_zero(levi_civita(1, 1, p, q)(2, 3), "levi_civita(1,1,p,q)(2,3)");
  test_for_zero(levi_civita(1, 1, p, q)(3, 0), "levi_civita(1,1,p,q)(3,0)");
  test_for_zero(levi_civita(1, 1, p, q)(3, 1), "levi_civita(1,1,p,q)(3,1)");
  test_for_zero(levi_civita(1, 1, p, q)(3, 2), "levi_civita(1,1,p,q)(3,2)");
  test_for_zero(levi_civita(1, 1, p, q)(3, 3), "levi_civita(1,1,p,q)(3,3)");

  test_for_zero(levi_civita(1, 2, p, q)(0, 0), "levi_civita(1,2,p,q)(0,0)");
  test_for_zero(levi_civita(1, 2, p, q)(0, 1), "levi_civita(1,2,p,q)(0,1)");
  test_for_zero(levi_civita(1, 2, p, q)(0, 2), "levi_civita(1,2,p,q)(0,2)");
  test_for_zero(levi_civita(1, 2, p, q)(0, 3) - 1,
                "levi_civita(1,2,p,q)(0,3)");
  test_for_zero(levi_civita(1, 2, p, q)(1, 0), "levi_civita(1,2,p,q)(1,0)");
  test_for_zero(levi_civita(1, 2, p, q)(1, 1), "levi_civita(1,2,p,q)(1,1)");
  test_for_zero(levi_civita(1, 2, p, q)(1, 2), "levi_civita(1,2,p,q)(1,2)");
  test_for_zero(levi_civita(1, 2, p, q)(1, 3), "levi_civita(1,2,p,q)(1,3)");
  test_for_zero(levi_civita(1, 2, p, q)(2, 0), "levi_civita(1,2,p,q)(2,0)");
  test_for_zero(levi_civita(1, 2, p, q)(2, 1), "levi_civita(1,2,p,q)(2,1)");
  test_for_zero(levi_civita(1, 2, p, q)(2, 2), "levi_civita(1,2,p,q)(2,2)");
  test_for_zero(levi_civita(1, 2, p, q)(2, 3), "levi_civita(1,2,p,q)(2,3)");
  test_for_zero(levi_civita(1, 2, p, q)(3, 0) + 1,
                "levi_civita(1,2,p,q)(3,0)");
  test_for_zero(levi_civita(1, 2, p, q)(3, 1), "levi_civita(1,2,p,q)(3,1)");
  test_for_zero(levi_civita(1, 2, p, q)(3, 2), "levi_civita(1,2,p,q)(3,2)");
  test_for_zero(levi_civita(1, 2, p, q)(3, 3), "levi_civita(1,2,p,q)(3,3)");

  test_for_zero(levi_civita(1, 3, p, q)(0, 0), "levi_civita(1,3,p,q)(0,0)");
  test_for_zero(levi_civita(1, 3, p, q)(0, 1), "levi_civita(1,3,p,q)(0,1)");
  test_for_zero(levi_civita(1, 3, p, q)(0, 2) + 1,
                "levi_civita(1,3,p,q)(0,2)");
  test_for_zero(levi_civita(1, 3, p, q)(0, 3), "levi_civita(1,3,p,q)(0,3)");
  test_for_zero(levi_civita(1, 3, p, q)(1, 0), "levi_civita(1,3,p,q)(1,0)");
  test_for_zero(levi_civita(1, 3, p, q)(1, 1), "levi_civita(1,3,p,q)(1,1)");
  test_for_zero(levi_civita(1, 3, p, q)(1, 2), "levi_civita(1,3,p,q)(1,2)");
  test_for_zero(levi_civita(1, 3, p, q)(1, 3), "levi_civita(1,3,p,q)(1,3)");
  test_for_zero(levi_civita(1, 3, p, q)(2, 0) - 1,
                "levi_civita(1,3,p,q)(2,0)");
  test_for_zero(levi_civita(1, 3, p, q)(2, 1), "levi_civita(1,3,p,q)(2,1)");
  test_for_zero(levi_civita(1, 3, p, q)(2, 2), "levi_civita(1,3,p,q)(2,2)");
  test_for_zero(levi_civita(1, 3, p, q)(2, 3), "levi_civita(1,3,p,q)(2,3)");
  test_for_zero(levi_civita(1, 3, p, q)(3, 0), "levi_civita(1,3,p,q)(3,0)");
  test_for_zero(levi_civita(1, 3, p, q)(3, 1), "levi_civita(1,3,p,q)(3,1)");
  test_for_zero(levi_civita(1, 3, p, q)(3, 2), "levi_civita(1,3,p,q)(3,2)");
  test_for_zero(levi_civita(1, 3, p, q)(3, 3), "levi_civita(1,3,p,q)(3,3)");

  test_for_zero(levi_civita(2, 0, p, q)(0, 0), "levi_civita(2,0,p,q)(0,0)");
  test_for_zero(levi_civita(2, 0, p, q)(0, 1), "levi_civita(2,0,p,q)(0,1)");
  test_for_zero(levi_civita(2, 0, p, q)(0, 2), "levi_civita(2,0,p,q)(0,2)");
  test_for_zero(levi_civita(2, 0, p, q)(0, 3), "levi_civita(2,0,p,q)(0,3)");
  test_for_zero(levi_civita(2, 0, p, q)(1, 0), "levi_civita(2,0,p,q)(1,0)");
  test_for_zero(levi_civita(2, 0, p, q)(1, 1), "levi_civita(2,0,p,q)(1,1)");
  test_for_zero(levi_civita(2, 0, p, q)(1, 2), "levi_civita(2,0,p,q)(1,2)");
  test_for_zero(levi_civita(2, 0, p, q)(1, 3) - 1,
                "levi_civita(2,0,p,q)(1,3)");
  test_for_zero(levi_civita(2, 0, p, q)(2, 0), "levi_civita(2,0,p,q)(2,0)");
  test_for_zero(levi_civita(2, 0, p, q)(2, 1), "levi_civita(2,0,p,q)(2,1)");
  test_for_zero(levi_civita(2, 0, p, q)(2, 2), "levi_civita(2,0,p,q)(2,2)");
  test_for_zero(levi_civita(2, 0, p, q)(2, 3), "levi_civita(2,0,p,q)(2,3)");
  test_for_zero(levi_civita(2, 0, p, q)(3, 0), "levi_civita(2,0,p,q)(3,0)");
  test_for_zero(levi_civita(2, 0, p, q)(3, 1) + 1,
                "levi_civita(2,0,p,q)(3,1)");
  test_for_zero(levi_civita(2, 0, p, q)(3, 2), "levi_civita(2,0,p,q)(3,2)");
  test_for_zero(levi_civita(2, 0, p, q)(3, 3), "levi_civita(2,0,p,q)(3,3)");

  test_for_zero(levi_civita(2, 1, p, q)(0, 0), "levi_civita(2,1,p,q)(0,0)");
  test_for_zero(levi_civita(2, 1, p, q)(0, 1), "levi_civita(2,1,p,q)(0,1)");
  test_for_zero(levi_civita(2, 1, p, q)(0, 2), "levi_civita(2,1,p,q)(0,2)");
  test_for_zero(levi_civita(2, 1, p, q)(0, 3) + 1,
                "levi_civita(2,1,p,q)(0,3)");
  test_for_zero(levi_civita(2, 1, p, q)(1, 0), "levi_civita(2,1,p,q)(1,0)");
  test_for_zero(levi_civita(2, 1, p, q)(1, 1), "levi_civita(2,1,p,q)(1,1)");
  test_for_zero(levi_civita(2, 1, p, q)(1, 2), "levi_civita(2,1,p,q)(1,2)");
  test_for_zero(levi_civita(2, 1, p, q)(1, 3), "levi_civita(2,1,p,q)(1,3)");
  test_for_zero(levi_civita(2, 1, p, q)(2, 0), "levi_civita(2,1,p,q)(2,0)");
  test_for_zero(levi_civita(2, 1, p, q)(2, 1), "levi_civita(2,1,p,q)(2,1)");
  test_for_zero(levi_civita(2, 1, p, q)(2, 2), "levi_civita(2,1,p,q)(2,2)");
  test_for_zero(levi_civita(2, 1, p, q)(2, 3), "levi_civita(2,1,p,q)(2,3)");
  test_for_zero(levi_civita(2, 1, p, q)(3, 0) - 1,
                "levi_civita(2,1,p,q)(3,0)");
  test_for_zero(levi_civita(2, 1, p, q)(3, 1), "levi_civita(2,1,p,q)(3,1)");
  test_for_zero(levi_civita(2, 1, p, q)(3, 2), "levi_civita(2,1,p,q)(3,2)");
  test_for_zero(levi_civita(2, 1, p, q)(3, 3), "levi_civita(2,1,p,q)(3,3)");

  test_for_zero(levi_civita(2, 2, p, q)(0, 0), "levi_civita(2,2,p,q)(0,0)");
  test_for_zero(levi_civita(2, 2, p, q)(0, 1), "levi_civita(2,2,p,q)(0,1)");
  test_for_zero(levi_civita(2, 2, p, q)(0, 2), "levi_civita(2,2,p,q)(0,2)");
  test_for_zero(levi_civita(2, 2, p, q)(0, 3), "levi_civita(2,2,p,q)(0,3)");
  test_for_zero(levi_civita(2, 2, p, q)(1, 0), "levi_civita(2,2,p,q)(1,0)");
  test_for_zero(levi_civita(2, 2, p, q)(1, 1), "levi_civita(2,2,p,q)(1,1)");
  test_for_zero(levi_civita(2, 2, p, q)(1, 2), "levi_civita(2,2,p,q)(1,2)");
  test_for_zero(levi_civita(2, 2, p, q)(1, 3), "levi_civita(2,2,p,q)(1,3)");
  test_for_zero(levi_civita(2, 2, p, q)(2, 0), "levi_civita(2,2,p,q)(2,0)");
  test_for_zero(levi_civita(2, 2, p, q)(2, 1), "levi_civita(2,2,p,q)(2,1)");
  test_for_zero(levi_civita(2, 2, p, q)(2, 2), "levi_civita(2,2,p,q)(2,2)");
  test_for_zero(levi_civita(2, 2, p, q)(2, 3), "levi_civita(2,2,p,q)(2,3)");
  test_for_zero(levi_civita(2, 2, p, q)(3, 0), "levi_civita(2,2,p,q)(3,0)");
  test_for_zero(levi_civita(2, 2, p, q)(3, 1), "levi_civita(2,2,p,q)(3,1)");
  test_for_zero(levi_civita(2, 2, p, q)(3, 2), "levi_civita(2,2,p,q)(3,2)");
  test_for_zero(levi_civita(2, 2, p, q)(3, 3), "levi_civita(2,2,p,q)(3,3)");

  test_for_zero(levi_civita(2, 3, p, q)(0, 0), "levi_civita(2,3,p,q)(0,0)");
  test_for_zero(levi_civita(2, 3, p, q)(0, 1) - 1,
                "levi_civita(2,3,p,q)(0,1)");
  test_for_zero(levi_civita(2, 3, p, q)(0, 2), "levi_civita(2,3,p,q)(0,2)");
  test_for_zero(levi_civita(2, 3, p, q)(0, 3), "levi_civita(2,3,p,q)(0,3)");
  test_for_zero(levi_civita(2, 3, p, q)(1, 0) + 1,
                "levi_civita(2,3,p,q)(1,0)");
  test_for_zero(levi_civita(2, 3, p, q)(1, 1), "levi_civita(2,3,p,q)(1,1)");
  test_for_zero(levi_civita(2, 3, p, q)(1, 2), "levi_civita(2,3,p,q)(1,2)");
  test_for_zero(levi_civita(2, 3, p, q)(1, 3), "levi_civita(2,3,p,q)(1,3)");
  test_for_zero(levi_civita(2, 3, p, q)(2, 0), "levi_civita(2,3,p,q)(2,0)");
  test_for_zero(levi_civita(2, 3, p, q)(2, 1), "levi_civita(2,3,p,q)(2,1)");
  test_for_zero(levi_civita(2, 3, p, q)(2, 2), "levi_civita(2,3,p,q)(2,2)");
  test_for_zero(levi_civita(2, 3, p, q)(2, 3), "levi_civita(2,3,p,q)(2,3)");
  test_for_zero(levi_civita(2, 3, p, q)(3, 0), "levi_civita(2,3,p,q)(3,0)");
  test_for_zero(levi_civita(2, 3, p, q)(3, 1), "levi_civita(2,3,p,q)(3,1)");
  test_for_zero(levi_civita(2, 3, p, q)(3, 2), "levi_civita(2,3,p,q)(3,2)");
  test_for_zero(levi_civita(2, 3, p, q)(3, 3), "levi_civita(2,3,p,q)(3,3)");

  test_for_zero(levi_civita(3, 0, p, q)(0, 0), "levi_civita(3,0,p,q)(0,0)");
  test_for_zero(levi_civita(3, 0, p, q)(0, 1), "levi_civita(3,0,p,q)(0,1)");
  test_for_zero(levi_civita(3, 0, p, q)(0, 2), "levi_civita(3,0,p,q)(0,2)");
  test_for_zero(levi_civita(3, 0, p, q)(0, 3), "levi_civita(3,0,p,q)(0,3)");
  test_for_zero(levi_civita(3, 0, p, q)(1, 0), "levi_civita(3,0,p,q)(1,0)");
  test_for_zero(levi_civita(3, 0, p, q)(1, 1), "levi_civita(3,0,p,q)(1,1)");
  test_for_zero(levi_civita(3, 0, p, q)(1, 2) + 1,
                "levi_civita(3,0,p,q)(1,2)");
  test_for_zero(levi_civita(3, 0, p, q)(1, 3), "levi_civita(3,0,p,q)(1,3)");
  test_for_zero(levi_civita(3, 0, p, q)(2, 0), "levi_civita(3,0,p,q)(2,0)");
  test_for_zero(levi_civita(3, 0, p, q)(2, 1) - 1,
                "levi_civita(3,0,p,q)(2,1)");
  test_for_zero(levi_civita(3, 0, p, q)(2, 2), "levi_civita(3,0,p,q)(2,2)");
  test_for_zero(levi_civita(3, 0, p, q)(2, 3), "levi_civita(3,0,p,q)(2,3)");
  test_for_zero(levi_civita(3, 0, p, q)(3, 0), "levi_civita(3,0,p,q)(3,0)");
  test_for_zero(levi_civita(3, 0, p, q)(3, 1), "levi_civita(3,0,p,q)(3,1)");
  test_for_zero(levi_civita(3, 0, p, q)(3, 2), "levi_civita(3,0,p,q)(3,2)");
  test_for_zero(levi_civita(3, 0, p, q)(3, 3), "levi_civita(3,0,p,q)(3,3)");

  test_for_zero(levi_civita(3, 1, p, q)(0, 0), "levi_civita(3,1,p,q)(0,0)");
  test_for_zero(levi_civita(3, 1, p, q)(0, 1), "levi_civita(3,1,p,q)(0,1)");
  test_for_zero(levi_civita(3, 1, p, q)(0, 2) - 1,
                "levi_civita(3,1,p,q)(0,2)");
  test_for_zero(levi_civita(3, 1, p, q)(0, 3), "levi_civita(3,1,p,q)(0,3)");
  test_for_zero(levi_civita(3, 1, p, q)(1, 0), "levi_civita(3,1,p,q)(1,0)");
  test_for_zero(levi_civita(3, 1, p, q)(1, 1), "levi_civita(3,1,p,q)(1,1)");
  test_for_zero(levi_civita(3, 1, p, q)(1, 2), "levi_civita(3,1,p,q)(1,2)");
  test_for_zero(levi_civita(3, 1, p, q)(1, 3), "levi_civita(3,1,p,q)(1,3)");
  test_for_zero(levi_civita(3, 1, p, q)(2, 0) + 1,
                "levi_civita(3,1,p,q)(2,0)");
  test_for_zero(levi_civita(3, 1, p, q)(2, 1), "levi_civita(3,1,p,q)(2,1)");
  test_for_zero(levi_civita(3, 1, p, q)(2, 2), "levi_civita(3,1,p,q)(2,2)");
  test_for_zero(levi_civita(3, 1, p, q)(2, 3), "levi_civita(3,1,p,q)(2,3)");
  test_for_zero(levi_civita(3, 1, p, q)(3, 0), "levi_civita(3,1,p,q)(3,0)");
  test_for_zero(levi_civita(3, 1, p, q)(3, 1), "levi_civita(3,1,p,q)(3,1)");
  test_for_zero(levi_civita(3, 1, p, q)(3, 2), "levi_civita(3,1,p,q)(3,2)");
  test_for_zero(levi_civita(3, 1, p, q)(3, 3), "levi_civita(3,1,p,q)(3,3)");

  test_for_zero(levi_civita(3, 2, p, q)(0, 0), "levi_civita(3,2,p,q)(0,0)");
  test_for_zero(levi_civita(3, 2, p, q)(0, 1) + 1,
                "levi_civita(3,2,p,q)(0,1)");
  test_for_zero(levi_civita(3, 2, p, q)(0, 2), "levi_civita(3,2,p,q)(0,2)");
  test_for_zero(levi_civita(3, 2, p, q)(0, 3), "levi_civita(3,2,p,q)(0,3)");
  test_for_zero(levi_civita(3, 2, p, q)(1, 0) - 1,
                "levi_civita(3,2,p,q)(1,0)");
  test_for_zero(levi_civita(3, 2, p, q)(1, 1), "levi_civita(3,2,p,q)(1,1)");
  test_for_zero(levi_civita(3, 2, p, q)(1, 2), "levi_civita(3,2,p,q)(1,2)");
  test_for_zero(levi_civita(3, 2, p, q)(1, 3), "levi_civita(3,2,p,q)(1,3)");
  test_for_zero(levi_civita(3, 2, p, q)(2, 0), "levi_civita(3,2,p,q)(2,0)");
  test_for_zero(levi_civita(3, 2, p, q)(2, 1), "levi_civita(3,2,p,q)(2,1)");
  test_for_zero(levi_civita(3, 2, p, q)(2, 2), "levi_civita(3,2,p,q)(2,2)");
  test_for_zero(levi_civita(3, 2, p, q)(2, 3), "levi_civita(3,2,p,q)(2,3)");
  test_for_zero(levi_civita(3, 2, p, q)(3, 0), "levi_civita(3,2,p,q)(3,0)");
  test_for_zero(levi_civita(3, 2, p, q)(3, 1), "levi_civita(3,2,p,q)(3,1)");
  test_for_zero(levi_civita(3, 2, p, q)(3, 2), "levi_civita(3,2,p,q)(3,2)");
  test_for_zero(levi_civita(3, 2, p, q)(3, 3), "levi_civita(3,2,p,q)(3,3)");

  test_for_zero(levi_civita(3, 3, p, q)(0, 0), "levi_civita(3,3,p,q)(0,0)");
  test_for_zero(levi_civita(3, 3, p, q)(0, 1), "levi_civita(3,3,p,q)(0,1)");
  test_for_zero(levi_civita(3, 3, p, q)(0, 2), "levi_civita(3,3,p,q)(0,2)");
  test_for_zero(levi_civita(3, 3, p, q)(0, 3), "levi_civita(3,3,p,q)(0,3)");
  test_for_zero(levi_civita(3, 3, p, q)(1, 0), "levi_civita(3,3,p,q)(1,0)");
  test_for_zero(levi_civita(3, 3, p, q)(1, 1), "levi_civita(3,3,p,q)(1,1)");
  test_for_zero(levi_civita(3, 3, p, q)(1, 2), "levi_civita(3,3,p,q)(1,2)");
  test_for_zero(levi_civita(3, 3, p, q)(1, 3), "levi_civita(3,3,p,q)(1,3)");
  test_for_zero(levi_civita(3, 3, p, q)(2, 0), "levi_civita(3,3,p,q)(2,0)");
  test_for_zero(levi_civita(3, 3, p, q)(2, 1), "levi_civita(3,3,p,q)(2,1)");
  test_for_zero(levi_civita(3, 3, p, q)(2, 2), "levi_civita(3,3,p,q)(2,2)");
  test_for_zero(levi_civita(3, 3, p, q)(2, 3), "levi_civita(3,3,p,q)(2,3)");
  test_for_zero(levi_civita(3, 3, p, q)(3, 0), "levi_civita(3,3,p,q)(3,0)");
  test_for_zero(levi_civita(3, 3, p, q)(3, 1), "levi_civita(3,3,p,q)(3,1)");
  test_for_zero(levi_civita(3, 3, p, q)(3, 2), "levi_civita(3,3,p,q)(3,2)");
  test_for_zero(levi_civita(3, 3, p, q)(3, 3), "levi_civita(3,3,p,q)(3,3)");

  test_for_zero(levi_civita(0, o, 0, q)(0, 0), "levi_civita(0,o,0,q)(0,0)");
  test_for_zero(levi_civita(0, o, 0, q)(0, 1), "levi_civita(0,o,0,q)(0,1)");
  test_for_zero(levi_civita(0, o, 0, q)(0, 2), "levi_civita(0,o,0,q)(0,2)");
  test_for_zero(levi_civita(0, o, 0, q)(0, 3), "levi_civita(0,o,0,q)(0,3)");
  test_for_zero(levi_civita(0, o, 0, q)(1, 0), "levi_civita(0,o,0,q)(1,0)");
  test_for_zero(levi_civita(0, o, 0, q)(1, 1), "levi_civita(0,o,0,q)(1,1)");
  test_for_zero(levi_civita(0, o, 0, q)(1, 2), "levi_civita(0,o,0,q)(1,2)");
  test_for_zero(levi_civita(0, o, 0, q)(1, 3), "levi_civita(0,o,0,q)(1,3)");
  test_for_zero(levi_civita(0, o, 0, q)(2, 0), "levi_civita(0,o,0,q)(2,0)");
  test_for_zero(levi_civita(0, o, 0, q)(2, 1), "levi_civita(0,o,0,q)(2,1)");
  test_for_zero(levi_civita(0, o, 0, q)(2, 2), "levi_civita(0,o,0,q)(2,2)");
  test_for_zero(levi_civita(0, o, 0, q)(2, 3), "levi_civita(0,o,0,q)(2,3)");
  test_for_zero(levi_civita(0, o, 0, q)(3, 0), "levi_civita(0,o,0,q)(3,0)");
  test_for_zero(levi_civita(0, o, 0, q)(3, 1), "levi_civita(0,o,0,q)(3,1)");
  test_for_zero(levi_civita(0, o, 0, q)(3, 2), "levi_civita(0,o,0,q)(3,2)");
  test_for_zero(levi_civita(0, o, 0, q)(3, 3), "levi_civita(0,o,0,q)(3,3)");

  test_for_zero(levi_civita(0, o, 1, q)(0, 0), "levi_civita(0,o,1,q)(0,0)");
  test_for_zero(levi_civita(0, o, 1, q)(0, 1), "levi_civita(0,o,1,q)(0,1)");
  test_for_zero(levi_civita(0, o, 1, q)(0, 2), "levi_civita(0,o,1,q)(0,2)");
  test_for_zero(levi_civita(0, o, 1, q)(0, 3), "levi_civita(0,o,1,q)(0,3)");
  test_for_zero(levi_civita(0, o, 1, q)(1, 0), "levi_civita(0,o,1,q)(1,0)");
  test_for_zero(levi_civita(0, o, 1, q)(1, 1), "levi_civita(0,o,1,q)(1,1)");
  test_for_zero(levi_civita(0, o, 1, q)(1, 2), "levi_civita(0,o,1,q)(1,2)");
  test_for_zero(levi_civita(0, o, 1, q)(1, 3), "levi_civita(0,o,1,q)(1,3)");
  test_for_zero(levi_civita(0, o, 1, q)(2, 0), "levi_civita(0,o,1,q)(2,0)");
  test_for_zero(levi_civita(0, o, 1, q)(2, 1), "levi_civita(0,o,1,q)(2,1)");
  test_for_zero(levi_civita(0, o, 1, q)(2, 2), "levi_civita(0,o,1,q)(2,2)");
  test_for_zero(levi_civita(0, o, 1, q)(2, 3) + 1,
                "levi_civita(0,n,1,q)(2,3)");
  test_for_zero(levi_civita(0, o, 1, q)(3, 0), "levi_civita(0,o,1,q)(3,0)");
  test_for_zero(levi_civita(0, o, 1, q)(3, 1), "levi_civita(0,o,1,q)(3,1)");
  test_for_zero(levi_civita(0, o, 1, q)(3, 2) - 1,
                "levi_civita(0,o,1,q)(3,2)");
  test_for_zero(levi_civita(0, o, 1, q)(3, 3), "levi_civita(0,o,1,q)(3,3)");

  test_for_zero(levi_civita(0, o, 2, q)(0, 0), "levi_civita(0,o,2,q)(0,0)");
  test_for_zero(levi_civita(0, o, 2, q)(0, 1), "levi_civita(0,o,2,q)(0,1)");
  test_for_zero(levi_civita(0, o, 2, q)(0, 2), "levi_civita(0,o,2,q)(0,2)");
  test_for_zero(levi_civita(0, o, 2, q)(0, 3), "levi_civita(0,o,2,q)(0,3)");
  test_for_zero(levi_civita(0, o, 2, q)(1, 0), "levi_civita(0,o,2,q)(1,0)");
  test_for_zero(levi_civita(0, o, 2, q)(1, 1), "levi_civita(0,o,2,q)(1,1)");
  test_for_zero(levi_civita(0, o, 2, q)(1, 2), "levi_civita(0,o,2,q)(1,2)");
  test_for_zero(levi_civita(0, o, 2, q)(1, 3) - 1,
                "levi_civita(0,o,2,q)(1,3)");
  test_for_zero(levi_civita(0, o, 2, q)(2, 0), "levi_civita(0,o,2,q)(2,0)");
  test_for_zero(levi_civita(0, o, 2, q)(2, 1), "levi_civita(0,o,2,q)(2,1)");
  test_for_zero(levi_civita(0, o, 2, q)(2, 2), "levi_civita(0,o,2,q)(2,2)");
  test_for_zero(levi_civita(0, o, 2, q)(2, 3), "levi_civita(0,o,2,q)(2,3)");
  test_for_zero(levi_civita(0, o, 2, q)(3, 0), "levi_civita(0,o,2,q)(3,0)");
  test_for_zero(levi_civita(0, o, 2, q)(3, 1) + 1,
                "levi_civita(0,o,2,q)(3,1)");
  test_for_zero(levi_civita(0, o, 2, q)(3, 2), "levi_civita(0,o,2,q)(3,2)");
  test_for_zero(levi_civita(0, o, 2, q)(3, 3), "levi_civita(0,o,2,q)(3,3)");

  test_for_zero(levi_civita(0, o, 3, q)(0, 0), "levi_civita(0,o,3,q)(0,0)");
  test_for_zero(levi_civita(0, o, 3, q)(0, 1), "levi_civita(0,o,3,q)(0,1)");
  test_for_zero(levi_civita(0, o, 3, q)(0, 2), "levi_civita(0,o,3,q)(0,2)");
  test_for_zero(levi_civita(0, o, 3, q)(0, 3), "levi_civita(0,o,3,q)(0,3)");
  test_for_zero(levi_civita(0, o, 3, q)(1, 0), "levi_civita(0,o,3,q)(1,0)");
  test_for_zero(levi_civita(0, o, 3, q)(1, 1), "levi_civita(0,o,3,q)(1,1)");
  test_for_zero(levi_civita(0, o, 3, q)(1, 2) + 1,
                "levi_civita(0,o,3,q)(1,2)");
  test_for_zero(levi_civita(0, o, 3, q)(1, 3), "levi_civita(0,o,3,q)(1,3)");
  test_for_zero(levi_civita(0, o, 3, q)(2, 0), "levi_civita(0,o,3,q)(2,0)");
  test_for_zero(levi_civita(0, o, 3, q)(2, 1) - 1,
                "levi_civita(0,o,3,q)(2,1)");
  test_for_zero(levi_civita(0, o, 3, q)(2, 2), "levi_civita(0,o,3,q)(2,2)");
  test_for_zero(levi_civita(0, o, 3, q)(2, 3), "levi_civita(0,o,3,q)(2,3)");
  test_for_zero(levi_civita(0, o, 3, q)(3, 0), "levi_civita(0,o,3,q)(3,0)");
  test_for_zero(levi_civita(0, o, 3, q)(3, 1), "levi_civita(0,o,3,q)(3,1)");
  test_for_zero(levi_civita(0, o, 3, q)(3, 2), "levi_civita(0,o,3,q)(3,2)");
  test_for_zero(levi_civita(0, o, 3, q)(3, 3), "levi_civita(0,o,3,q)(3,3)");

  test_for_zero(levi_civita(1, o, 0, q)(0, 0), "levi_civita(1,o,0,q)(0,0)");
  test_for_zero(levi_civita(1, o, 0, q)(0, 1), "levi_civita(1,o,0,q)(0,1)");
  test_for_zero(levi_civita(1, o, 0, q)(0, 2), "levi_civita(1,o,0,q)(0,2)");
  test_for_zero(levi_civita(1, o, 0, q)(0, 3), "levi_civita(1,o,0,q)(0,3)");
  test_for_zero(levi_civita(1, o, 0, q)(1, 0), "levi_civita(1,o,0,q)(1,0)");
  test_for_zero(levi_civita(1, o, 0, q)(1, 1), "levi_civita(1,o,0,q)(1,1)");
  test_for_zero(levi_civita(1, o, 0, q)(1, 2), "levi_civita(1,o,0,q)(1,2)");
  test_for_zero(levi_civita(1, o, 0, q)(1, 3), "levi_civita(1,o,0,q)(1,3)");
  test_for_zero(levi_civita(1, o, 0, q)(2, 0), "levi_civita(1,o,0,q)(2,0)");
  test_for_zero(levi_civita(1, o, 0, q)(2, 1), "levi_civita(1,o,0,q)(2,1)");
  test_for_zero(levi_civita(1, o, 0, q)(2, 2), "levi_civita(1,o,0,q)(2,2)");
  test_for_zero(levi_civita(1, o, 0, q)(2, 3) - 1,
                "levi_civita(1,o,0,q)(2,3)");
  test_for_zero(levi_civita(1, o, 0, q)(3, 0), "levi_civita(1,o,0,q)(3,0)");
  test_for_zero(levi_civita(1, o, 0, q)(3, 1), "levi_civita(1,o,0,q)(3,1)");
  test_for_zero(levi_civita(1, o, 0, q)(3, 2) + 1,
                "levi_civita(1,o,0,q)(3,2)");
  test_for_zero(levi_civita(1, o, 0, q)(3, 3), "levi_civita(1,o,0,q)(3,3)");

  test_for_zero(levi_civita(1, o, 1, q)(0, 0), "levi_civita(1,o,1,q)(0,0)");
  test_for_zero(levi_civita(1, o, 1, q)(0, 1), "levi_civita(1,o,1,q)(0,1)");
  test_for_zero(levi_civita(1, o, 1, q)(0, 2), "levi_civita(1,o,1,q)(0,2)");
  test_for_zero(levi_civita(1, o, 1, q)(0, 3), "levi_civita(1,o,1,q)(0,3)");
  test_for_zero(levi_civita(1, o, 1, q)(1, 0), "levi_civita(1,o,1,q)(1,0)");
  test_for_zero(levi_civita(1, o, 1, q)(1, 1), "levi_civita(1,o,1,q)(1,1)");
  test_for_zero(levi_civita(1, o, 1, q)(1, 2), "levi_civita(1,o,1,q)(1,2)");
  test_for_zero(levi_civita(1, o, 1, q)(1, 3), "levi_civita(1,o,1,q)(1,3)");
  test_for_zero(levi_civita(1, o, 1, q)(2, 0), "levi_civita(1,o,1,q)(2,0)");
  test_for_zero(levi_civita(1, o, 1, q)(2, 1), "levi_civita(1,o,1,q)(2,1)");
  test_for_zero(levi_civita(1, o, 1, q)(2, 2), "levi_civita(1,o,1,q)(2,2)");
  test_for_zero(levi_civita(1, o, 1, q)(2, 3), "levi_civita(1,o,1,q)(2,3)");
  test_for_zero(levi_civita(1, o, 1, q)(3, 0), "levi_civita(1,o,1,q)(3,0)");
  test_for_zero(levi_civita(1, o, 1, q)(3, 1), "levi_civita(1,o,1,q)(3,1)");
  test_for_zero(levi_civita(1, o, 1, q)(3, 2), "levi_civita(1,o,1,q)(3,2)");
  test_for_zero(levi_civita(1, o, 1, q)(3, 3), "levi_civita(1,o,1,q)(3,3)");

  test_for_zero(levi_civita(1, o, 2, q)(0, 0), "levi_civita(1,o,2,q)(0,0)");
  test_for_zero(levi_civita(1, o, 2, q)(0, 1), "levi_civita(1,o,2,q)(0,1)");
  test_for_zero(levi_civita(1, o, 2, q)(0, 2), "levi_civita(1,o,2,q)(0,2)");
  test_for_zero(levi_civita(1, o, 2, q)(0, 3) + 1,
                "levi_civita(1,o,2,q)(0,3)");
  test_for_zero(levi_civita(1, o, 2, q)(1, 0), "levi_civita(1,o,2,q)(1,0)");
  test_for_zero(levi_civita(1, o, 2, q)(1, 1), "levi_civita(1,o,2,q)(1,1)");
  test_for_zero(levi_civita(1, o, 2, q)(1, 2), "levi_civita(1,o,2,q)(1,2)");
  test_for_zero(levi_civita(1, o, 2, q)(1, 3), "levi_civita(1,o,2,q)(1,3)");
  test_for_zero(levi_civita(1, o, 2, q)(2, 0), "levi_civita(1,o,2,q)(2,0)");
  test_for_zero(levi_civita(1, o, 2, q)(2, 1), "levi_civita(1,o,2,q)(2,1)");
  test_for_zero(levi_civita(1, o, 2, q)(2, 2), "levi_civita(1,o,2,q)(2,2)");
  test_for_zero(levi_civita(1, o, 2, q)(2, 3), "levi_civita(1,o,2,q)(2,3)");
  test_for_zero(levi_civita(1, o, 2, q)(3, 0) - 1,
                "levi_civita(1,o,2,q)(3,0)");
  test_for_zero(levi_civita(1, o, 2, q)(3, 1), "levi_civita(1,o,2,q)(3,1)");
  test_for_zero(levi_civita(1, o, 2, q)(3, 2), "levi_civita(1,o,2,q)(3,2)");
  test_for_zero(levi_civita(1, o, 2, q)(3, 3), "levi_civita(1,o,2,q)(3,3)");

  test_for_zero(levi_civita(1, o, 3, q)(0, 0), "levi_civita(1,o,3,q)(0,0)");
  test_for_zero(levi_civita(1, o, 3, q)(0, 1), "levi_civita(1,o,3,q)(0,1)");
  test_for_zero(levi_civita(1, o, 3, q)(0, 2) - 1,
                "levi_civita(1,o,3,q)(0,2)");
  test_for_zero(levi_civita(1, o, 3, q)(0, 3), "levi_civita(1,o,3,q)(0,3)");
  test_for_zero(levi_civita(1, o, 3, q)(1, 0), "levi_civita(1,o,3,q)(1,0)");
  test_for_zero(levi_civita(1, o, 3, q)(1, 1), "levi_civita(1,o,3,q)(1,1)");
  test_for_zero(levi_civita(1, o, 3, q)(1, 2), "levi_civita(1,o,3,q)(1,2)");
  test_for_zero(levi_civita(1, o, 3, q)(1, 3), "levi_civita(1,o,3,q)(1,3)");
  test_for_zero(levi_civita(1, o, 3, q)(2, 0) + 1,
                "levi_civita(1,o,3,q)(2,0)");
  test_for_zero(levi_civita(1, o, 3, q)(2, 1), "levi_civita(1,o,3,q)(2,1)");
  test_for_zero(levi_civita(1, o, 3, q)(2, 2), "levi_civita(1,o,3,q)(2,2)");
  test_for_zero(levi_civita(1, o, 3, q)(2, 3), "levi_civita(1,o,3,q)(2,3)");
  test_for_zero(levi_civita(1, o, 3, q)(3, 0), "levi_civita(1,o,3,q)(3,0)");
  test_for_zero(levi_civita(1, o, 3, q)(3, 1), "levi_civita(1,o,3,q)(3,1)");
  test_for_zero(levi_civita(1, o, 3, q)(3, 2), "levi_civita(1,o,3,q)(3,2)");
  test_for_zero(levi_civita(1, o, 3, q)(3, 3), "levi_civita(1,o,3,q)(3,3)");

  test_for_zero(levi_civita(2, o, 0, q)(0, 0), "levi_civita(2,o,0,q)(0,0)");
  test_for_zero(levi_civita(2, o, 0, q)(0, 1), "levi_civita(2,o,0,q)(0,1)");
  test_for_zero(levi_civita(2, o, 0, q)(0, 2), "levi_civita(2,o,0,q)(0,2)");
  test_for_zero(levi_civita(2, o, 0, q)(0, 3), "levi_civita(2,o,0,q)(0,3)");
  test_for_zero(levi_civita(2, o, 0, q)(1, 0), "levi_civita(2,o,0,q)(1,0)");
  test_for_zero(levi_civita(2, o, 0, q)(1, 1), "levi_civita(2,o,0,q)(1,1)");
  test_for_zero(levi_civita(2, o, 0, q)(1, 2), "levi_civita(2,o,0,q)(1,2)");
  test_for_zero(levi_civita(2, o, 0, q)(1, 3) + 1,
                "levi_civita(2,o,0,q)(1,3)");
  test_for_zero(levi_civita(2, o, 0, q)(2, 0), "levi_civita(2,o,0,q)(2,0)");
  test_for_zero(levi_civita(2, o, 0, q)(2, 1), "levi_civita(2,o,0,q)(2,1)");
  test_for_zero(levi_civita(2, o, 0, q)(2, 2), "levi_civita(2,o,0,q)(2,2)");
  test_for_zero(levi_civita(2, o, 0, q)(2, 3), "levi_civita(2,o,0,q)(2,3)");
  test_for_zero(levi_civita(2, o, 0, q)(3, 0), "levi_civita(2,o,0,q)(3,0)");
  test_for_zero(levi_civita(2, o, 0, q)(3, 1) - 1,
                "levi_civita(2,o,0,q)(3,1)");
  test_for_zero(levi_civita(2, o, 0, q)(3, 2), "levi_civita(2,o,0,q)(3,2)");
  test_for_zero(levi_civita(2, o, 0, q)(3, 3), "levi_civita(2,o,0,q)(3,3)");

  test_for_zero(levi_civita(2, o, 1, q)(0, 0), "levi_civita(2,o,1,q)(0,0)");
  test_for_zero(levi_civita(2, o, 1, q)(0, 1), "levi_civita(2,o,1,q)(0,1)");
  test_for_zero(levi_civita(2, o, 1, q)(0, 2), "levi_civita(2,o,1,q)(0,2)");
  test_for_zero(levi_civita(2, o, 1, q)(0, 3) - 1,
                "levi_civita(2,o,1,q)(0,3)");
  test_for_zero(levi_civita(2, o, 1, q)(1, 0), "levi_civita(2,o,1,q)(1,0)");
  test_for_zero(levi_civita(2, o, 1, q)(1, 1), "levi_civita(2,o,1,q)(1,1)");
  test_for_zero(levi_civita(2, o, 1, q)(1, 2), "levi_civita(2,o,1,q)(1,2)");
  test_for_zero(levi_civita(2, o, 1, q)(1, 3), "levi_civita(2,o,1,q)(1,3)");
  test_for_zero(levi_civita(2, o, 1, q)(2, 0), "levi_civita(2,o,1,q)(2,0)");
  test_for_zero(levi_civita(2, o, 1, q)(2, 1), "levi_civita(2,o,1,q)(2,1)");
  test_for_zero(levi_civita(2, o, 1, q)(2, 2), "levi_civita(2,o,1,q)(2,2)");
  test_for_zero(levi_civita(2, o, 1, q)(2, 3), "levi_civita(2,o,1,q)(2,3)");
  test_for_zero(levi_civita(2, o, 1, q)(3, 0) + 1,
                "levi_civita(2,o,1,q)(3,0)");
  test_for_zero(levi_civita(2, o, 1, q)(3, 1), "levi_civita(2,o,1,q)(3,1)");
  test_for_zero(levi_civita(2, o, 1, q)(3, 2), "levi_civita(2,o,1,q)(3,2)");
  test_for_zero(levi_civita(2, o, 1, q)(3, 3), "levi_civita(2,o,1,q)(3,3)");

  test_for_zero(levi_civita(2, o, 2, q)(0, 0), "levi_civita(2,o,2,q)(0,0)");
  test_for_zero(levi_civita(2, o, 2, q)(0, 1), "levi_civita(2,o,2,q)(0,1)");
  test_for_zero(levi_civita(2, o, 2, q)(0, 2), "levi_civita(2,o,2,q)(0,2)");
  test_for_zero(levi_civita(2, o, 2, q)(0, 3), "levi_civita(2,o,2,q)(0,3)");
  test_for_zero(levi_civita(2, o, 2, q)(1, 0), "levi_civita(2,o,2,q)(1,0)");
  test_for_zero(levi_civita(2, o, 2, q)(1, 1), "levi_civita(2,o,2,q)(1,1)");
  test_for_zero(levi_civita(2, o, 2, q)(1, 2), "levi_civita(2,o,2,q)(1,2)");
  test_for_zero(levi_civita(2, o, 2, q)(1, 3), "levi_civita(2,o,2,q)(1,3)");
  test_for_zero(levi_civita(2, o, 2, q)(2, 0), "levi_civita(2,o,2,q)(2,0)");
  test_for_zero(levi_civita(2, o, 2, q)(2, 1), "levi_civita(2,o,2,q)(2,1)");
  test_for_zero(levi_civita(2, o, 2, q)(2, 2), "levi_civita(2,o,2,q)(2,2)");
  test_for_zero(levi_civita(2, o, 2, q)(2, 3), "levi_civita(2,o,2,q)(2,3)");
  test_for_zero(levi_civita(2, o, 2, q)(3, 0), "levi_civita(2,o,2,q)(3,0)");
  test_for_zero(levi_civita(2, o, 2, q)(3, 1), "levi_civita(2,o,2,q)(3,1)");
  test_for_zero(levi_civita(2, o, 2, q)(3, 2), "levi_civita(2,o,2,q)(3,2)");
  test_for_zero(levi_civita(2, o, 2, q)(3, 3), "levi_civita(2,o,2,q)(3,3)");

  test_for_zero(levi_civita(2, o, 3, q)(0, 0), "levi_civita(2,o,3,q)(0,0)");
  test_for_zero(levi_civita(2, o, 3, q)(0, 1) + 1,
                "levi_civita(2,o,3,q)(0,1)");
  test_for_zero(levi_civita(2, o, 3, q)(0, 2), "levi_civita(2,o,3,q)(0,2)");
  test_for_zero(levi_civita(2, o, 3, q)(0, 3), "levi_civita(2,o,3,q)(0,3)");
  test_for_zero(levi_civita(2, o, 3, q)(1, 0) - 1,
                "levi_civita(2,o,3,q)(1,0)");
  test_for_zero(levi_civita(2, o, 3, q)(1, 1), "levi_civita(2,o,3,q)(1,1)");
  test_for_zero(levi_civita(2, o, 3, q)(1, 2), "levi_civita(2,o,3,q)(1,2)");
  test_for_zero(levi_civita(2, o, 3, q)(1, 3), "levi_civita(2,o,3,q)(1,3)");
  test_for_zero(levi_civita(2, o, 3, q)(2, 0), "levi_civita(2,o,3,q)(2,0)");
  test_for_zero(levi_civita(2, o, 3, q)(2, 1), "levi_civita(2,o,3,q)(2,1)");
  test_for_zero(levi_civita(2, o, 3, q)(2, 2), "levi_civita(2,o,3,q)(2,2)");
  test_for_zero(levi_civita(2, o, 3, q)(2, 3), "levi_civita(2,o,3,q)(2,3)");
  test_for_zero(levi_civita(2, o, 3, q)(3, 0), "levi_civita(2,o,3,q)(3,0)");
  test_for_zero(levi_civita(2, o, 3, q)(3, 1), "levi_civita(2,o,3,q)(3,1)");
  test_for_zero(levi_civita(2, o, 3, q)(3, 2), "levi_civita(2,o,3,q)(3,2)");
  test_for_zero(levi_civita(2, o, 3, q)(3, 3), "levi_civita(2,o,3,q)(3,3)");

  test_for_zero(levi_civita(3, o, 0, q)(0, 0), "levi_civita(3,o,0,q)(0,0)");
  test_for_zero(levi_civita(3, o, 0, q)(0, 1), "levi_civita(3,o,0,q)(0,1)");
  test_for_zero(levi_civita(3, o, 0, q)(0, 2), "levi_civita(3,o,0,q)(0,2)");
  test_for_zero(levi_civita(3, o, 0, q)(0, 3), "levi_civita(3,o,0,q)(0,3)");
  test_for_zero(levi_civita(3, o, 0, q)(1, 0), "levi_civita(3,o,0,q)(1,0)");
  test_for_zero(levi_civita(3, o, 0, q)(1, 1), "levi_civita(3,o,0,q)(1,1)");
  test_for_zero(levi_civita(3, o, 0, q)(1, 2) - 1,
                "levi_civita(3,o,0,q)(1,2)");
  test_for_zero(levi_civita(3, o, 0, q)(1, 3), "levi_civita(3,o,0,q)(1,3)");
  test_for_zero(levi_civita(3, o, 0, q)(2, 0), "levi_civita(3,o,0,q)(2,0)");
  test_for_zero(levi_civita(3, o, 0, q)(2, 1) + 1,
                "levi_civita(3,o,0,q)(2,1)");
  test_for_zero(levi_civita(3, o, 0, q)(2, 2), "levi_civita(3,o,0,q)(2,2)");
  test_for_zero(levi_civita(3, o, 0, q)(2, 3), "levi_civita(3,o,0,q)(2,3)");
  test_for_zero(levi_civita(3, o, 0, q)(3, 0), "levi_civita(3,o,0,q)(3,0)");
  test_for_zero(levi_civita(3, o, 0, q)(3, 1), "levi_civita(3,o,0,q)(3,1)");
  test_for_zero(levi_civita(3, o, 0, q)(3, 2), "levi_civita(3,o,0,q)(3,2)");
  test_for_zero(levi_civita(3, o, 0, q)(3, 3), "levi_civita(3,o,0,q)(3,3)");

  test_for_zero(levi_civita(3, o, 1, q)(0, 0), "levi_civita(3,o,1,q)(0,0)");
  test_for_zero(levi_civita(3, o, 1, q)(0, 1), "levi_civita(3,o,1,q)(0,1)");
  test_for_zero(levi_civita(3, o, 1, q)(0, 2) + 1,
                "levi_civita(3,o,1,q)(0,2)");
  test_for_zero(levi_civita(3, o, 1, q)(0, 3), "levi_civita(3,o,1,q)(0,3)");
  test_for_zero(levi_civita(3, o, 1, q)(1, 0), "levi_civita(3,o,1,q)(1,0)");
  test_for_zero(levi_civita(3, o, 1, q)(1, 1), "levi_civita(3,o,1,q)(1,1)");
  test_for_zero(levi_civita(3, o, 1, q)(1, 2), "levi_civita(3,o,1,q)(1,2)");
  test_for_zero(levi_civita(3, o, 1, q)(1, 3), "levi_civita(3,o,1,q)(1,3)");
  test_for_zero(levi_civita(3, o, 1, q)(2, 0) - 1,
                "levi_civita(3,o,1,q)(2,0)");
  test_for_zero(levi_civita(3, o, 1, q)(2, 1), "levi_civita(3,o,1,q)(2,1)");
  test_for_zero(levi_civita(3, o, 1, q)(2, 2), "levi_civita(3,o,1,q)(2,2)");
  test_for_zero(levi_civita(3, o, 1, q)(2, 3), "levi_civita(3,o,1,q)(2,3)");
  test_for_zero(levi_civita(3, o, 1, q)(3, 0), "levi_civita(3,o,1,q)(3,0)");
  test_for_zero(levi_civita(3, o, 1, q)(3, 1), "levi_civita(3,o,1,q)(3,1)");
  test_for_zero(levi_civita(3, o, 1, q)(3, 2), "levi_civita(3,o,1,q)(3,2)");
  test_for_zero(levi_civita(3, o, 1, q)(3, 3), "levi_civita(3,o,1,q)(3,3)");

  test_for_zero(levi_civita(3, o, 2, q)(0, 0), "levi_civita(3,o,2,q)(0,0)");
  test_for_zero(levi_civita(3, o, 2, q)(0, 1) - 1,
                "levi_civita(3,o,2,q)(0,1)");
  test_for_zero(levi_civita(3, o, 2, q)(0, 2), "levi_civita(3,o,2,q)(0,2)");
  test_for_zero(levi_civita(3, o, 2, q)(0, 3), "levi_civita(3,o,2,q)(0,3)");
  test_for_zero(levi_civita(3, o, 2, q)(1, 0) + 1,
                "levi_civita(3,o,2,q)(1,0)");
  test_for_zero(levi_civita(3, o, 2, q)(1, 1), "levi_civita(3,o,2,q)(1,1)");
  test_for_zero(levi_civita(3, o, 2, q)(1, 2), "levi_civita(3,o,2,q)(1,2)");
  test_for_zero(levi_civita(3, o, 2, q)(1, 3), "levi_civita(3,o,2,q)(1,3)");
  test_for_zero(levi_civita(3, o, 2, q)(2, 0), "levi_civita(3,o,2,q)(2,0)");
  test_for_zero(levi_civita(3, o, 2, q)(2, 1), "levi_civita(3,o,2,q)(2,1)");
  test_for_zero(levi_civita(3, o, 2, q)(2, 2), "levi_civita(3,o,2,q)(2,2)");
  test_for_zero(levi_civita(3, o, 2, q)(2, 3), "levi_civita(3,o,2,q)(2,3)");
  test_for_zero(levi_civita(3, o, 2, q)(3, 0), "levi_civita(3,o,2,q)(3,0)");
  test_for_zero(levi_civita(3, o, 2, q)(3, 1), "levi_civita(3,o,2,q)(3,1)");
  test_for_zero(levi_civita(3, o, 2, q)(3, 2), "levi_civita(3,o,2,q)(3,2)");
  test_for_zero(levi_civita(3, o, 2, q)(3, 3), "levi_civita(3,o,2,q)(3,3)");

  test_for_zero(levi_civita(3, o, 3, q)(0, 0), "levi_civita(3,o,3,q)(0,0)");
  test_for_zero(levi_civita(3, o, 3, q)(0, 1), "levi_civita(3,o,3,q)(0,1)");
  test_for_zero(levi_civita(3, o, 3, q)(0, 2), "levi_civita(3,o,3,q)(0,2)");
  test_for_zero(levi_civita(3, o, 3, q)(0, 3), "levi_civita(3,o,3,q)(0,3)");
  test_for_zero(levi_civita(3, o, 3, q)(1, 0), "levi_civita(3,o,3,q)(1,0)");
  test_for_zero(levi_civita(3, o, 3, q)(1, 1), "levi_civita(3,o,3,q)(1,1)");
  test_for_zero(levi_civita(3, o, 3, q)(1, 2), "levi_civita(3,o,3,q)(1,2)");
  test_for_zero(levi_civita(3, o, 3, q)(1, 3), "levi_civita(3,o,3,q)(1,3)");
  test_for_zero(levi_civita(3, o, 3, q)(2, 0), "levi_civita(3,o,3,q)(2,0)");
  test_for_zero(levi_civita(3, o, 3, q)(2, 1), "levi_civita(3,o,3,q)(2,1)");
  test_for_zero(levi_civita(3, o, 3, q)(2, 2), "levi_civita(3,o,3,q)(2,2)");
  test_for_zero(levi_civita(3, o, 3, q)(2, 3), "levi_civita(3,o,3,q)(2,3)");
  test_for_zero(levi_civita(3, o, 3, q)(3, 0), "levi_civita(3,o,3,q)(3,0)");
  test_for_zero(levi_civita(3, o, 3, q)(3, 1), "levi_civita(3,o,3,q)(3,1)");
  test_for_zero(levi_civita(3, o, 3, q)(3, 2), "levi_civita(3,o,3,q)(3,2)");
  test_for_zero(levi_civita(3, o, 3, q)(3, 3), "levi_civita(3,o,3,q)(3,3)");

  test_for_zero(levi_civita(0, o, p, 0)(0, 0), "levi_civita(0,o,p,0)(0,0)");
  test_for_zero(levi_civita(0, o, p, 0)(0, 1), "levi_civita(0,o,p,0)(0,1)");
  test_for_zero(levi_civita(0, o, p, 0)(0, 2), "levi_civita(0,o,p,0)(0,2)");
  test_for_zero(levi_civita(0, o, p, 0)(0, 3), "levi_civita(0,o,p,0)(0,3)");
  test_for_zero(levi_civita(0, o, p, 0)(1, 0), "levi_civita(0,o,p,0)(1,0)");
  test_for_zero(levi_civita(0, o, p, 0)(1, 1), "levi_civita(0,o,p,0)(1,1)");
  test_for_zero(levi_civita(0, o, p, 0)(1, 2), "levi_civita(0,o,p,0)(1,2)");
  test_for_zero(levi_civita(0, o, p, 0)(1, 3), "levi_civita(0,o,p,0)(1,3)");
  test_for_zero(levi_civita(0, o, p, 0)(2, 0), "levi_civita(0,o,p,0)(2,0)");
  test_for_zero(levi_civita(0, o, p, 0)(2, 1), "levi_civita(0,o,p,0)(2,1)");
  test_for_zero(levi_civita(0, o, p, 0)(2, 2), "levi_civita(0,o,p,0)(2,2)");
  test_for_zero(levi_civita(0, o, p, 0)(2, 3), "levi_civita(0,o,p,0)(2,3)");
  test_for_zero(levi_civita(0, o, p, 0)(3, 0), "levi_civita(0,o,p,0)(3,0)");
  test_for_zero(levi_civita(0, o, p, 0)(3, 1), "levi_civita(0,o,p,0)(3,1)");
  test_for_zero(levi_civita(0, o, p, 0)(3, 2), "levi_civita(0,o,p,0)(3,2)");
  test_for_zero(levi_civita(0, o, p, 0)(3, 3), "levi_civita(0,o,p,0)(3,3)");

  test_for_zero(levi_civita(0, o, p, 1)(0, 0), "levi_civita(0,o,p,1)(0,0)");
  test_for_zero(levi_civita(0, o, p, 1)(0, 1), "levi_civita(0,o,p,1)(0,1)");
  test_for_zero(levi_civita(0, o, p, 1)(0, 2), "levi_civita(0,o,p,1)(0,2)");
  test_for_zero(levi_civita(0, o, p, 1)(0, 3), "levi_civita(0,o,p,1)(0,3)");
  test_for_zero(levi_civita(0, o, p, 1)(1, 0), "levi_civita(0,o,p,1)(1,0)");
  test_for_zero(levi_civita(0, o, p, 1)(1, 1), "levi_civita(0,o,p,1)(1,1)");
  test_for_zero(levi_civita(0, o, p, 1)(1, 2), "levi_civita(0,o,p,1)(1,2)");
  test_for_zero(levi_civita(0, o, p, 1)(1, 3), "levi_civita(0,o,p,1)(1,3)");
  test_for_zero(levi_civita(0, o, p, 1)(2, 0), "levi_civita(0,o,p,1)(2,0)");
  test_for_zero(levi_civita(0, o, p, 1)(2, 1), "levi_civita(0,o,p,1)(2,1)");
  test_for_zero(levi_civita(0, o, p, 1)(2, 2), "levi_civita(0,o,p,1)(2,2)");
  test_for_zero(levi_civita(0, o, p, 1)(2, 3) - 1, "levi_civita(0,n,1)(2,3)");
  test_for_zero(levi_civita(0, o, p, 1)(3, 0), "levi_civita(0,o,p,1)(3,0)");
  test_for_zero(levi_civita(0, o, p, 1)(3, 1), "levi_civita(0,o,p,1)(3,1)");
  test_for_zero(levi_civita(0, o, p, 1)(3, 2) + 1,
                "levi_civita(0,o,p,1)(3,2)");
  test_for_zero(levi_civita(0, o, p, 1)(3, 3), "levi_civita(0,o,p,1)(3,3)");

  test_for_zero(levi_civita(0, o, p, 2)(0, 0), "levi_civita(0,o,p,2)(0,0)");
  test_for_zero(levi_civita(0, o, p, 2)(0, 1), "levi_civita(0,o,p,2)(0,1)");
  test_for_zero(levi_civita(0, o, p, 2)(0, 2), "levi_civita(0,o,p,2)(0,2)");
  test_for_zero(levi_civita(0, o, p, 2)(0, 3), "levi_civita(0,o,p,2)(0,3)");
  test_for_zero(levi_civita(0, o, p, 2)(1, 0), "levi_civita(0,o,p,2)(1,0)");
  test_for_zero(levi_civita(0, o, p, 2)(1, 1), "levi_civita(0,o,p,2)(1,1)");
  test_for_zero(levi_civita(0, o, p, 2)(1, 2), "levi_civita(0,o,p,2)(1,2)");
  test_for_zero(levi_civita(0, o, p, 2)(1, 3) + 1,
                "levi_civita(0,o,p,2)(1,3)");
  test_for_zero(levi_civita(0, o, p, 2)(2, 0), "levi_civita(0,o,p,2)(2,0)");
  test_for_zero(levi_civita(0, o, p, 2)(2, 1), "levi_civita(0,o,p,2)(2,1)");
  test_for_zero(levi_civita(0, o, p, 2)(2, 2), "levi_civita(0,o,p,2)(2,2)");
  test_for_zero(levi_civita(0, o, p, 2)(2, 3), "levi_civita(0,o,p,2)(2,3)");
  test_for_zero(levi_civita(0, o, p, 2)(3, 0), "levi_civita(0,o,p,2)(3,0)");
  test_for_zero(levi_civita(0, o, p, 2)(3, 1) - 1,
                "levi_civita(0,o,p,2)(3,1)");
  test_for_zero(levi_civita(0, o, p, 2)(3, 2), "levi_civita(0,o,p,2)(3,2)");
  test_for_zero(levi_civita(0, o, p, 2)(3, 3), "levi_civita(0,o,p,2)(3,3)");

  test_for_zero(levi_civita(0, o, p, 3)(0, 0), "levi_civita(0,o,p,3)(0,0)");
  test_for_zero(levi_civita(0, o, p, 3)(0, 1), "levi_civita(0,o,p,3)(0,1)");
  test_for_zero(levi_civita(0, o, p, 3)(0, 2), "levi_civita(0,o,p,3)(0,2)");
  test_for_zero(levi_civita(0, o, p, 3)(0, 3), "levi_civita(0,o,p,3)(0,3)");
  test_for_zero(levi_civita(0, o, p, 3)(1, 0), "levi_civita(0,o,p,3)(1,0)");
  test_for_zero(levi_civita(0, o, p, 3)(1, 1), "levi_civita(0,o,p,3)(1,1)");
  test_for_zero(levi_civita(0, o, p, 3)(1, 2) - 1,
                "levi_civita(0,o,p,3)(1,2)");
  test_for_zero(levi_civita(0, o, p, 3)(1, 3), "levi_civita(0,o,p,3)(1,3)");
  test_for_zero(levi_civita(0, o, p, 3)(2, 0), "levi_civita(0,o,p,3)(2,0)");
  test_for_zero(levi_civita(0, o, p, 3)(2, 1) + 1,
                "levi_civita(0,o,p,3)(2,1)");
  test_for_zero(levi_civita(0, o, p, 3)(2, 2), "levi_civita(0,o,p,3)(2,2)");
  test_for_zero(levi_civita(0, o, p, 3)(2, 3), "levi_civita(0,o,p,3)(2,3)");
  test_for_zero(levi_civita(0, o, p, 3)(3, 0), "levi_civita(0,o,p,3)(3,0)");
  test_for_zero(levi_civita(0, o, p, 3)(3, 1), "levi_civita(0,o,p,3)(3,1)");
  test_for_zero(levi_civita(0, o, p, 3)(3, 2), "levi_civita(0,o,p,3)(3,2)");
  test_for_zero(levi_civita(0, o, p, 3)(3, 3), "levi_civita(0,o,p,3)(3,3)");

  test_for_zero(levi_civita(1, o, p, 0)(0, 0), "levi_civita(1,o,p,0)(0,0)");
  test_for_zero(levi_civita(1, o, p, 0)(0, 1), "levi_civita(1,o,p,0)(0,1)");
  test_for_zero(levi_civita(1, o, p, 0)(0, 2), "levi_civita(1,o,p,0)(0,2)");
  test_for_zero(levi_civita(1, o, p, 0)(0, 3), "levi_civita(1,o,p,0)(0,3)");
  test_for_zero(levi_civita(1, o, p, 0)(1, 0), "levi_civita(1,o,p,0)(1,0)");
  test_for_zero(levi_civita(1, o, p, 0)(1, 1), "levi_civita(1,o,p,0)(1,1)");
  test_for_zero(levi_civita(1, o, p, 0)(1, 2), "levi_civita(1,o,p,0)(1,2)");
  test_for_zero(levi_civita(1, o, p, 0)(1, 3), "levi_civita(1,o,p,0)(1,3)");
  test_for_zero(levi_civita(1, o, p, 0)(2, 0), "levi_civita(1,o,p,0)(2,0)");
  test_for_zero(levi_civita(1, o, p, 0)(2, 1), "levi_civita(1,o,p,0)(2,1)");
  test_for_zero(levi_civita(1, o, p, 0)(2, 2), "levi_civita(1,o,p,0)(2,2)");
  test_for_zero(levi_civita(1, o, p, 0)(2, 3) + 1,
                "levi_civita(1,o,p,0)(2,3)");
  test_for_zero(levi_civita(1, o, p, 0)(3, 0), "levi_civita(1,o,p,0)(3,0)");
  test_for_zero(levi_civita(1, o, p, 0)(3, 1), "levi_civita(1,o,p,0)(3,1)");
  test_for_zero(levi_civita(1, o, p, 0)(3, 2) - 1,
                "levi_civita(1,o,p,0)(3,2)");
  test_for_zero(levi_civita(1, o, p, 0)(3, 3), "levi_civita(1,o,p,0)(3,3)");

  test_for_zero(levi_civita(1, o, p, 1)(0, 0), "levi_civita(1,o,p,1)(0,0)");
  test_for_zero(levi_civita(1, o, p, 1)(0, 1), "levi_civita(1,o,p,1)(0,1)");
  test_for_zero(levi_civita(1, o, p, 1)(0, 2), "levi_civita(1,o,p,1)(0,2)");
  test_for_zero(levi_civita(1, o, p, 1)(0, 3), "levi_civita(1,o,p,1)(0,3)");
  test_for_zero(levi_civita(1, o, p, 1)(1, 0), "levi_civita(1,o,p,1)(1,0)");
  test_for_zero(levi_civita(1, o, p, 1)(1, 1), "levi_civita(1,o,p,1)(1,1)");
  test_for_zero(levi_civita(1, o, p, 1)(1, 2), "levi_civita(1,o,p,1)(1,2)");
  test_for_zero(levi_civita(1, o, p, 1)(1, 3), "levi_civita(1,o,p,1)(1,3)");
  test_for_zero(levi_civita(1, o, p, 1)(2, 0), "levi_civita(1,o,p,1)(2,0)");
  test_for_zero(levi_civita(1, o, p, 1)(2, 1), "levi_civita(1,o,p,1)(2,1)");
  test_for_zero(levi_civita(1, o, p, 1)(2, 2), "levi_civita(1,o,p,1)(2,2)");
  test_for_zero(levi_civita(1, o, p, 1)(2, 3), "levi_civita(1,o,p,1)(2,3)");
  test_for_zero(levi_civita(1, o, p, 1)(3, 0), "levi_civita(1,o,p,1)(3,0)");
  test_for_zero(levi_civita(1, o, p, 1)(3, 1), "levi_civita(1,o,p,1)(3,1)");
  test_for_zero(levi_civita(1, o, p, 1)(3, 2), "levi_civita(1,o,p,1)(3,2)");
  test_for_zero(levi_civita(1, o, p, 1)(3, 3), "levi_civita(1,o,p,1)(3,3)");

  test_for_zero(levi_civita(1, o, p, 2)(0, 0), "levi_civita(1,o,p,2)(0,0)");
  test_for_zero(levi_civita(1, o, p, 2)(0, 1), "levi_civita(1,o,p,2)(0,1)");
  test_for_zero(levi_civita(1, o, p, 2)(0, 2), "levi_civita(1,o,p,2)(0,2)");
  test_for_zero(levi_civita(1, o, p, 2)(0, 3) - 1,
                "levi_civita(1,o,p,2)(0,3)");
  test_for_zero(levi_civita(1, o, p, 2)(1, 0), "levi_civita(1,o,p,2)(1,0)");
  test_for_zero(levi_civita(1, o, p, 2)(1, 1), "levi_civita(1,o,p,2)(1,1)");
  test_for_zero(levi_civita(1, o, p, 2)(1, 2), "levi_civita(1,o,p,2)(1,2)");
  test_for_zero(levi_civita(1, o, p, 2)(1, 3), "levi_civita(1,o,p,2)(1,3)");
  test_for_zero(levi_civita(1, o, p, 2)(2, 0), "levi_civita(1,o,p,2)(2,0)");
  test_for_zero(levi_civita(1, o, p, 2)(2, 1), "levi_civita(1,o,p,2)(2,1)");
  test_for_zero(levi_civita(1, o, p, 2)(2, 2), "levi_civita(1,o,p,2)(2,2)");
  test_for_zero(levi_civita(1, o, p, 2)(2, 3), "levi_civita(1,o,p,2)(2,3)");
  test_for_zero(levi_civita(1, o, p, 2)(3, 0) + 1,
                "levi_civita(1,o,p,2)(3,0)");
  test_for_zero(levi_civita(1, o, p, 2)(3, 1), "levi_civita(1,o,p,2)(3,1)");
  test_for_zero(levi_civita(1, o, p, 2)(3, 2), "levi_civita(1,o,p,2)(3,2)");
  test_for_zero(levi_civita(1, o, p, 2)(3, 3), "levi_civita(1,o,p,2)(3,3)");

  test_for_zero(levi_civita(1, o, p, 3)(0, 0), "levi_civita(1,o,p,3)(0,0)");
  test_for_zero(levi_civita(1, o, p, 3)(0, 1), "levi_civita(1,o,p,3)(0,1)");
  test_for_zero(levi_civita(1, o, p, 3)(0, 2) + 1,
                "levi_civita(1,o,p,3)(0,2)");
  test_for_zero(levi_civita(1, o, p, 3)(0, 3), "levi_civita(1,o,p,3)(0,3)");
  test_for_zero(levi_civita(1, o, p, 3)(1, 0), "levi_civita(1,o,p,3)(1,0)");
  test_for_zero(levi_civita(1, o, p, 3)(1, 1), "levi_civita(1,o,p,3)(1,1)");
  test_for_zero(levi_civita(1, o, p, 3)(1, 2), "levi_civita(1,o,p,3)(1,2)");
  test_for_zero(levi_civita(1, o, p, 3)(1, 3), "levi_civita(1,o,p,3)(1,3)");
  test_for_zero(levi_civita(1, o, p, 3)(2, 0) - 1,
                "levi_civita(1,o,p,3)(2,0)");
  test_for_zero(levi_civita(1, o, p, 3)(2, 1), "levi_civita(1,o,p,3)(2,1)");
  test_for_zero(levi_civita(1, o, p, 3)(2, 2), "levi_civita(1,o,p,3)(2,2)");
  test_for_zero(levi_civita(1, o, p, 3)(2, 3), "levi_civita(1,o,p,3)(2,3)");
  test_for_zero(levi_civita(1, o, p, 3)(3, 0), "levi_civita(1,o,p,3)(3,0)");
  test_for_zero(levi_civita(1, o, p, 3)(3, 1), "levi_civita(1,o,p,3)(3,1)");
  test_for_zero(levi_civita(1, o, p, 3)(3, 2), "levi_civita(1,o,p,3)(3,2)");
  test_for_zero(levi_civita(1, o, p, 3)(3, 3), "levi_civita(1,o,p,3)(3,3)");

  test_for_zero(levi_civita(2, o, p, 0)(0, 0), "levi_civita(2,o,p,0)(0,0)");
  test_for_zero(levi_civita(2, o, p, 0)(0, 1), "levi_civita(2,o,p,0)(0,1)");
  test_for_zero(levi_civita(2, o, p, 0)(0, 2), "levi_civita(2,o,p,0)(0,2)");
  test_for_zero(levi_civita(2, o, p, 0)(0, 3), "levi_civita(2,o,p,0)(0,3)");
  test_for_zero(levi_civita(2, o, p, 0)(1, 0), "levi_civita(2,o,p,0)(1,0)");
  test_for_zero(levi_civita(2, o, p, 0)(1, 1), "levi_civita(2,o,p,0)(1,1)");
  test_for_zero(levi_civita(2, o, p, 0)(1, 2), "levi_civita(2,o,p,0)(1,2)");
  test_for_zero(levi_civita(2, o, p, 0)(1, 3) - 1,
                "levi_civita(2,o,p,0)(1,3)");
  test_for_zero(levi_civita(2, o, p, 0)(2, 0), "levi_civita(2,o,p,0)(2,0)");
  test_for_zero(levi_civita(2, o, p, 0)(2, 1), "levi_civita(2,o,p,0)(2,1)");
  test_for_zero(levi_civita(2, o, p, 0)(2, 2), "levi_civita(2,o,p,0)(2,2)");
  test_for_zero(levi_civita(2, o, p, 0)(2, 3), "levi_civita(2,o,p,0)(2,3)");
  test_for_zero(levi_civita(2, o, p, 0)(3, 0), "levi_civita(2,o,p,0)(3,0)");
  test_for_zero(levi_civita(2, o, p, 0)(3, 1) + 1,
                "levi_civita(2,o,p,0)(3,1)");
  test_for_zero(levi_civita(2, o, p, 0)(3, 2), "levi_civita(2,o,p,0)(3,2)");
  test_for_zero(levi_civita(2, o, p, 0)(3, 3), "levi_civita(2,o,p,0)(3,3)");

  test_for_zero(levi_civita(2, o, p, 1)(0, 0), "levi_civita(2,o,p,1)(0,0)");
  test_for_zero(levi_civita(2, o, p, 1)(0, 1), "levi_civita(2,o,p,1)(0,1)");
  test_for_zero(levi_civita(2, o, p, 1)(0, 2), "levi_civita(2,o,p,1)(0,2)");
  test_for_zero(levi_civita(2, o, p, 1)(0, 3) + 1,
                "levi_civita(2,o,p,1)(0,3)");
  test_for_zero(levi_civita(2, o, p, 1)(1, 0), "levi_civita(2,o,p,1)(1,0)");
  test_for_zero(levi_civita(2, o, p, 1)(1, 1), "levi_civita(2,o,p,1)(1,1)");
  test_for_zero(levi_civita(2, o, p, 1)(1, 2), "levi_civita(2,o,p,1)(1,2)");
  test_for_zero(levi_civita(2, o, p, 1)(1, 3), "levi_civita(2,o,p,1)(1,3)");
  test_for_zero(levi_civita(2, o, p, 1)(2, 0), "levi_civita(2,o,p,1)(2,0)");
  test_for_zero(levi_civita(2, o, p, 1)(2, 1), "levi_civita(2,o,p,1)(2,1)");
  test_for_zero(levi_civita(2, o, p, 1)(2, 2), "levi_civita(2,o,p,1)(2,2)");
  test_for_zero(levi_civita(2, o, p, 1)(2, 3), "levi_civita(2,o,p,1)(2,3)");
  test_for_zero(levi_civita(2, o, p, 1)(3, 0) - 1,
                "levi_civita(2,o,p,1)(3,0)");
  test_for_zero(levi_civita(2, o, p, 1)(3, 1), "levi_civita(2,o,p,1)(3,1)");
  test_for_zero(levi_civita(2, o, p, 1)(3, 2), "levi_civita(2,o,p,1)(3,2)");
  test_for_zero(levi_civita(2, o, p, 1)(3, 3), "levi_civita(2,o,p,1)(3,3)");

  test_for_zero(levi_civita(2, o, p, 2)(0, 0), "levi_civita(2,o,p,2)(0,0)");
  test_for_zero(levi_civita(2, o, p, 2)(0, 1), "levi_civita(2,o,p,2)(0,1)");
  test_for_zero(levi_civita(2, o, p, 2)(0, 2), "levi_civita(2,o,p,2)(0,2)");
  test_for_zero(levi_civita(2, o, p, 2)(0, 3), "levi_civita(2,o,p,2)(0,3)");
  test_for_zero(levi_civita(2, o, p, 2)(1, 0), "levi_civita(2,o,p,2)(1,0)");
  test_for_zero(levi_civita(2, o, p, 2)(1, 1), "levi_civita(2,o,p,2)(1,1)");
  test_for_zero(levi_civita(2, o, p, 2)(1, 2), "levi_civita(2,o,p,2)(1,2)");
  test_for_zero(levi_civita(2, o, p, 2)(1, 3), "levi_civita(2,o,p,2)(1,3)");
  test_for_zero(levi_civita(2, o, p, 2)(2, 0), "levi_civita(2,o,p,2)(2,0)");
  test_for_zero(levi_civita(2, o, p, 2)(2, 1), "levi_civita(2,o,p,2)(2,1)");
  test_for_zero(levi_civita(2, o, p, 2)(2, 2), "levi_civita(2,o,p,2)(2,2)");
  test_for_zero(levi_civita(2, o, p, 2)(2, 3), "levi_civita(2,o,p,2)(2,3)");
  test_for_zero(levi_civita(2, o, p, 2)(3, 0), "levi_civita(2,o,p,2)(3,0)");
  test_for_zero(levi_civita(2, o, p, 2)(3, 1), "levi_civita(2,o,p,2)(3,1)");
  test_for_zero(levi_civita(2, o, p, 2)(3, 2), "levi_civita(2,o,p,2)(3,2)");
  test_for_zero(levi_civita(2, o, p, 2)(3, 3), "levi_civita(2,o,p,2)(3,3)");

  test_for_zero(levi_civita(2, o, p, 3)(0, 0), "levi_civita(2,o,p,3)(0,0)");
  test_for_zero(levi_civita(2, o, p, 3)(0, 1) - 1,
                "levi_civita(2,o,p,3)(0,1)");
  test_for_zero(levi_civita(2, o, p, 3)(0, 2), "levi_civita(2,o,p,3)(0,2)");
  test_for_zero(levi_civita(2, o, p, 3)(0, 3), "levi_civita(2,o,p,3)(0,3)");
  test_for_zero(levi_civita(2, o, p, 3)(1, 0) + 1,
                "levi_civita(2,o,p,3)(1,0)");
  test_for_zero(levi_civita(2, o, p, 3)(1, 1), "levi_civita(2,o,p,3)(1,1)");
  test_for_zero(levi_civita(2, o, p, 3)(1, 2), "levi_civita(2,o,p,3)(1,2)");
  test_for_zero(levi_civita(2, o, p, 3)(1, 3), "levi_civita(2,o,p,3)(1,3)");
  test_for_zero(levi_civita(2, o, p, 3)(2, 0), "levi_civita(2,o,p,3)(2,0)");
  test_for_zero(levi_civita(2, o, p, 3)(2, 1), "levi_civita(2,o,p,3)(2,1)");
  test_for_zero(levi_civita(2, o, p, 3)(2, 2), "levi_civita(2,o,p,3)(2,2)");
  test_for_zero(levi_civita(2, o, p, 3)(2, 3), "levi_civita(2,o,p,3)(2,3)");
  test_for_zero(levi_civita(2, o, p, 3)(3, 0), "levi_civita(2,o,p,3)(3,0)");
  test_for_zero(levi_civita(2, o, p, 3)(3, 1), "levi_civita(2,o,p,3)(3,1)");
  test_for_zero(levi_civita(2, o, p, 3)(3, 2), "levi_civita(2,o,p,3)(3,2)");
  test_for_zero(levi_civita(2, o, p, 3)(3, 3), "levi_civita(2,o,p,3)(3,3)");

  test_for_zero(levi_civita(3, o, p, 0)(0, 0), "levi_civita(3,o,p,0)(0,0)");
  test_for_zero(levi_civita(3, o, p, 0)(0, 1), "levi_civita(3,o,p,0)(0,1)");
  test_for_zero(levi_civita(3, o, p, 0)(0, 2), "levi_civita(3,o,p,0)(0,2)");
  test_for_zero(levi_civita(3, o, p, 0)(0, 3), "levi_civita(3,o,p,0)(0,3)");
  test_for_zero(levi_civita(3, o, p, 0)(1, 0), "levi_civita(3,o,p,0)(1,0)");
  test_for_zero(levi_civita(3, o, p, 0)(1, 1), "levi_civita(3,o,p,0)(1,1)");
  test_for_zero(levi_civita(3, o, p, 0)(1, 2) + 1,
                "levi_civita(3,o,p,0)(1,2)");
  test_for_zero(levi_civita(3, o, p, 0)(1, 3), "levi_civita(3,o,p,0)(1,3)");
  test_for_zero(levi_civita(3, o, p, 0)(2, 0), "levi_civita(3,o,p,0)(2,0)");
  test_for_zero(levi_civita(3, o, p, 0)(2, 1) - 1,
                "levi_civita(3,o,p,0)(2,1)");
  test_for_zero(levi_civita(3, o, p, 0)(2, 2), "levi_civita(3,o,p,0)(2,2)");
  test_for_zero(levi_civita(3, o, p, 0)(2, 3), "levi_civita(3,o,p,0)(2,3)");
  test_for_zero(levi_civita(3, o, p, 0)(3, 0), "levi_civita(3,o,p,0)(3,0)");
  test_for_zero(levi_civita(3, o, p, 0)(3, 1), "levi_civita(3,o,p,0)(3,1)");
  test_for_zero(levi_civita(3, o, p, 0)(3, 2), "levi_civita(3,o,p,0)(3,2)");
  test_for_zero(levi_civita(3, o, p, 0)(3, 3), "levi_civita(3,o,p,0)(3,3)");

  test_for_zero(levi_civita(3, o, p, 1)(0, 0), "levi_civita(3,o,p,1)(0,0)");
  test_for_zero(levi_civita(3, o, p, 1)(0, 1), "levi_civita(3,o,p,1)(0,1)");
  test_for_zero(levi_civita(3, o, p, 1)(0, 2) - 1,
                "levi_civita(3,o,p,1)(0,2)");
  test_for_zero(levi_civita(3, o, p, 1)(0, 3), "levi_civita(3,o,p,1)(0,3)");
  test_for_zero(levi_civita(3, o, p, 1)(1, 0), "levi_civita(3,o,p,1)(1,0)");
  test_for_zero(levi_civita(3, o, p, 1)(1, 1), "levi_civita(3,o,p,1)(1,1)");
  test_for_zero(levi_civita(3, o, p, 1)(1, 2), "levi_civita(3,o,p,1)(1,2)");
  test_for_zero(levi_civita(3, o, p, 1)(1, 3), "levi_civita(3,o,p,1)(1,3)");
  test_for_zero(levi_civita(3, o, p, 1)(2, 0) + 1,
                "levi_civita(3,o,p,1)(2,0)");
  test_for_zero(levi_civita(3, o, p, 1)(2, 1), "levi_civita(3,o,p,1)(2,1)");
  test_for_zero(levi_civita(3, o, p, 1)(2, 2), "levi_civita(3,o,p,1)(2,2)");
  test_for_zero(levi_civita(3, o, p, 1)(2, 3), "levi_civita(3,o,p,1)(2,3)");
  test_for_zero(levi_civita(3, o, p, 1)(3, 0), "levi_civita(3,o,p,1)(3,0)");
  test_for_zero(levi_civita(3, o, p, 1)(3, 1), "levi_civita(3,o,p,1)(3,1)");
  test_for_zero(levi_civita(3, o, p, 1)(3, 2), "levi_civita(3,o,p,1)(3,2)");
  test_for_zero(levi_civita(3, o, p, 1)(3, 3), "levi_civita(3,o,p,1)(3,3)");

  test_for_zero(levi_civita(3, o, p, 2)(0, 0), "levi_civita(3,o,p,2)(0,0)");
  test_for_zero(levi_civita(3, o, p, 2)(0, 1) + 1,
                "levi_civita(3,o,p,2)(0,1)");
  test_for_zero(levi_civita(3, o, p, 2)(0, 2), "levi_civita(3,o,p,2)(0,2)");
  test_for_zero(levi_civita(3, o, p, 2)(0, 3), "levi_civita(3,o,p,2)(0,3)");
  test_for_zero(levi_civita(3, o, p, 2)(1, 0) - 1,
                "levi_civita(3,o,p,2)(1,0)");
  test_for_zero(levi_civita(3, o, p, 2)(1, 1), "levi_civita(3,o,p,2)(1,1)");
  test_for_zero(levi_civita(3, o, p, 2)(1, 2), "levi_civita(3,o,p,2)(1,2)");
  test_for_zero(levi_civita(3, o, p, 2)(1, 3), "levi_civita(3,o,p,2)(1,3)");
  test_for_zero(levi_civita(3, o, p, 2)(2, 0), "levi_civita(3,o,p,2)(2,0)");
  test_for_zero(levi_civita(3, o, p, 2)(2, 1), "levi_civita(3,o,p,2)(2,1)");
  test_for_zero(levi_civita(3, o, p, 2)(2, 2), "levi_civita(3,o,p,2)(2,2)");
  test_for_zero(levi_civita(3, o, p, 2)(2, 3), "levi_civita(3,o,p,2)(2,3)");
  test_for_zero(levi_civita(3, o, p, 2)(3, 0), "levi_civita(3,o,p,2)(3,0)");
  test_for_zero(levi_civita(3, o, p, 2)(3, 1), "levi_civita(3,o,p,2)(3,1)");
  test_for_zero(levi_civita(3, o, p, 2)(3, 2), "levi_civita(3,o,p,2)(3,2)");
  test_for_zero(levi_civita(3, o, p, 2)(3, 3), "levi_civita(3,o,p,2)(3,3)");

  test_for_zero(levi_civita(3, o, p, 3)(0, 0), "levi_civita(3,o,p,3)(0,0)");
  test_for_zero(levi_civita(3, o, p, 3)(0, 1), "levi_civita(3,o,p,3)(0,1)");
  test_for_zero(levi_civita(3, o, p, 3)(0, 2), "levi_civita(3,o,p,3)(0,2)");
  test_for_zero(levi_civita(3, o, p, 3)(0, 3), "levi_civita(3,o,p,3)(0,3)");
  test_for_zero(levi_civita(3, o, p, 3)(1, 0), "levi_civita(3,o,p,3)(1,0)");
  test_for_zero(levi_civita(3, o, p, 3)(1, 1), "levi_civita(3,o,p,3)(1,1)");
  test_for_zero(levi_civita(3, o, p, 3)(1, 2), "levi_civita(3,o,p,3)(1,2)");
  test_for_zero(levi_civita(3, o, p, 3)(1, 3), "levi_civita(3,o,p,3)(1,3)");
  test_for_zero(levi_civita(3, o, p, 3)(2, 0), "levi_civita(3,o,p,3)(2,0)");
  test_for_zero(levi_civita(3, o, p, 3)(2, 1), "levi_civita(3,o,p,3)(2,1)");
  test_for_zero(levi_civita(3, o, p, 3)(2, 2), "levi_civita(3,o,p,3)(2,2)");
  test_for_zero(levi_civita(3, o, p, 3)(2, 3), "levi_civita(3,o,p,3)(2,3)");
  test_for_zero(levi_civita(3, o, p, 3)(3, 0), "levi_civita(3,o,p,3)(3,0)");
  test_for_zero(levi_civita(3, o, p, 3)(3, 1), "levi_civita(3,o,p,3)(3,1)");
  test_for_zero(levi_civita(3, o, p, 3)(3, 2), "levi_civita(3,o,p,3)(3,2)");
  test_for_zero(levi_civita(3, o, p, 3)(3, 3), "levi_civita(3,o,p,3)(3,3)");

  test_for_zero(levi_civita(n, 0, 0, q)(0, 0), "levi_civita(n,0,0,q)(0,0)");
  test_for_zero(levi_civita(n, 0, 0, q)(0, 1), "levi_civita(n,0,0,q)(0,1)");
  test_for_zero(levi_civita(n, 0, 0, q)(0, 2), "levi_civita(n,0,0,q)(0,2)");
  test_for_zero(levi_civita(n, 0, 0, q)(0, 3), "levi_civita(n,0,0,q)(0,3)");
  test_for_zero(levi_civita(n, 0, 0, q)(1, 0), "levi_civita(n,0,0,q)(1,0)");
  test_for_zero(levi_civita(n, 0, 0, q)(1, 1), "levi_civita(n,0,0,q)(1,1)");
  test_for_zero(levi_civita(n, 0, 0, q)(1, 2), "levi_civita(n,0,0,q)(1,2)");
  test_for_zero(levi_civita(n, 0, 0, q)(1, 3), "levi_civita(n,0,0,q)(1,3)");
  test_for_zero(levi_civita(n, 0, 0, q)(2, 0), "levi_civita(n,0,0,q)(2,0)");
  test_for_zero(levi_civita(n, 0, 0, q)(2, 1), "levi_civita(n,0,0,q)(2,1)");
  test_for_zero(levi_civita(n, 0, 0, q)(2, 2), "levi_civita(n,0,0,q)(2,2)");
  test_for_zero(levi_civita(n, 0, 0, q)(2, 3), "levi_civita(n,0,0,q)(2,3)");
  test_for_zero(levi_civita(n, 0, 0, q)(3, 0), "levi_civita(n,0,0,q)(3,0)");
  test_for_zero(levi_civita(n, 0, 0, q)(3, 1), "levi_civita(n,0,0,q)(3,1)");
  test_for_zero(levi_civita(n, 0, 0, q)(3, 2), "levi_civita(n,0,0,q)(3,2)");
  test_for_zero(levi_civita(n, 0, 0, q)(3, 3), "levi_civita(n,0,0,q)(3,3)");

  test_for_zero(levi_civita(n, 0, 1, q)(0, 0), "levi_civita(n,0,1,q)(0,0)");
  test_for_zero(levi_civita(n, 0, 1, q)(0, 1), "levi_civita(n,0,1,q)(0,1)");
  test_for_zero(levi_civita(n, 0, 1, q)(0, 2), "levi_civita(n,0,1,q)(0,2)");
  test_for_zero(levi_civita(n, 0, 1, q)(0, 3), "levi_civita(n,0,1,q)(0,3)");
  test_for_zero(levi_civita(n, 0, 1, q)(1, 0), "levi_civita(n,0,1,q)(1,0)");
  test_for_zero(levi_civita(n, 0, 1, q)(1, 1), "levi_civita(n,0,1,q)(1,1)");
  test_for_zero(levi_civita(n, 0, 1, q)(1, 2), "levi_civita(n,0,1,q)(1,2)");
  test_for_zero(levi_civita(n, 0, 1, q)(1, 3), "levi_civita(n,0,1,q)(1,3)");
  test_for_zero(levi_civita(n, 0, 1, q)(2, 0), "levi_civita(n,0,1,q)(2,0)");
  test_for_zero(levi_civita(n, 0, 1, q)(2, 1), "levi_civita(n,0,1,q)(2,1)");
  test_for_zero(levi_civita(n, 0, 1, q)(2, 2), "levi_civita(n,0,1,q)(2,2)");
  test_for_zero(levi_civita(n, 0, 1, q)(2, 3) - 1,
                "levi_civita(n,0,n,1,q)(2,3)");
  test_for_zero(levi_civita(n, 0, 1, q)(3, 0), "levi_civita(n,0,1,q)(3,0)");
  test_for_zero(levi_civita(n, 0, 1, q)(3, 1), "levi_civita(n,0,1,q)(3,1)");
  test_for_zero(levi_civita(n, 0, 1, q)(3, 2) + 1,
                "levi_civita(n,0,1,q)(3,2)");
  test_for_zero(levi_civita(n, 0, 1, q)(3, 3), "levi_civita(n,0,1,q)(3,3)");

  test_for_zero(levi_civita(n, 0, 2, q)(0, 0), "levi_civita(n,0,2,q)(0,0)");
  test_for_zero(levi_civita(n, 0, 2, q)(0, 1), "levi_civita(n,0,2,q)(0,1)");
  test_for_zero(levi_civita(n, 0, 2, q)(0, 2), "levi_civita(n,0,2,q)(0,2)");
  test_for_zero(levi_civita(n, 0, 2, q)(0, 3), "levi_civita(n,0,2,q)(0,3)");
  test_for_zero(levi_civita(n, 0, 2, q)(1, 0), "levi_civita(n,0,2,q)(1,0)");
  test_for_zero(levi_civita(n, 0, 2, q)(1, 1), "levi_civita(n,0,2,q)(1,1)");
  test_for_zero(levi_civita(n, 0, 2, q)(1, 2), "levi_civita(n,0,2,q)(1,2)");
  test_for_zero(levi_civita(n, 0, 2, q)(1, 3) + 1,
                "levi_civita(n,0,2,q)(1,3)");
  test_for_zero(levi_civita(n, 0, 2, q)(2, 0), "levi_civita(n,0,2,q)(2,0)");
  test_for_zero(levi_civita(n, 0, 2, q)(2, 1), "levi_civita(n,0,2,q)(2,1)");
  test_for_zero(levi_civita(n, 0, 2, q)(2, 2), "levi_civita(n,0,2,q)(2,2)");
  test_for_zero(levi_civita(n, 0, 2, q)(2, 3), "levi_civita(n,0,2,q)(2,3)");
  test_for_zero(levi_civita(n, 0, 2, q)(3, 0), "levi_civita(n,0,2,q)(3,0)");
  test_for_zero(levi_civita(n, 0, 2, q)(3, 1) - 1,
                "levi_civita(n,0,2,q)(3,1)");
  test_for_zero(levi_civita(n, 0, 2, q)(3, 2), "levi_civita(n,0,2,q)(3,2)");
  test_for_zero(levi_civita(n, 0, 2, q)(3, 3), "levi_civita(n,0,2,q)(3,3)");

  test_for_zero(levi_civita(n, 0, 3, q)(0, 0), "levi_civita(n,0,3,q)(0,0)");
  test_for_zero(levi_civita(n, 0, 3, q)(0, 1), "levi_civita(n,0,3,q)(0,1)");
  test_for_zero(levi_civita(n, 0, 3, q)(0, 2), "levi_civita(n,0,3,q)(0,2)");
  test_for_zero(levi_civita(n, 0, 3, q)(0, 3), "levi_civita(n,0,3,q)(0,3)");
  test_for_zero(levi_civita(n, 0, 3, q)(1, 0), "levi_civita(n,0,3,q)(1,0)");
  test_for_zero(levi_civita(n, 0, 3, q)(1, 1), "levi_civita(n,0,3,q)(1,1)");
  test_for_zero(levi_civita(n, 0, 3, q)(1, 2) - 1,
                "levi_civita(n,0,3,q)(1,2)");
  test_for_zero(levi_civita(n, 0, 3, q)(1, 3), "levi_civita(n,0,3,q)(1,3)");
  test_for_zero(levi_civita(n, 0, 3, q)(2, 0), "levi_civita(n,0,3,q)(2,0)");
  test_for_zero(levi_civita(n, 0, 3, q)(2, 1) + 1,
                "levi_civita(n,0,3,q)(2,1)");
  test_for_zero(levi_civita(n, 0, 3, q)(2, 2), "levi_civita(n,0,3,q)(2,2)");
  test_for_zero(levi_civita(n, 0, 3, q)(2, 3), "levi_civita(n,0,3,q)(2,3)");
  test_for_zero(levi_civita(n, 0, 3, q)(3, 0), "levi_civita(n,0,3,q)(3,0)");
  test_for_zero(levi_civita(n, 0, 3, q)(3, 1), "levi_civita(n,0,3,q)(3,1)");
  test_for_zero(levi_civita(n, 0, 3, q)(3, 2), "levi_civita(n,0,3,q)(3,2)");
  test_for_zero(levi_civita(n, 0, 3, q)(3, 3), "levi_civita(n,0,3,q)(3,3)");

  test_for_zero(levi_civita(n, 1, 0, q)(0, 0), "levi_civita(n,1,0,q)(0,0)");
  test_for_zero(levi_civita(n, 1, 0, q)(0, 1), "levi_civita(n,1,0,q)(0,1)");
  test_for_zero(levi_civita(n, 1, 0, q)(0, 2), "levi_civita(n,1,0,q)(0,2)");
  test_for_zero(levi_civita(n, 1, 0, q)(0, 3), "levi_civita(n,1,0,q)(0,3)");
  test_for_zero(levi_civita(n, 1, 0, q)(1, 0), "levi_civita(n,1,0,q)(1,0)");
  test_for_zero(levi_civita(n, 1, 0, q)(1, 1), "levi_civita(n,1,0,q)(1,1)");
  test_for_zero(levi_civita(n, 1, 0, q)(1, 2), "levi_civita(n,1,0,q)(1,2)");
  test_for_zero(levi_civita(n, 1, 0, q)(1, 3), "levi_civita(n,1,0,q)(1,3)");
  test_for_zero(levi_civita(n, 1, 0, q)(2, 0), "levi_civita(n,1,0,q)(2,0)");
  test_for_zero(levi_civita(n, 1, 0, q)(2, 1), "levi_civita(n,1,0,q)(2,1)");
  test_for_zero(levi_civita(n, 1, 0, q)(2, 2), "levi_civita(n,1,0,q)(2,2)");
  test_for_zero(levi_civita(n, 1, 0, q)(2, 3) + 1,
                "levi_civita(n,1,0,q)(2,3)");
  test_for_zero(levi_civita(n, 1, 0, q)(3, 0), "levi_civita(n,1,0,q)(3,0)");
  test_for_zero(levi_civita(n, 1, 0, q)(3, 1), "levi_civita(n,1,0,q)(3,1)");
  test_for_zero(levi_civita(n, 1, 0, q)(3, 2) - 1,
                "levi_civita(n,1,0,q)(3,2)");
  test_for_zero(levi_civita(n, 1, 0, q)(3, 3), "levi_civita(n,1,0,q)(3,3)");

  test_for_zero(levi_civita(n, 1, 1, q)(0, 0), "levi_civita(n,1,1,q)(0,0)");
  test_for_zero(levi_civita(n, 1, 1, q)(0, 1), "levi_civita(n,1,1,q)(0,1)");
  test_for_zero(levi_civita(n, 1, 1, q)(0, 2), "levi_civita(n,1,1,q)(0,2)");
  test_for_zero(levi_civita(n, 1, 1, q)(0, 3), "levi_civita(n,1,1,q)(0,3)");
  test_for_zero(levi_civita(n, 1, 1, q)(1, 0), "levi_civita(n,1,1,q)(1,0)");
  test_for_zero(levi_civita(n, 1, 1, q)(1, 1), "levi_civita(n,1,1,q)(1,1)");
  test_for_zero(levi_civita(n, 1, 1, q)(1, 2), "levi_civita(n,1,1,q)(1,2)");
  test_for_zero(levi_civita(n, 1, 1, q)(1, 3), "levi_civita(n,1,1,q)(1,3)");
  test_for_zero(levi_civita(n, 1, 1, q)(2, 0), "levi_civita(n,1,1,q)(2,0)");
  test_for_zero(levi_civita(n, 1, 1, q)(2, 1), "levi_civita(n,1,1,q)(2,1)");
  test_for_zero(levi_civita(n, 1, 1, q)(2, 2), "levi_civita(n,1,1,q)(2,2)");
  test_for_zero(levi_civita(n, 1, 1, q)(2, 3), "levi_civita(n,1,1,q)(2,3)");
  test_for_zero(levi_civita(n, 1, 1, q)(3, 0), "levi_civita(n,1,1,q)(3,0)");
  test_for_zero(levi_civita(n, 1, 1, q)(3, 1), "levi_civita(n,1,1,q)(3,1)");
  test_for_zero(levi_civita(n, 1, 1, q)(3, 2), "levi_civita(n,1,1,q)(3,2)");
  test_for_zero(levi_civita(n, 1, 1, q)(3, 3), "levi_civita(n,1,1,q)(3,3)");

  test_for_zero(levi_civita(n, 1, 2, q)(0, 0), "levi_civita(n,1,2,q)(0,0)");
  test_for_zero(levi_civita(n, 1, 2, q)(0, 1), "levi_civita(n,1,2,q)(0,1)");
  test_for_zero(levi_civita(n, 1, 2, q)(0, 2), "levi_civita(n,1,2,q)(0,2)");
  test_for_zero(levi_civita(n, 1, 2, q)(0, 3) - 1,
                "levi_civita(n,1,2,q)(0,3)");
  test_for_zero(levi_civita(n, 1, 2, q)(1, 0), "levi_civita(n,1,2,q)(1,0)");
  test_for_zero(levi_civita(n, 1, 2, q)(1, 1), "levi_civita(n,1,2,q)(1,1)");
  test_for_zero(levi_civita(n, 1, 2, q)(1, 2), "levi_civita(n,1,2,q)(1,2)");
  test_for_zero(levi_civita(n, 1, 2, q)(1, 3), "levi_civita(n,1,2,q)(1,3)");
  test_for_zero(levi_civita(n, 1, 2, q)(2, 0), "levi_civita(n,1,2,q)(2,0)");
  test_for_zero(levi_civita(n, 1, 2, q)(2, 1), "levi_civita(n,1,2,q)(2,1)");
  test_for_zero(levi_civita(n, 1, 2, q)(2, 2), "levi_civita(n,1,2,q)(2,2)");
  test_for_zero(levi_civita(n, 1, 2, q)(2, 3), "levi_civita(n,1,2,q)(2,3)");
  test_for_zero(levi_civita(n, 1, 2, q)(3, 0) + 1,
                "levi_civita(n,1,2,q)(3,0)");
  test_for_zero(levi_civita(n, 1, 2, q)(3, 1), "levi_civita(n,1,2,q)(3,1)");
  test_for_zero(levi_civita(n, 1, 2, q)(3, 2), "levi_civita(n,1,2,q)(3,2)");
  test_for_zero(levi_civita(n, 1, 2, q)(3, 3), "levi_civita(n,1,2,q)(3,3)");

  test_for_zero(levi_civita(n, 1, 3, q)(0, 0), "levi_civita(n,1,3,q)(0,0)");
  test_for_zero(levi_civita(n, 1, 3, q)(0, 1), "levi_civita(n,1,3,q)(0,1)");
  test_for_zero(levi_civita(n, 1, 3, q)(0, 2) + 1,
                "levi_civita(n,1,3,q)(0,2)");
  test_for_zero(levi_civita(n, 1, 3, q)(0, 3), "levi_civita(n,1,3,q)(0,3)");
  test_for_zero(levi_civita(n, 1, 3, q)(1, 0), "levi_civita(n,1,3,q)(1,0)");
  test_for_zero(levi_civita(n, 1, 3, q)(1, 1), "levi_civita(n,1,3,q)(1,1)");
  test_for_zero(levi_civita(n, 1, 3, q)(1, 2), "levi_civita(n,1,3,q)(1,2)");
  test_for_zero(levi_civita(n, 1, 3, q)(1, 3), "levi_civita(n,1,3,q)(1,3)");
  test_for_zero(levi_civita(n, 1, 3, q)(2, 0) - 1,
                "levi_civita(n,1,3,q)(2,0)");
  test_for_zero(levi_civita(n, 1, 3, q)(2, 1), "levi_civita(n,1,3,q)(2,1)");
  test_for_zero(levi_civita(n, 1, 3, q)(2, 2), "levi_civita(n,1,3,q)(2,2)");
  test_for_zero(levi_civita(n, 1, 3, q)(2, 3), "levi_civita(n,1,3,q)(2,3)");
  test_for_zero(levi_civita(n, 1, 3, q)(3, 0), "levi_civita(n,1,3,q)(3,0)");
  test_for_zero(levi_civita(n, 1, 3, q)(3, 1), "levi_civita(n,1,3,q)(3,1)");
  test_for_zero(levi_civita(n, 1, 3, q)(3, 2), "levi_civita(n,1,3,q)(3,2)");
  test_for_zero(levi_civita(n, 1, 3, q)(3, 3), "levi_civita(n,1,3,q)(3,3)");

  test_for_zero(levi_civita(n, 2, 0, q)(0, 0), "levi_civita(n,2,0,q)(0,0)");
  test_for_zero(levi_civita(n, 2, 0, q)(0, 1), "levi_civita(n,2,0,q)(0,1)");
  test_for_zero(levi_civita(n, 2, 0, q)(0, 2), "levi_civita(n,2,0,q)(0,2)");
  test_for_zero(levi_civita(n, 2, 0, q)(0, 3), "levi_civita(n,2,0,q)(0,3)");
  test_for_zero(levi_civita(n, 2, 0, q)(1, 0), "levi_civita(n,2,0,q)(1,0)");
  test_for_zero(levi_civita(n, 2, 0, q)(1, 1), "levi_civita(n,2,0,q)(1,1)");
  test_for_zero(levi_civita(n, 2, 0, q)(1, 2), "levi_civita(n,2,0,q)(1,2)");
  test_for_zero(levi_civita(n, 2, 0, q)(1, 3) - 1,
                "levi_civita(n,2,0,q)(1,3)");
  test_for_zero(levi_civita(n, 2, 0, q)(2, 0), "levi_civita(n,2,0,q)(2,0)");
  test_for_zero(levi_civita(n, 2, 0, q)(2, 1), "levi_civita(n,2,0,q)(2,1)");
  test_for_zero(levi_civita(n, 2, 0, q)(2, 2), "levi_civita(n,2,0,q)(2,2)");
  test_for_zero(levi_civita(n, 2, 0, q)(2, 3), "levi_civita(n,2,0,q)(2,3)");
  test_for_zero(levi_civita(n, 2, 0, q)(3, 0), "levi_civita(n,2,0,q)(3,0)");
  test_for_zero(levi_civita(n, 2, 0, q)(3, 1) + 1,
                "levi_civita(n,2,0,q)(3,1)");
  test_for_zero(levi_civita(n, 2, 0, q)(3, 2), "levi_civita(n,2,0,q)(3,2)");
  test_for_zero(levi_civita(n, 2, 0, q)(3, 3), "levi_civita(n,2,0,q)(3,3)");

  test_for_zero(levi_civita(n, 2, 1, q)(0, 0), "levi_civita(n,2,1,q)(0,0)");
  test_for_zero(levi_civita(n, 2, 1, q)(0, 1), "levi_civita(n,2,1,q)(0,1)");
  test_for_zero(levi_civita(n, 2, 1, q)(0, 2), "levi_civita(n,2,1,q)(0,2)");
  test_for_zero(levi_civita(n, 2, 1, q)(0, 3) + 1,
                "levi_civita(n,2,1,q)(0,3)");
  test_for_zero(levi_civita(n, 2, 1, q)(1, 0), "levi_civita(n,2,1,q)(1,0)");
  test_for_zero(levi_civita(n, 2, 1, q)(1, 1), "levi_civita(n,2,1,q)(1,1)");
  test_for_zero(levi_civita(n, 2, 1, q)(1, 2), "levi_civita(n,2,1,q)(1,2)");
  test_for_zero(levi_civita(n, 2, 1, q)(1, 3), "levi_civita(n,2,1,q)(1,3)");
  test_for_zero(levi_civita(n, 2, 1, q)(2, 0), "levi_civita(n,2,1,q)(2,0)");
  test_for_zero(levi_civita(n, 2, 1, q)(2, 1), "levi_civita(n,2,1,q)(2,1)");
  test_for_zero(levi_civita(n, 2, 1, q)(2, 2), "levi_civita(n,2,1,q)(2,2)");
  test_for_zero(levi_civita(n, 2, 1, q)(2, 3), "levi_civita(n,2,1,q)(2,3)");
  test_for_zero(levi_civita(n, 2, 1, q)(3, 0) - 1,
                "levi_civita(n,2,1,q)(3,0)");
  test_for_zero(levi_civita(n, 2, 1, q)(3, 1), "levi_civita(n,2,1,q)(3,1)");
  test_for_zero(levi_civita(n, 2, 1, q)(3, 2), "levi_civita(n,2,1,q)(3,2)");
  test_for_zero(levi_civita(n, 2, 1, q)(3, 3), "levi_civita(n,2,1,q)(3,3)");

  test_for_zero(levi_civita(n, 2, 2, q)(0, 0), "levi_civita(n,2,2,q)(0,0)");
  test_for_zero(levi_civita(n, 2, 2, q)(0, 1), "levi_civita(n,2,2,q)(0,1)");
  test_for_zero(levi_civita(n, 2, 2, q)(0, 2), "levi_civita(n,2,2,q)(0,2)");
  test_for_zero(levi_civita(n, 2, 2, q)(0, 3), "levi_civita(n,2,2,q)(0,3)");
  test_for_zero(levi_civita(n, 2, 2, q)(1, 0), "levi_civita(n,2,2,q)(1,0)");
  test_for_zero(levi_civita(n, 2, 2, q)(1, 1), "levi_civita(n,2,2,q)(1,1)");
  test_for_zero(levi_civita(n, 2, 2, q)(1, 2), "levi_civita(n,2,2,q)(1,2)");
  test_for_zero(levi_civita(n, 2, 2, q)(1, 3), "levi_civita(n,2,2,q)(1,3)");
  test_for_zero(levi_civita(n, 2, 2, q)(2, 0), "levi_civita(n,2,2,q)(2,0)");
  test_for_zero(levi_civita(n, 2, 2, q)(2, 1), "levi_civita(n,2,2,q)(2,1)");
  test_for_zero(levi_civita(n, 2, 2, q)(2, 2), "levi_civita(n,2,2,q)(2,2)");
  test_for_zero(levi_civita(n, 2, 2, q)(2, 3), "levi_civita(n,2,2,q)(2,3)");
  test_for_zero(levi_civita(n, 2, 2, q)(3, 0), "levi_civita(n,2,2,q)(3,0)");
  test_for_zero(levi_civita(n, 2, 2, q)(3, 1), "levi_civita(n,2,2,q)(3,1)");
  test_for_zero(levi_civita(n, 2, 2, q)(3, 2), "levi_civita(n,2,2,q)(3,2)");
  test_for_zero(levi_civita(n, 2, 2, q)(3, 3), "levi_civita(n,2,2,q)(3,3)");

  test_for_zero(levi_civita(n, 2, 3, q)(0, 0), "levi_civita(n,2,3,q)(0,0)");
  test_for_zero(levi_civita(n, 2, 3, q)(0, 1) - 1,
                "levi_civita(n,2,3,q)(0,1)");
  test_for_zero(levi_civita(n, 2, 3, q)(0, 2), "levi_civita(n,2,3,q)(0,2)");
  test_for_zero(levi_civita(n, 2, 3, q)(0, 3), "levi_civita(n,2,3,q)(0,3)");
  test_for_zero(levi_civita(n, 2, 3, q)(1, 0) + 1,
                "levi_civita(n,2,3,q)(1,0)");
  test_for_zero(levi_civita(n, 2, 3, q)(1, 1), "levi_civita(n,2,3,q)(1,1)");
  test_for_zero(levi_civita(n, 2, 3, q)(1, 2), "levi_civita(n,2,3,q)(1,2)");
  test_for_zero(levi_civita(n, 2, 3, q)(1, 3), "levi_civita(n,2,3,q)(1,3)");
  test_for_zero(levi_civita(n, 2, 3, q)(2, 0), "levi_civita(n,2,3,q)(2,0)");
  test_for_zero(levi_civita(n, 2, 3, q)(2, 1), "levi_civita(n,2,3,q)(2,1)");
  test_for_zero(levi_civita(n, 2, 3, q)(2, 2), "levi_civita(n,2,3,q)(2,2)");
  test_for_zero(levi_civita(n, 2, 3, q)(2, 3), "levi_civita(n,2,3,q)(2,3)");
  test_for_zero(levi_civita(n, 2, 3, q)(3, 0), "levi_civita(n,2,3,q)(3,0)");
  test_for_zero(levi_civita(n, 2, 3, q)(3, 1), "levi_civita(n,2,3,q)(3,1)");
  test_for_zero(levi_civita(n, 2, 3, q)(3, 2), "levi_civita(n,2,3,q)(3,2)");
  test_for_zero(levi_civita(n, 2, 3, q)(3, 3), "levi_civita(n,2,3,q)(3,3)");

  test_for_zero(levi_civita(n, 3, 0, q)(0, 0), "levi_civita(n,3,0,q)(0,0)");
  test_for_zero(levi_civita(n, 3, 0, q)(0, 1), "levi_civita(n,3,0,q)(0,1)");
  test_for_zero(levi_civita(n, 3, 0, q)(0, 2), "levi_civita(n,3,0,q)(0,2)");
  test_for_zero(levi_civita(n, 3, 0, q)(0, 3), "levi_civita(n,3,0,q)(0,3)");
  test_for_zero(levi_civita(n, 3, 0, q)(1, 0), "levi_civita(n,3,0,q)(1,0)");
  test_for_zero(levi_civita(n, 3, 0, q)(1, 1), "levi_civita(n,3,0,q)(1,1)");
  test_for_zero(levi_civita(n, 3, 0, q)(1, 2) + 1,
                "levi_civita(n,3,0,q)(1,2)");
  test_for_zero(levi_civita(n, 3, 0, q)(1, 3), "levi_civita(n,3,0,q)(1,3)");
  test_for_zero(levi_civita(n, 3, 0, q)(2, 0), "levi_civita(n,3,0,q)(2,0)");
  test_for_zero(levi_civita(n, 3, 0, q)(2, 1) - 1,
                "levi_civita(n,3,0,q)(2,1)");
  test_for_zero(levi_civita(n, 3, 0, q)(2, 2), "levi_civita(n,3,0,q)(2,2)");
  test_for_zero(levi_civita(n, 3, 0, q)(2, 3), "levi_civita(n,3,0,q)(2,3)");
  test_for_zero(levi_civita(n, 3, 0, q)(3, 0), "levi_civita(n,3,0,q)(3,0)");
  test_for_zero(levi_civita(n, 3, 0, q)(3, 1), "levi_civita(n,3,0,q)(3,1)");
  test_for_zero(levi_civita(n, 3, 0, q)(3, 2), "levi_civita(n,3,0,q)(3,2)");
  test_for_zero(levi_civita(n, 3, 0, q)(3, 3), "levi_civita(n,3,0,q)(3,3)");

  test_for_zero(levi_civita(n, 3, 1, q)(0, 0), "levi_civita(n,3,1,q)(0,0)");
  test_for_zero(levi_civita(n, 3, 1, q)(0, 1), "levi_civita(n,3,1,q)(0,1)");
  test_for_zero(levi_civita(n, 3, 1, q)(0, 2) - 1,
                "levi_civita(n,3,1,q)(0,2)");
  test_for_zero(levi_civita(n, 3, 1, q)(0, 3), "levi_civita(n,3,1,q)(0,3)");
  test_for_zero(levi_civita(n, 3, 1, q)(1, 0), "levi_civita(n,3,1,q)(1,0)");
  test_for_zero(levi_civita(n, 3, 1, q)(1, 1), "levi_civita(n,3,1,q)(1,1)");
  test_for_zero(levi_civita(n, 3, 1, q)(1, 2), "levi_civita(n,3,1,q)(1,2)");
  test_for_zero(levi_civita(n, 3, 1, q)(1, 3), "levi_civita(n,3,1,q)(1,3)");
  test_for_zero(levi_civita(n, 3, 1, q)(2, 0) + 1,
                "levi_civita(n,3,1,q)(2,0)");
  test_for_zero(levi_civita(n, 3, 1, q)(2, 1), "levi_civita(n,3,1,q)(2,1)");
  test_for_zero(levi_civita(n, 3, 1, q)(2, 2), "levi_civita(n,3,1,q)(2,2)");
  test_for_zero(levi_civita(n, 3, 1, q)(2, 3), "levi_civita(n,3,1,q)(2,3)");
  test_for_zero(levi_civita(n, 3, 1, q)(3, 0), "levi_civita(n,3,1,q)(3,0)");
  test_for_zero(levi_civita(n, 3, 1, q)(3, 1), "levi_civita(n,3,1,q)(3,1)");
  test_for_zero(levi_civita(n, 3, 1, q)(3, 2), "levi_civita(n,3,1,q)(3,2)");
  test_for_zero(levi_civita(n, 3, 1, q)(3, 3), "levi_civita(n,3,1,q)(3,3)");

  test_for_zero(levi_civita(n, 3, 2, q)(0, 0), "levi_civita(n,3,2,q)(0,0)");
  test_for_zero(levi_civita(n, 3, 2, q)(0, 1) + 1,
                "levi_civita(n,3,2,q)(0,1)");
  test_for_zero(levi_civita(n, 3, 2, q)(0, 2), "levi_civita(n,3,2,q)(0,2)");
  test_for_zero(levi_civita(n, 3, 2, q)(0, 3), "levi_civita(n,3,2,q)(0,3)");
  test_for_zero(levi_civita(n, 3, 2, q)(1, 0) - 1,
                "levi_civita(n,3,2,q)(1,0)");
  test_for_zero(levi_civita(n, 3, 2, q)(1, 1), "levi_civita(n,3,2,q)(1,1)");
  test_for_zero(levi_civita(n, 3, 2, q)(1, 2), "levi_civita(n,3,2,q)(1,2)");
  test_for_zero(levi_civita(n, 3, 2, q)(1, 3), "levi_civita(n,3,2,q)(1,3)");
  test_for_zero(levi_civita(n, 3, 2, q)(2, 0), "levi_civita(n,3,2,q)(2,0)");
  test_for_zero(levi_civita(n, 3, 2, q)(2, 1), "levi_civita(n,3,2,q)(2,1)");
  test_for_zero(levi_civita(n, 3, 2, q)(2, 2), "levi_civita(n,3,2,q)(2,2)");
  test_for_zero(levi_civita(n, 3, 2, q)(2, 3), "levi_civita(n,3,2,q)(2,3)");
  test_for_zero(levi_civita(n, 3, 2, q)(3, 0), "levi_civita(n,3,2,q)(3,0)");
  test_for_zero(levi_civita(n, 3, 2, q)(3, 1), "levi_civita(n,3,2,q)(3,1)");
  test_for_zero(levi_civita(n, 3, 2, q)(3, 2), "levi_civita(n,3,2,q)(3,2)");
  test_for_zero(levi_civita(n, 3, 2, q)(3, 3), "levi_civita(n,3,2,q)(3,3)");

  test_for_zero(levi_civita(n, 3, 3, q)(0, 0), "levi_civita(n,3,3,q)(0,0)");
  test_for_zero(levi_civita(n, 3, 3, q)(0, 1), "levi_civita(n,3,3,q)(0,1)");
  test_for_zero(levi_civita(n, 3, 3, q)(0, 2), "levi_civita(n,3,3,q)(0,2)");
  test_for_zero(levi_civita(n, 3, 3, q)(0, 3), "levi_civita(n,3,3,q)(0,3)");
  test_for_zero(levi_civita(n, 3, 3, q)(1, 0), "levi_civita(n,3,3,q)(1,0)");
  test_for_zero(levi_civita(n, 3, 3, q)(1, 1), "levi_civita(n,3,3,q)(1,1)");
  test_for_zero(levi_civita(n, 3, 3, q)(1, 2), "levi_civita(n,3,3,q)(1,2)");
  test_for_zero(levi_civita(n, 3, 3, q)(1, 3), "levi_civita(n,3,3,q)(1,3)");
  test_for_zero(levi_civita(n, 3, 3, q)(2, 0), "levi_civita(n,3,3,q)(2,0)");
  test_for_zero(levi_civita(n, 3, 3, q)(2, 1), "levi_civita(n,3,3,q)(2,1)");
  test_for_zero(levi_civita(n, 3, 3, q)(2, 2), "levi_civita(n,3,3,q)(2,2)");
  test_for_zero(levi_civita(n, 3, 3, q)(2, 3), "levi_civita(n,3,3,q)(2,3)");
  test_for_zero(levi_civita(n, 3, 3, q)(3, 0), "levi_civita(n,3,3,q)(3,0)");
  test_for_zero(levi_civita(n, 3, 3, q)(3, 1), "levi_civita(n,3,3,q)(3,1)");
  test_for_zero(levi_civita(n, 3, 3, q)(3, 2), "levi_civita(n,3,3,q)(3,2)");
  test_for_zero(levi_civita(n, 3, 3, q)(3, 3), "levi_civita(n,3,3,q)(3,3)");

  test_for_zero(levi_civita(n, 0, p, 0)(0, 0), "levi_civita(n,0,p,0)(0,0)");
  test_for_zero(levi_civita(n, 0, p, 0)(0, 1), "levi_civita(n,0,p,0)(0,1)");
  test_for_zero(levi_civita(n, 0, p, 0)(0, 2), "levi_civita(n,0,p,0)(0,2)");
  test_for_zero(levi_civita(n, 0, p, 0)(0, 3), "levi_civita(n,0,p,0)(0,3)");
  test_for_zero(levi_civita(n, 0, p, 0)(1, 0), "levi_civita(n,0,p,0)(1,0)");
  test_for_zero(levi_civita(n, 0, p, 0)(1, 1), "levi_civita(n,0,p,0)(1,1)");
  test_for_zero(levi_civita(n, 0, p, 0)(1, 2), "levi_civita(n,0,p,0)(1,2)");
  test_for_zero(levi_civita(n, 0, p, 0)(1, 3), "levi_civita(n,0,p,0)(1,3)");
  test_for_zero(levi_civita(n, 0, p, 0)(2, 0), "levi_civita(n,0,p,0)(2,0)");
  test_for_zero(levi_civita(n, 0, p, 0)(2, 1), "levi_civita(n,0,p,0)(2,1)");
  test_for_zero(levi_civita(n, 0, p, 0)(2, 2), "levi_civita(n,0,p,0)(2,2)");
  test_for_zero(levi_civita(n, 0, p, 0)(2, 3), "levi_civita(n,0,p,0)(2,3)");
  test_for_zero(levi_civita(n, 0, p, 0)(3, 0), "levi_civita(n,0,p,0)(3,0)");
  test_for_zero(levi_civita(n, 0, p, 0)(3, 1), "levi_civita(n,0,p,0)(3,1)");
  test_for_zero(levi_civita(n, 0, p, 0)(3, 2), "levi_civita(n,0,p,0)(3,2)");
  test_for_zero(levi_civita(n, 0, p, 0)(3, 3), "levi_civita(n,0,p,0)(3,3)");

  test_for_zero(levi_civita(n, 0, p, 1)(0, 0), "levi_civita(n,0,p,1)(0,0)");
  test_for_zero(levi_civita(n, 0, p, 1)(0, 1), "levi_civita(n,0,p,1)(0,1)");
  test_for_zero(levi_civita(n, 0, p, 1)(0, 2), "levi_civita(n,0,p,1)(0,2)");
  test_for_zero(levi_civita(n, 0, p, 1)(0, 3), "levi_civita(n,0,p,1)(0,3)");
  test_for_zero(levi_civita(n, 0, p, 1)(1, 0), "levi_civita(n,0,p,1)(1,0)");
  test_for_zero(levi_civita(n, 0, p, 1)(1, 1), "levi_civita(n,0,p,1)(1,1)");
  test_for_zero(levi_civita(n, 0, p, 1)(1, 2), "levi_civita(n,0,p,1)(1,2)");
  test_for_zero(levi_civita(n, 0, p, 1)(1, 3), "levi_civita(n,0,p,1)(1,3)");
  test_for_zero(levi_civita(n, 0, p, 1)(2, 0), "levi_civita(n,0,p,1)(2,0)");
  test_for_zero(levi_civita(n, 0, p, 1)(2, 1), "levi_civita(n,0,p,1)(2,1)");
  test_for_zero(levi_civita(n, 0, p, 1)(2, 2), "levi_civita(n,0,p,1)(2,2)");
  test_for_zero(levi_civita(n, 0, p, 1)(2, 3) + 1,
                "levi_civita(n,0,n,1)(2,3)");
  test_for_zero(levi_civita(n, 0, p, 1)(3, 0), "levi_civita(n,0,p,1)(3,0)");
  test_for_zero(levi_civita(n, 0, p, 1)(3, 1), "levi_civita(n,0,p,1)(3,1)");
  test_for_zero(levi_civita(n, 0, p, 1)(3, 2) - 1,
                "levi_civita(n,0,p,1)(3,2)");
  test_for_zero(levi_civita(n, 0, p, 1)(3, 3), "levi_civita(n,0,p,1)(3,3)");

  test_for_zero(levi_civita(n, 0, p, 2)(0, 0), "levi_civita(n,0,p,2)(0,0)");
  test_for_zero(levi_civita(n, 0, p, 2)(0, 1), "levi_civita(n,0,p,2)(0,1)");
  test_for_zero(levi_civita(n, 0, p, 2)(0, 2), "levi_civita(n,0,p,2)(0,2)");
  test_for_zero(levi_civita(n, 0, p, 2)(0, 3), "levi_civita(n,0,p,2)(0,3)");
  test_for_zero(levi_civita(n, 0, p, 2)(1, 0), "levi_civita(n,0,p,2)(1,0)");
  test_for_zero(levi_civita(n, 0, p, 2)(1, 1), "levi_civita(n,0,p,2)(1,1)");
  test_for_zero(levi_civita(n, 0, p, 2)(1, 2), "levi_civita(n,0,p,2)(1,2)");
  test_for_zero(levi_civita(n, 0, p, 2)(1, 3) - 1,
                "levi_civita(n,0,p,2)(1,3)");
  test_for_zero(levi_civita(n, 0, p, 2)(2, 0), "levi_civita(n,0,p,2)(2,0)");
  test_for_zero(levi_civita(n, 0, p, 2)(2, 1), "levi_civita(n,0,p,2)(2,1)");
  test_for_zero(levi_civita(n, 0, p, 2)(2, 2), "levi_civita(n,0,p,2)(2,2)");
  test_for_zero(levi_civita(n, 0, p, 2)(2, 3), "levi_civita(n,0,p,2)(2,3)");
  test_for_zero(levi_civita(n, 0, p, 2)(3, 0), "levi_civita(n,0,p,2)(3,0)");
  test_for_zero(levi_civita(n, 0, p, 2)(3, 1) + 1,
                "levi_civita(n,0,p,2)(3,1)");
  test_for_zero(levi_civita(n, 0, p, 2)(3, 2), "levi_civita(n,0,p,2)(3,2)");
  test_for_zero(levi_civita(n, 0, p, 2)(3, 3), "levi_civita(n,0,p,2)(3,3)");

  test_for_zero(levi_civita(n, 0, p, 3)(0, 0), "levi_civita(n,0,p,3)(0,0)");
  test_for_zero(levi_civita(n, 0, p, 3)(0, 1), "levi_civita(n,0,p,3)(0,1)");
  test_for_zero(levi_civita(n, 0, p, 3)(0, 2), "levi_civita(n,0,p,3)(0,2)");
  test_for_zero(levi_civita(n, 0, p, 3)(0, 3), "levi_civita(n,0,p,3)(0,3)");
  test_for_zero(levi_civita(n, 0, p, 3)(1, 0), "levi_civita(n,0,p,3)(1,0)");
  test_for_zero(levi_civita(n, 0, p, 3)(1, 1), "levi_civita(n,0,p,3)(1,1)");
  test_for_zero(levi_civita(n, 0, p, 3)(1, 2) + 1,
                "levi_civita(n,0,p,3)(1,2)");
  test_for_zero(levi_civita(n, 0, p, 3)(1, 3), "levi_civita(n,0,p,3)(1,3)");
  test_for_zero(levi_civita(n, 0, p, 3)(2, 0), "levi_civita(n,0,p,3)(2,0)");
  test_for_zero(levi_civita(n, 0, p, 3)(2, 1) - 1,
                "levi_civita(n,0,p,3)(2,1)");
  test_for_zero(levi_civita(n, 0, p, 3)(2, 2), "levi_civita(n,0,p,3)(2,2)");
  test_for_zero(levi_civita(n, 0, p, 3)(2, 3), "levi_civita(n,0,p,3)(2,3)");
  test_for_zero(levi_civita(n, 0, p, 3)(3, 0), "levi_civita(n,0,p,3)(3,0)");
  test_for_zero(levi_civita(n, 0, p, 3)(3, 1), "levi_civita(n,0,p,3)(3,1)");
  test_for_zero(levi_civita(n, 0, p, 3)(3, 2), "levi_civita(n,0,p,3)(3,2)");
  test_for_zero(levi_civita(n, 0, p, 3)(3, 3), "levi_civita(n,0,p,3)(3,3)");

  test_for_zero(levi_civita(n, 1, p, 0)(0, 0), "levi_civita(n,1,p,0)(0,0)");
  test_for_zero(levi_civita(n, 1, p, 0)(0, 1), "levi_civita(n,1,p,0)(0,1)");
  test_for_zero(levi_civita(n, 1, p, 0)(0, 2), "levi_civita(n,1,p,0)(0,2)");
  test_for_zero(levi_civita(n, 1, p, 0)(0, 3), "levi_civita(n,1,p,0)(0,3)");
  test_for_zero(levi_civita(n, 1, p, 0)(1, 0), "levi_civita(n,1,p,0)(1,0)");
  test_for_zero(levi_civita(n, 1, p, 0)(1, 1), "levi_civita(n,1,p,0)(1,1)");
  test_for_zero(levi_civita(n, 1, p, 0)(1, 2), "levi_civita(n,1,p,0)(1,2)");
  test_for_zero(levi_civita(n, 1, p, 0)(1, 3), "levi_civita(n,1,p,0)(1,3)");
  test_for_zero(levi_civita(n, 1, p, 0)(2, 0), "levi_civita(n,1,p,0)(2,0)");
  test_for_zero(levi_civita(n, 1, p, 0)(2, 1), "levi_civita(n,1,p,0)(2,1)");
  test_for_zero(levi_civita(n, 1, p, 0)(2, 2), "levi_civita(n,1,p,0)(2,2)");
  test_for_zero(levi_civita(n, 1, p, 0)(2, 3) - 1,
                "levi_civita(n,1,p,0)(2,3)");
  test_for_zero(levi_civita(n, 1, p, 0)(3, 0), "levi_civita(n,1,p,0)(3,0)");
  test_for_zero(levi_civita(n, 1, p, 0)(3, 1), "levi_civita(n,1,p,0)(3,1)");
  test_for_zero(levi_civita(n, 1, p, 0)(3, 2) + 1,
                "levi_civita(n,1,p,0)(3,2)");
  test_for_zero(levi_civita(n, 1, p, 0)(3, 3), "levi_civita(n,1,p,0)(3,3)");

  test_for_zero(levi_civita(n, 1, p, 1)(0, 0), "levi_civita(n,1,p,1)(0,0)");
  test_for_zero(levi_civita(n, 1, p, 1)(0, 1), "levi_civita(n,1,p,1)(0,1)");
  test_for_zero(levi_civita(n, 1, p, 1)(0, 2), "levi_civita(n,1,p,1)(0,2)");
  test_for_zero(levi_civita(n, 1, p, 1)(0, 3), "levi_civita(n,1,p,1)(0,3)");
  test_for_zero(levi_civita(n, 1, p, 1)(1, 0), "levi_civita(n,1,p,1)(1,0)");
  test_for_zero(levi_civita(n, 1, p, 1)(1, 1), "levi_civita(n,1,p,1)(1,1)");
  test_for_zero(levi_civita(n, 1, p, 1)(1, 2), "levi_civita(n,1,p,1)(1,2)");
  test_for_zero(levi_civita(n, 1, p, 1)(1, 3), "levi_civita(n,1,p,1)(1,3)");
  test_for_zero(levi_civita(n, 1, p, 1)(2, 0), "levi_civita(n,1,p,1)(2,0)");
  test_for_zero(levi_civita(n, 1, p, 1)(2, 1), "levi_civita(n,1,p,1)(2,1)");
  test_for_zero(levi_civita(n, 1, p, 1)(2, 2), "levi_civita(n,1,p,1)(2,2)");
  test_for_zero(levi_civita(n, 1, p, 1)(2, 3), "levi_civita(n,1,p,1)(2,3)");
  test_for_zero(levi_civita(n, 1, p, 1)(3, 0), "levi_civita(n,1,p,1)(3,0)");
  test_for_zero(levi_civita(n, 1, p, 1)(3, 1), "levi_civita(n,1,p,1)(3,1)");
  test_for_zero(levi_civita(n, 1, p, 1)(3, 2), "levi_civita(n,1,p,1)(3,2)");
  test_for_zero(levi_civita(n, 1, p, 1)(3, 3), "levi_civita(n,1,p,1)(3,3)");

  test_for_zero(levi_civita(n, 1, p, 2)(0, 0), "levi_civita(n,1,p,2)(0,0)");
  test_for_zero(levi_civita(n, 1, p, 2)(0, 1), "levi_civita(n,1,p,2)(0,1)");
  test_for_zero(levi_civita(n, 1, p, 2)(0, 2), "levi_civita(n,1,p,2)(0,2)");
  test_for_zero(levi_civita(n, 1, p, 2)(0, 3) + 1,
                "levi_civita(n,1,p,2)(0,3)");
  test_for_zero(levi_civita(n, 1, p, 2)(1, 0), "levi_civita(n,1,p,2)(1,0)");
  test_for_zero(levi_civita(n, 1, p, 2)(1, 1), "levi_civita(n,1,p,2)(1,1)");
  test_for_zero(levi_civita(n, 1, p, 2)(1, 2), "levi_civita(n,1,p,2)(1,2)");
  test_for_zero(levi_civita(n, 1, p, 2)(1, 3), "levi_civita(n,1,p,2)(1,3)");
  test_for_zero(levi_civita(n, 1, p, 2)(2, 0), "levi_civita(n,1,p,2)(2,0)");
  test_for_zero(levi_civita(n, 1, p, 2)(2, 1), "levi_civita(n,1,p,2)(2,1)");
  test_for_zero(levi_civita(n, 1, p, 2)(2, 2), "levi_civita(n,1,p,2)(2,2)");
  test_for_zero(levi_civita(n, 1, p, 2)(2, 3), "levi_civita(n,1,p,2)(2,3)");
  test_for_zero(levi_civita(n, 1, p, 2)(3, 0) - 1,
                "levi_civita(n,1,p,2)(3,0)");
  test_for_zero(levi_civita(n, 1, p, 2)(3, 1), "levi_civita(n,1,p,2)(3,1)");
  test_for_zero(levi_civita(n, 1, p, 2)(3, 2), "levi_civita(n,1,p,2)(3,2)");
  test_for_zero(levi_civita(n, 1, p, 2)(3, 3), "levi_civita(n,1,p,2)(3,3)");

  test_for_zero(levi_civita(n, 1, p, 3)(0, 0), "levi_civita(n,1,p,3)(0,0)");
  test_for_zero(levi_civita(n, 1, p, 3)(0, 1), "levi_civita(n,1,p,3)(0,1)");
  test_for_zero(levi_civita(n, 1, p, 3)(0, 2) - 1,
                "levi_civita(n,1,p,3)(0,2)");
  test_for_zero(levi_civita(n, 1, p, 3)(0, 3), "levi_civita(n,1,p,3)(0,3)");
  test_for_zero(levi_civita(n, 1, p, 3)(1, 0), "levi_civita(n,1,p,3)(1,0)");
  test_for_zero(levi_civita(n, 1, p, 3)(1, 1), "levi_civita(n,1,p,3)(1,1)");
  test_for_zero(levi_civita(n, 1, p, 3)(1, 2), "levi_civita(n,1,p,3)(1,2)");
  test_for_zero(levi_civita(n, 1, p, 3)(1, 3), "levi_civita(n,1,p,3)(1,3)");
  test_for_zero(levi_civita(n, 1, p, 3)(2, 0) + 1,
                "levi_civita(n,1,p,3)(2,0)");
  test_for_zero(levi_civita(n, 1, p, 3)(2, 1), "levi_civita(n,1,p,3)(2,1)");
  test_for_zero(levi_civita(n, 1, p, 3)(2, 2), "levi_civita(n,1,p,3)(2,2)");
  test_for_zero(levi_civita(n, 1, p, 3)(2, 3), "levi_civita(n,1,p,3)(2,3)");
  test_for_zero(levi_civita(n, 1, p, 3)(3, 0), "levi_civita(n,1,p,3)(3,0)");
  test_for_zero(levi_civita(n, 1, p, 3)(3, 1), "levi_civita(n,1,p,3)(3,1)");
  test_for_zero(levi_civita(n, 1, p, 3)(3, 2), "levi_civita(n,1,p,3)(3,2)");
  test_for_zero(levi_civita(n, 1, p, 3)(3, 3), "levi_civita(n,1,p,3)(3,3)");

  test_for_zero(levi_civita(n, 2, p, 0)(0, 0), "levi_civita(n,2,p,0)(0,0)");
  test_for_zero(levi_civita(n, 2, p, 0)(0, 1), "levi_civita(n,2,p,0)(0,1)");
  test_for_zero(levi_civita(n, 2, p, 0)(0, 2), "levi_civita(n,2,p,0)(0,2)");
  test_for_zero(levi_civita(n, 2, p, 0)(0, 3), "levi_civita(n,2,p,0)(0,3)");
  test_for_zero(levi_civita(n, 2, p, 0)(1, 0), "levi_civita(n,2,p,0)(1,0)");
  test_for_zero(levi_civita(n, 2, p, 0)(1, 1), "levi_civita(n,2,p,0)(1,1)");
  test_for_zero(levi_civita(n, 2, p, 0)(1, 2), "levi_civita(n,2,p,0)(1,2)");
  test_for_zero(levi_civita(n, 2, p, 0)(1, 3) + 1,
                "levi_civita(n,2,p,0)(1,3)");
  test_for_zero(levi_civita(n, 2, p, 0)(2, 0), "levi_civita(n,2,p,0)(2,0)");
  test_for_zero(levi_civita(n, 2, p, 0)(2, 1), "levi_civita(n,2,p,0)(2,1)");
  test_for_zero(levi_civita(n, 2, p, 0)(2, 2), "levi_civita(n,2,p,0)(2,2)");
  test_for_zero(levi_civita(n, 2, p, 0)(2, 3), "levi_civita(n,2,p,0)(2,3)");
  test_for_zero(levi_civita(n, 2, p, 0)(3, 0), "levi_civita(n,2,p,0)(3,0)");
  test_for_zero(levi_civita(n, 2, p, 0)(3, 1) - 1,
                "levi_civita(n,2,p,0)(3,1)");
  test_for_zero(levi_civita(n, 2, p, 0)(3, 2), "levi_civita(n,2,p,0)(3,2)");
  test_for_zero(levi_civita(n, 2, p, 0)(3, 3), "levi_civita(n,2,p,0)(3,3)");

  test_for_zero(levi_civita(n, 2, p, 1)(0, 0), "levi_civita(n,2,p,1)(0,0)");
  test_for_zero(levi_civita(n, 2, p, 1)(0, 1), "levi_civita(n,2,p,1)(0,1)");
  test_for_zero(levi_civita(n, 2, p, 1)(0, 2), "levi_civita(n,2,p,1)(0,2)");
  test_for_zero(levi_civita(n, 2, p, 1)(0, 3) - 1,
                "levi_civita(n,2,p,1)(0,3)");
  test_for_zero(levi_civita(n, 2, p, 1)(1, 0), "levi_civita(n,2,p,1)(1,0)");
  test_for_zero(levi_civita(n, 2, p, 1)(1, 1), "levi_civita(n,2,p,1)(1,1)");
  test_for_zero(levi_civita(n, 2, p, 1)(1, 2), "levi_civita(n,2,p,1)(1,2)");
  test_for_zero(levi_civita(n, 2, p, 1)(1, 3), "levi_civita(n,2,p,1)(1,3)");
  test_for_zero(levi_civita(n, 2, p, 1)(2, 0), "levi_civita(n,2,p,1)(2,0)");
  test_for_zero(levi_civita(n, 2, p, 1)(2, 1), "levi_civita(n,2,p,1)(2,1)");
  test_for_zero(levi_civita(n, 2, p, 1)(2, 2), "levi_civita(n,2,p,1)(2,2)");
  test_for_zero(levi_civita(n, 2, p, 1)(2, 3), "levi_civita(n,2,p,1)(2,3)");
  test_for_zero(levi_civita(n, 2, p, 1)(3, 0) + 1,
                "levi_civita(n,2,p,1)(3,0)");
  test_for_zero(levi_civita(n, 2, p, 1)(3, 1), "levi_civita(n,2,p,1)(3,1)");
  test_for_zero(levi_civita(n, 2, p, 1)(3, 2), "levi_civita(n,2,p,1)(3,2)");
  test_for_zero(levi_civita(n, 2, p, 1)(3, 3), "levi_civita(n,2,p,1)(3,3)");

  test_for_zero(levi_civita(n, 2, p, 2)(0, 0), "levi_civita(n,2,p,2)(0,0)");
  test_for_zero(levi_civita(n, 2, p, 2)(0, 1), "levi_civita(n,2,p,2)(0,1)");
  test_for_zero(levi_civita(n, 2, p, 2)(0, 2), "levi_civita(n,2,p,2)(0,2)");
  test_for_zero(levi_civita(n, 2, p, 2)(0, 3), "levi_civita(n,2,p,2)(0,3)");
  test_for_zero(levi_civita(n, 2, p, 2)(1, 0), "levi_civita(n,2,p,2)(1,0)");
  test_for_zero(levi_civita(n, 2, p, 2)(1, 1), "levi_civita(n,2,p,2)(1,1)");
  test_for_zero(levi_civita(n, 2, p, 2)(1, 2), "levi_civita(n,2,p,2)(1,2)");
  test_for_zero(levi_civita(n, 2, p, 2)(1, 3), "levi_civita(n,2,p,2)(1,3)");
  test_for_zero(levi_civita(n, 2, p, 2)(2, 0), "levi_civita(n,2,p,2)(2,0)");
  test_for_zero(levi_civita(n, 2, p, 2)(2, 1), "levi_civita(n,2,p,2)(2,1)");
  test_for_zero(levi_civita(n, 2, p, 2)(2, 2), "levi_civita(n,2,p,2)(2,2)");
  test_for_zero(levi_civita(n, 2, p, 2)(2, 3), "levi_civita(n,2,p,2)(2,3)");
  test_for_zero(levi_civita(n, 2, p, 2)(3, 0), "levi_civita(n,2,p,2)(3,0)");
  test_for_zero(levi_civita(n, 2, p, 2)(3, 1), "levi_civita(n,2,p,2)(3,1)");
  test_for_zero(levi_civita(n, 2, p, 2)(3, 2), "levi_civita(n,2,p,2)(3,2)");
  test_for_zero(levi_civita(n, 2, p, 2)(3, 3), "levi_civita(n,2,p,2)(3,3)");

  test_for_zero(levi_civita(n, 2, p, 3)(0, 0), "levi_civita(n,2,p,3)(0,0)");
  test_for_zero(levi_civita(n, 2, p, 3)(0, 1) + 1,
                "levi_civita(n,2,p,3)(0,1)");
  test_for_zero(levi_civita(n, 2, p, 3)(0, 2), "levi_civita(n,2,p,3)(0,2)");
  test_for_zero(levi_civita(n, 2, p, 3)(0, 3), "levi_civita(n,2,p,3)(0,3)");
  test_for_zero(levi_civita(n, 2, p, 3)(1, 0) - 1,
                "levi_civita(n,2,p,3)(1,0)");
  test_for_zero(levi_civita(n, 2, p, 3)(1, 1), "levi_civita(n,2,p,3)(1,1)");
  test_for_zero(levi_civita(n, 2, p, 3)(1, 2), "levi_civita(n,2,p,3)(1,2)");
  test_for_zero(levi_civita(n, 2, p, 3)(1, 3), "levi_civita(n,2,p,3)(1,3)");
  test_for_zero(levi_civita(n, 2, p, 3)(2, 0), "levi_civita(n,2,p,3)(2,0)");
  test_for_zero(levi_civita(n, 2, p, 3)(2, 1), "levi_civita(n,2,p,3)(2,1)");
  test_for_zero(levi_civita(n, 2, p, 3)(2, 2), "levi_civita(n,2,p,3)(2,2)");
  test_for_zero(levi_civita(n, 2, p, 3)(2, 3), "levi_civita(n,2,p,3)(2,3)");
  test_for_zero(levi_civita(n, 2, p, 3)(3, 0), "levi_civita(n,2,p,3)(3,0)");
  test_for_zero(levi_civita(n, 2, p, 3)(3, 1), "levi_civita(n,2,p,3)(3,1)");
  test_for_zero(levi_civita(n, 2, p, 3)(3, 2), "levi_civita(n,2,p,3)(3,2)");
  test_for_zero(levi_civita(n, 2, p, 3)(3, 3), "levi_civita(n,2,p,3)(3,3)");

  test_for_zero(levi_civita(n, 3, p, 0)(0, 0), "levi_civita(n,3,p,0)(0,0)");
  test_for_zero(levi_civita(n, 3, p, 0)(0, 1), "levi_civita(n,3,p,0)(0,1)");
  test_for_zero(levi_civita(n, 3, p, 0)(0, 2), "levi_civita(n,3,p,0)(0,2)");
  test_for_zero(levi_civita(n, 3, p, 0)(0, 3), "levi_civita(n,3,p,0)(0,3)");
  test_for_zero(levi_civita(n, 3, p, 0)(1, 0), "levi_civita(n,3,p,0)(1,0)");
  test_for_zero(levi_civita(n, 3, p, 0)(1, 1), "levi_civita(n,3,p,0)(1,1)");
  test_for_zero(levi_civita(n, 3, p, 0)(1, 2) - 1,
                "levi_civita(n,3,p,0)(1,2)");
  test_for_zero(levi_civita(n, 3, p, 0)(1, 3), "levi_civita(n,3,p,0)(1,3)");
  test_for_zero(levi_civita(n, 3, p, 0)(2, 0), "levi_civita(n,3,p,0)(2,0)");
  test_for_zero(levi_civita(n, 3, p, 0)(2, 1) + 1,
                "levi_civita(n,3,p,0)(2,1)");
  test_for_zero(levi_civita(n, 3, p, 0)(2, 2), "levi_civita(n,3,p,0)(2,2)");
  test_for_zero(levi_civita(n, 3, p, 0)(2, 3), "levi_civita(n,3,p,0)(2,3)");
  test_for_zero(levi_civita(n, 3, p, 0)(3, 0), "levi_civita(n,3,p,0)(3,0)");
  test_for_zero(levi_civita(n, 3, p, 0)(3, 1), "levi_civita(n,3,p,0)(3,1)");
  test_for_zero(levi_civita(n, 3, p, 0)(3, 2), "levi_civita(n,3,p,0)(3,2)");
  test_for_zero(levi_civita(n, 3, p, 0)(3, 3), "levi_civita(n,3,p,0)(3,3)");

  test_for_zero(levi_civita(n, 3, p, 1)(0, 0), "levi_civita(n,3,p,1)(0,0)");
  test_for_zero(levi_civita(n, 3, p, 1)(0, 1), "levi_civita(n,3,p,1)(0,1)");
  test_for_zero(levi_civita(n, 3, p, 1)(0, 2) + 1,
                "levi_civita(n,3,p,1)(0,2)");
  test_for_zero(levi_civita(n, 3, p, 1)(0, 3), "levi_civita(n,3,p,1)(0,3)");
  test_for_zero(levi_civita(n, 3, p, 1)(1, 0), "levi_civita(n,3,p,1)(1,0)");
  test_for_zero(levi_civita(n, 3, p, 1)(1, 1), "levi_civita(n,3,p,1)(1,1)");
  test_for_zero(levi_civita(n, 3, p, 1)(1, 2), "levi_civita(n,3,p,1)(1,2)");
  test_for_zero(levi_civita(n, 3, p, 1)(1, 3), "levi_civita(n,3,p,1)(1,3)");
  test_for_zero(levi_civita(n, 3, p, 1)(2, 0) - 1,
                "levi_civita(n,3,p,1)(2,0)");
  test_for_zero(levi_civita(n, 3, p, 1)(2, 1), "levi_civita(n,3,p,1)(2,1)");
  test_for_zero(levi_civita(n, 3, p, 1)(2, 2), "levi_civita(n,3,p,1)(2,2)");
  test_for_zero(levi_civita(n, 3, p, 1)(2, 3), "levi_civita(n,3,p,1)(2,3)");
  test_for_zero(levi_civita(n, 3, p, 1)(3, 0), "levi_civita(n,3,p,1)(3,0)");
  test_for_zero(levi_civita(n, 3, p, 1)(3, 1), "levi_civita(n,3,p,1)(3,1)");
  test_for_zero(levi_civita(n, 3, p, 1)(3, 2), "levi_civita(n,3,p,1)(3,2)");
  test_for_zero(levi_civita(n, 3, p, 1)(3, 3), "levi_civita(n,3,p,1)(3,3)");

  test_for_zero(levi_civita(n, 3, p, 2)(0, 0), "levi_civita(n,3,p,2)(0,0)");
  test_for_zero(levi_civita(n, 3, p, 2)(0, 1) - 1,
                "levi_civita(n,3,p,2)(0,1)");
  test_for_zero(levi_civita(n, 3, p, 2)(0, 2), "levi_civita(n,3,p,2)(0,2)");
  test_for_zero(levi_civita(n, 3, p, 2)(0, 3), "levi_civita(n,3,p,2)(0,3)");
  test_for_zero(levi_civita(n, 3, p, 2)(1, 0) + 1,
                "levi_civita(n,3,p,2)(1,0)");
  test_for_zero(levi_civita(n, 3, p, 2)(1, 1), "levi_civita(n,3,p,2)(1,1)");
  test_for_zero(levi_civita(n, 3, p, 2)(1, 2), "levi_civita(n,3,p,2)(1,2)");
  test_for_zero(levi_civita(n, 3, p, 2)(1, 3), "levi_civita(n,3,p,2)(1,3)");
  test_for_zero(levi_civita(n, 3, p, 2)(2, 0), "levi_civita(n,3,p,2)(2,0)");
  test_for_zero(levi_civita(n, 3, p, 2)(2, 1), "levi_civita(n,3,p,2)(2,1)");
  test_for_zero(levi_civita(n, 3, p, 2)(2, 2), "levi_civita(n,3,p,2)(2,2)");
  test_for_zero(levi_civita(n, 3, p, 2)(2, 3), "levi_civita(n,3,p,2)(2,3)");
  test_for_zero(levi_civita(n, 3, p, 2)(3, 0), "levi_civita(n,3,p,2)(3,0)");
  test_for_zero(levi_civita(n, 3, p, 2)(3, 1), "levi_civita(n,3,p,2)(3,1)");
  test_for_zero(levi_civita(n, 3, p, 2)(3, 2), "levi_civita(n,3,p,2)(3,2)");
  test_for_zero(levi_civita(n, 3, p, 2)(3, 3), "levi_civita(n,3,p,2)(3,3)");

  test_for_zero(levi_civita(n, 3, p, 3)(0, 0), "levi_civita(n,3,p,3)(0,0)");
  test_for_zero(levi_civita(n, 3, p, 3)(0, 1), "levi_civita(n,3,p,3)(0,1)");
  test_for_zero(levi_civita(n, 3, p, 3)(0, 2), "levi_civita(n,3,p,3)(0,2)");
  test_for_zero(levi_civita(n, 3, p, 3)(0, 3), "levi_civita(n,3,p,3)(0,3)");
  test_for_zero(levi_civita(n, 3, p, 3)(1, 0), "levi_civita(n,3,p,3)(1,0)");
  test_for_zero(levi_civita(n, 3, p, 3)(1, 1), "levi_civita(n,3,p,3)(1,1)");
  test_for_zero(levi_civita(n, 3, p, 3)(1, 2), "levi_civita(n,3,p,3)(1,2)");
  test_for_zero(levi_civita(n, 3, p, 3)(1, 3), "levi_civita(n,3,p,3)(1,3)");
  test_for_zero(levi_civita(n, 3, p, 3)(2, 0), "levi_civita(n,3,p,3)(2,0)");
  test_for_zero(levi_civita(n, 3, p, 3)(2, 1), "levi_civita(n,3,p,3)(2,1)");
  test_for_zero(levi_civita(n, 3, p, 3)(2, 2), "levi_civita(n,3,p,3)(2,2)");
  test_for_zero(levi_civita(n, 3, p, 3)(2, 3), "levi_civita(n,3,p,3)(2,3)");
  test_for_zero(levi_civita(n, 3, p, 3)(3, 0), "levi_civita(n,3,p,3)(3,0)");
  test_for_zero(levi_civita(n, 3, p, 3)(3, 1), "levi_civita(n,3,p,3)(3,1)");
  test_for_zero(levi_civita(n, 3, p, 3)(3, 2), "levi_civita(n,3,p,3)(3,2)");
  test_for_zero(levi_civita(n, 3, p, 3)(3, 3), "levi_civita(n,3,p,3)(3,3)");

  test_for_zero(levi_civita(n, o, 0, 0)(0, 0), "levi_civita(n,o,0,0)(0,0)");
  test_for_zero(levi_civita(n, o, 0, 0)(0, 1), "levi_civita(n,o,0,0)(0,1)");
  test_for_zero(levi_civita(n, o, 0, 0)(0, 2), "levi_civita(n,o,0,0)(0,2)");
  test_for_zero(levi_civita(n, o, 0, 0)(0, 3), "levi_civita(n,o,0,0)(0,3)");
  test_for_zero(levi_civita(n, o, 0, 0)(1, 0), "levi_civita(n,o,0,0)(1,0)");
  test_for_zero(levi_civita(n, o, 0, 0)(1, 1), "levi_civita(n,o,0,0)(1,1)");
  test_for_zero(levi_civita(n, o, 0, 0)(1, 2), "levi_civita(n,o,0,0)(1,2)");
  test_for_zero(levi_civita(n, o, 0, 0)(1, 3), "levi_civita(n,o,0,0)(1,3)");
  test_for_zero(levi_civita(n, o, 0, 0)(2, 0), "levi_civita(n,o,0,0)(2,0)");
  test_for_zero(levi_civita(n, o, 0, 0)(2, 1), "levi_civita(n,o,0,0)(2,1)");
  test_for_zero(levi_civita(n, o, 0, 0)(2, 2), "levi_civita(n,o,0,0)(2,2)");
  test_for_zero(levi_civita(n, o, 0, 0)(2, 3), "levi_civita(n,o,0,0)(2,3)");
  test_for_zero(levi_civita(n, o, 0, 0)(3, 0), "levi_civita(n,o,0,0)(3,0)");
  test_for_zero(levi_civita(n, o, 0, 0)(3, 1), "levi_civita(n,o,0,0)(3,1)");
  test_for_zero(levi_civita(n, o, 0, 0)(3, 2), "levi_civita(n,o,0,0)(3,2)");
  test_for_zero(levi_civita(n, o, 0, 0)(3, 3), "levi_civita(n,o,0,0)(3,3)");

  test_for_zero(levi_civita(n, o, 0, 1)(0, 0), "levi_civita(n,o,0,1)(0,0)");
  test_for_zero(levi_civita(n, o, 0, 1)(0, 1), "levi_civita(n,o,0,1)(0,1)");
  test_for_zero(levi_civita(n, o, 0, 1)(0, 2), "levi_civita(n,o,0,1)(0,2)");
  test_for_zero(levi_civita(n, o, 0, 1)(0, 3), "levi_civita(n,o,0,1)(0,3)");
  test_for_zero(levi_civita(n, o, 0, 1)(1, 0), "levi_civita(n,o,0,1)(1,0)");
  test_for_zero(levi_civita(n, o, 0, 1)(1, 1), "levi_civita(n,o,0,1)(1,1)");
  test_for_zero(levi_civita(n, o, 0, 1)(1, 2), "levi_civita(n,o,0,1)(1,2)");
  test_for_zero(levi_civita(n, o, 0, 1)(1, 3), "levi_civita(n,o,0,1)(1,3)");
  test_for_zero(levi_civita(n, o, 0, 1)(2, 0), "levi_civita(n,o,0,1)(2,0)");
  test_for_zero(levi_civita(n, o, 0, 1)(2, 1), "levi_civita(n,o,0,1)(2,1)");
  test_for_zero(levi_civita(n, o, 0, 1)(2, 2), "levi_civita(n,o,0,1)(2,2)");
  test_for_zero(levi_civita(n, o, 0, 1)(2, 3) - 1,
                "levi_civita(n,o,0,n,1)(2,3)");
  test_for_zero(levi_civita(n, o, 0, 1)(3, 0), "levi_civita(n,o,0,1)(3,0)");
  test_for_zero(levi_civita(n, o, 0, 1)(3, 1), "levi_civita(n,o,0,1)(3,1)");
  test_for_zero(levi_civita(n, o, 0, 1)(3, 2) + 1,
                "levi_civita(n,o,0,1)(3,2)");
  test_for_zero(levi_civita(n, o, 0, 1)(3, 3), "levi_civita(n,o,0,1)(3,3)");

  test_for_zero(levi_civita(n, o, 0, 2)(0, 0), "levi_civita(n,o,0,2)(0,0)");
  test_for_zero(levi_civita(n, o, 0, 2)(0, 1), "levi_civita(n,o,0,2)(0,1)");
  test_for_zero(levi_civita(n, o, 0, 2)(0, 2), "levi_civita(n,o,0,2)(0,2)");
  test_for_zero(levi_civita(n, o, 0, 2)(0, 3), "levi_civita(n,o,0,2)(0,3)");
  test_for_zero(levi_civita(n, o, 0, 2)(1, 0), "levi_civita(n,o,0,2)(1,0)");
  test_for_zero(levi_civita(n, o, 0, 2)(1, 1), "levi_civita(n,o,0,2)(1,1)");
  test_for_zero(levi_civita(n, o, 0, 2)(1, 2), "levi_civita(n,o,0,2)(1,2)");
  test_for_zero(levi_civita(n, o, 0, 2)(1, 3) + 1,
                "levi_civita(n,o,0,2)(1,3)");
  test_for_zero(levi_civita(n, o, 0, 2)(2, 0), "levi_civita(n,o,0,2)(2,0)");
  test_for_zero(levi_civita(n, o, 0, 2)(2, 1), "levi_civita(n,o,0,2)(2,1)");
  test_for_zero(levi_civita(n, o, 0, 2)(2, 2), "levi_civita(n,o,0,2)(2,2)");
  test_for_zero(levi_civita(n, o, 0, 2)(2, 3), "levi_civita(n,o,0,2)(2,3)");
  test_for_zero(levi_civita(n, o, 0, 2)(3, 0), "levi_civita(n,o,0,2)(3,0)");
  test_for_zero(levi_civita(n, o, 0, 2)(3, 1) - 1,
                "levi_civita(n,o,0,2)(3,1)");
  test_for_zero(levi_civita(n, o, 0, 2)(3, 2), "levi_civita(n,o,0,2)(3,2)");
  test_for_zero(levi_civita(n, o, 0, 2)(3, 3), "levi_civita(n,o,0,2)(3,3)");

  test_for_zero(levi_civita(n, o, 0, 3)(0, 0), "levi_civita(n,o,0,3)(0,0)");
  test_for_zero(levi_civita(n, o, 0, 3)(0, 1), "levi_civita(n,o,0,3)(0,1)");
  test_for_zero(levi_civita(n, o, 0, 3)(0, 2), "levi_civita(n,o,0,3)(0,2)");
  test_for_zero(levi_civita(n, o, 0, 3)(0, 3), "levi_civita(n,o,0,3)(0,3)");
  test_for_zero(levi_civita(n, o, 0, 3)(1, 0), "levi_civita(n,o,0,3)(1,0)");
  test_for_zero(levi_civita(n, o, 0, 3)(1, 1), "levi_civita(n,o,0,3)(1,1)");
  test_for_zero(levi_civita(n, o, 0, 3)(1, 2) - 1,
                "levi_civita(n,o,0,3)(1,2)");
  test_for_zero(levi_civita(n, o, 0, 3)(1, 3), "levi_civita(n,o,0,3)(1,3)");
  test_for_zero(levi_civita(n, o, 0, 3)(2, 0), "levi_civita(n,o,0,3)(2,0)");
  test_for_zero(levi_civita(n, o, 0, 3)(2, 1) + 1,
                "levi_civita(n,o,0,3)(2,1)");
  test_for_zero(levi_civita(n, o, 0, 3)(2, 2), "levi_civita(n,o,0,3)(2,2)");
  test_for_zero(levi_civita(n, o, 0, 3)(2, 3), "levi_civita(n,o,0,3)(2,3)");
  test_for_zero(levi_civita(n, o, 0, 3)(3, 0), "levi_civita(n,o,0,3)(3,0)");
  test_for_zero(levi_civita(n, o, 0, 3)(3, 1), "levi_civita(n,o,0,3)(3,1)");
  test_for_zero(levi_civita(n, o, 0, 3)(3, 2), "levi_civita(n,o,0,3)(3,2)");
  test_for_zero(levi_civita(n, o, 0, 3)(3, 3), "levi_civita(n,o,0,3)(3,3)");

  test_for_zero(levi_civita(n, o, 1, 0)(0, 0), "levi_civita(n,o,1,0)(0,0)");
  test_for_zero(levi_civita(n, o, 1, 0)(0, 1), "levi_civita(n,o,1,0)(0,1)");
  test_for_zero(levi_civita(n, o, 1, 0)(0, 2), "levi_civita(n,o,1,0)(0,2)");
  test_for_zero(levi_civita(n, o, 1, 0)(0, 3), "levi_civita(n,o,1,0)(0,3)");
  test_for_zero(levi_civita(n, o, 1, 0)(1, 0), "levi_civita(n,o,1,0)(1,0)");
  test_for_zero(levi_civita(n, o, 1, 0)(1, 1), "levi_civita(n,o,1,0)(1,1)");
  test_for_zero(levi_civita(n, o, 1, 0)(1, 2), "levi_civita(n,o,1,0)(1,2)");
  test_for_zero(levi_civita(n, o, 1, 0)(1, 3), "levi_civita(n,o,1,0)(1,3)");
  test_for_zero(levi_civita(n, o, 1, 0)(2, 0), "levi_civita(n,o,1,0)(2,0)");
  test_for_zero(levi_civita(n, o, 1, 0)(2, 1), "levi_civita(n,o,1,0)(2,1)");
  test_for_zero(levi_civita(n, o, 1, 0)(2, 2), "levi_civita(n,o,1,0)(2,2)");
  test_for_zero(levi_civita(n, o, 1, 0)(2, 3) + 1,
                "levi_civita(n,o,1,0)(2,3)");
  test_for_zero(levi_civita(n, o, 1, 0)(3, 0), "levi_civita(n,o,1,0)(3,0)");
  test_for_zero(levi_civita(n, o, 1, 0)(3, 1), "levi_civita(n,o,1,0)(3,1)");
  test_for_zero(levi_civita(n, o, 1, 0)(3, 2) - 1,
                "levi_civita(n,o,1,0)(3,2)");
  test_for_zero(levi_civita(n, o, 1, 0)(3, 3), "levi_civita(n,o,1,0)(3,3)");

  test_for_zero(levi_civita(n, o, 1, 1)(0, 0), "levi_civita(n,o,1,1)(0,0)");
  test_for_zero(levi_civita(n, o, 1, 1)(0, 1), "levi_civita(n,o,1,1)(0,1)");
  test_for_zero(levi_civita(n, o, 1, 1)(0, 2), "levi_civita(n,o,1,1)(0,2)");
  test_for_zero(levi_civita(n, o, 1, 1)(0, 3), "levi_civita(n,o,1,1)(0,3)");
  test_for_zero(levi_civita(n, o, 1, 1)(1, 0), "levi_civita(n,o,1,1)(1,0)");
  test_for_zero(levi_civita(n, o, 1, 1)(1, 1), "levi_civita(n,o,1,1)(1,1)");
  test_for_zero(levi_civita(n, o, 1, 1)(1, 2), "levi_civita(n,o,1,1)(1,2)");
  test_for_zero(levi_civita(n, o, 1, 1)(1, 3), "levi_civita(n,o,1,1)(1,3)");
  test_for_zero(levi_civita(n, o, 1, 1)(2, 0), "levi_civita(n,o,1,1)(2,0)");
  test_for_zero(levi_civita(n, o, 1, 1)(2, 1), "levi_civita(n,o,1,1)(2,1)");
  test_for_zero(levi_civita(n, o, 1, 1)(2, 2), "levi_civita(n,o,1,1)(2,2)");
  test_for_zero(levi_civita(n, o, 1, 1)(2, 3), "levi_civita(n,o,1,1)(2,3)");
  test_for_zero(levi_civita(n, o, 1, 1)(3, 0), "levi_civita(n,o,1,1)(3,0)");
  test_for_zero(levi_civita(n, o, 1, 1)(3, 1), "levi_civita(n,o,1,1)(3,1)");
  test_for_zero(levi_civita(n, o, 1, 1)(3, 2), "levi_civita(n,o,1,1)(3,2)");
  test_for_zero(levi_civita(n, o, 1, 1)(3, 3), "levi_civita(n,o,1,1)(3,3)");

  test_for_zero(levi_civita(n, o, 1, 2)(0, 0), "levi_civita(n,o,1,2)(0,0)");
  test_for_zero(levi_civita(n, o, 1, 2)(0, 1), "levi_civita(n,o,1,2)(0,1)");
  test_for_zero(levi_civita(n, o, 1, 2)(0, 2), "levi_civita(n,o,1,2)(0,2)");
  test_for_zero(levi_civita(n, o, 1, 2)(0, 3) - 1,
                "levi_civita(n,o,1,2)(0,3)");
  test_for_zero(levi_civita(n, o, 1, 2)(1, 0), "levi_civita(n,o,1,2)(1,0)");
  test_for_zero(levi_civita(n, o, 1, 2)(1, 1), "levi_civita(n,o,1,2)(1,1)");
  test_for_zero(levi_civita(n, o, 1, 2)(1, 2), "levi_civita(n,o,1,2)(1,2)");
  test_for_zero(levi_civita(n, o, 1, 2)(1, 3), "levi_civita(n,o,1,2)(1,3)");
  test_for_zero(levi_civita(n, o, 1, 2)(2, 0), "levi_civita(n,o,1,2)(2,0)");
  test_for_zero(levi_civita(n, o, 1, 2)(2, 1), "levi_civita(n,o,1,2)(2,1)");
  test_for_zero(levi_civita(n, o, 1, 2)(2, 2), "levi_civita(n,o,1,2)(2,2)");
  test_for_zero(levi_civita(n, o, 1, 2)(2, 3), "levi_civita(n,o,1,2)(2,3)");
  test_for_zero(levi_civita(n, o, 1, 2)(3, 0) + 1,
                "levi_civita(n,o,1,2)(3,0)");
  test_for_zero(levi_civita(n, o, 1, 2)(3, 1), "levi_civita(n,o,1,2)(3,1)");
  test_for_zero(levi_civita(n, o, 1, 2)(3, 2), "levi_civita(n,o,1,2)(3,2)");
  test_for_zero(levi_civita(n, o, 1, 2)(3, 3), "levi_civita(n,o,1,2)(3,3)");

  test_for_zero(levi_civita(n, o, 1, 3)(0, 0), "levi_civita(n,o,1,3)(0,0)");
  test_for_zero(levi_civita(n, o, 1, 3)(0, 1), "levi_civita(n,o,1,3)(0,1)");
  test_for_zero(levi_civita(n, o, 1, 3)(0, 2) + 1,
                "levi_civita(n,o,1,3)(0,2)");
  test_for_zero(levi_civita(n, o, 1, 3)(0, 3), "levi_civita(n,o,1,3)(0,3)");
  test_for_zero(levi_civita(n, o, 1, 3)(1, 0), "levi_civita(n,o,1,3)(1,0)");
  test_for_zero(levi_civita(n, o, 1, 3)(1, 1), "levi_civita(n,o,1,3)(1,1)");
  test_for_zero(levi_civita(n, o, 1, 3)(1, 2), "levi_civita(n,o,1,3)(1,2)");
  test_for_zero(levi_civita(n, o, 1, 3)(1, 3), "levi_civita(n,o,1,3)(1,3)");
  test_for_zero(levi_civita(n, o, 1, 3)(2, 0) - 1,
                "levi_civita(n,o,1,3)(2,0)");
  test_for_zero(levi_civita(n, o, 1, 3)(2, 1), "levi_civita(n,o,1,3)(2,1)");
  test_for_zero(levi_civita(n, o, 1, 3)(2, 2), "levi_civita(n,o,1,3)(2,2)");
  test_for_zero(levi_civita(n, o, 1, 3)(2, 3), "levi_civita(n,o,1,3)(2,3)");
  test_for_zero(levi_civita(n, o, 1, 3)(3, 0), "levi_civita(n,o,1,3)(3,0)");
  test_for_zero(levi_civita(n, o, 1, 3)(3, 1), "levi_civita(n,o,1,3)(3,1)");
  test_for_zero(levi_civita(n, o, 1, 3)(3, 2), "levi_civita(n,o,1,3)(3,2)");
  test_for_zero(levi_civita(n, o, 1, 3)(3, 3), "levi_civita(n,o,1,3)(3,3)");

  test_for_zero(levi_civita(n, o, 2, 0)(0, 0), "levi_civita(n,o,2,0)(0,0)");
  test_for_zero(levi_civita(n, o, 2, 0)(0, 1), "levi_civita(n,o,2,0)(0,1)");
  test_for_zero(levi_civita(n, o, 2, 0)(0, 2), "levi_civita(n,o,2,0)(0,2)");
  test_for_zero(levi_civita(n, o, 2, 0)(0, 3), "levi_civita(n,o,2,0)(0,3)");
  test_for_zero(levi_civita(n, o, 2, 0)(1, 0), "levi_civita(n,o,2,0)(1,0)");
  test_for_zero(levi_civita(n, o, 2, 0)(1, 1), "levi_civita(n,o,2,0)(1,1)");
  test_for_zero(levi_civita(n, o, 2, 0)(1, 2), "levi_civita(n,o,2,0)(1,2)");
  test_for_zero(levi_civita(n, o, 2, 0)(1, 3) - 1,
                "levi_civita(n,o,2,0)(1,3)");
  test_for_zero(levi_civita(n, o, 2, 0)(2, 0), "levi_civita(n,o,2,0)(2,0)");
  test_for_zero(levi_civita(n, o, 2, 0)(2, 1), "levi_civita(n,o,2,0)(2,1)");
  test_for_zero(levi_civita(n, o, 2, 0)(2, 2), "levi_civita(n,o,2,0)(2,2)");
  test_for_zero(levi_civita(n, o, 2, 0)(2, 3), "levi_civita(n,o,2,0)(2,3)");
  test_for_zero(levi_civita(n, o, 2, 0)(3, 0), "levi_civita(n,o,2,0)(3,0)");
  test_for_zero(levi_civita(n, o, 2, 0)(3, 1) + 1,
                "levi_civita(n,o,2,0)(3,1)");
  test_for_zero(levi_civita(n, o, 2, 0)(3, 2), "levi_civita(n,o,2,0)(3,2)");
  test_for_zero(levi_civita(n, o, 2, 0)(3, 3), "levi_civita(n,o,2,0)(3,3)");

  test_for_zero(levi_civita(n, o, 2, 1)(0, 0), "levi_civita(n,o,2,1)(0,0)");
  test_for_zero(levi_civita(n, o, 2, 1)(0, 1), "levi_civita(n,o,2,1)(0,1)");
  test_for_zero(levi_civita(n, o, 2, 1)(0, 2), "levi_civita(n,o,2,1)(0,2)");
  test_for_zero(levi_civita(n, o, 2, 1)(0, 3) + 1,
                "levi_civita(n,o,2,1)(0,3)");
  test_for_zero(levi_civita(n, o, 2, 1)(1, 0), "levi_civita(n,o,2,1)(1,0)");
  test_for_zero(levi_civita(n, o, 2, 1)(1, 1), "levi_civita(n,o,2,1)(1,1)");
  test_for_zero(levi_civita(n, o, 2, 1)(1, 2), "levi_civita(n,o,2,1)(1,2)");
  test_for_zero(levi_civita(n, o, 2, 1)(1, 3), "levi_civita(n,o,2,1)(1,3)");
  test_for_zero(levi_civita(n, o, 2, 1)(2, 0), "levi_civita(n,o,2,1)(2,0)");
  test_for_zero(levi_civita(n, o, 2, 1)(2, 1), "levi_civita(n,o,2,1)(2,1)");
  test_for_zero(levi_civita(n, o, 2, 1)(2, 2), "levi_civita(n,o,2,1)(2,2)");
  test_for_zero(levi_civita(n, o, 2, 1)(2, 3), "levi_civita(n,o,2,1)(2,3)");
  test_for_zero(levi_civita(n, o, 2, 1)(3, 0) - 1,
                "levi_civita(n,o,2,1)(3,0)");
  test_for_zero(levi_civita(n, o, 2, 1)(3, 1), "levi_civita(n,o,2,1)(3,1)");
  test_for_zero(levi_civita(n, o, 2, 1)(3, 2), "levi_civita(n,o,2,1)(3,2)");
  test_for_zero(levi_civita(n, o, 2, 1)(3, 3), "levi_civita(n,o,2,1)(3,3)");

  test_for_zero(levi_civita(n, o, 2, 2)(0, 0), "levi_civita(n,o,2,2)(0,0)");
  test_for_zero(levi_civita(n, o, 2, 2)(0, 1), "levi_civita(n,o,2,2)(0,1)");
  test_for_zero(levi_civita(n, o, 2, 2)(0, 2), "levi_civita(n,o,2,2)(0,2)");
  test_for_zero(levi_civita(n, o, 2, 2)(0, 3), "levi_civita(n,o,2,2)(0,3)");
  test_for_zero(levi_civita(n, o, 2, 2)(1, 0), "levi_civita(n,o,2,2)(1,0)");
  test_for_zero(levi_civita(n, o, 2, 2)(1, 1), "levi_civita(n,o,2,2)(1,1)");
  test_for_zero(levi_civita(n, o, 2, 2)(1, 2), "levi_civita(n,o,2,2)(1,2)");
  test_for_zero(levi_civita(n, o, 2, 2)(1, 3), "levi_civita(n,o,2,2)(1,3)");
  test_for_zero(levi_civita(n, o, 2, 2)(2, 0), "levi_civita(n,o,2,2)(2,0)");
  test_for_zero(levi_civita(n, o, 2, 2)(2, 1), "levi_civita(n,o,2,2)(2,1)");
  test_for_zero(levi_civita(n, o, 2, 2)(2, 2), "levi_civita(n,o,2,2)(2,2)");
  test_for_zero(levi_civita(n, o, 2, 2)(2, 3), "levi_civita(n,o,2,2)(2,3)");
  test_for_zero(levi_civita(n, o, 2, 2)(3, 0), "levi_civita(n,o,2,2)(3,0)");
  test_for_zero(levi_civita(n, o, 2, 2)(3, 1), "levi_civita(n,o,2,2)(3,1)");
  test_for_zero(levi_civita(n, o, 2, 2)(3, 2), "levi_civita(n,o,2,2)(3,2)");
  test_for_zero(levi_civita(n, o, 2, 2)(3, 3), "levi_civita(n,o,2,2)(3,3)");

  test_for_zero(levi_civita(n, o, 2, 3)(0, 0), "levi_civita(n,o,2,3)(0,0)");
  test_for_zero(levi_civita(n, o, 2, 3)(0, 1) - 1,
                "levi_civita(n,o,2,3)(0,1)");
  test_for_zero(levi_civita(n, o, 2, 3)(0, 2), "levi_civita(n,o,2,3)(0,2)");
  test_for_zero(levi_civita(n, o, 2, 3)(0, 3), "levi_civita(n,o,2,3)(0,3)");
  test_for_zero(levi_civita(n, o, 2, 3)(1, 0) + 1,
                "levi_civita(n,o,2,3)(1,0)");
  test_for_zero(levi_civita(n, o, 2, 3)(1, 1), "levi_civita(n,o,2,3)(1,1)");
  test_for_zero(levi_civita(n, o, 2, 3)(1, 2), "levi_civita(n,o,2,3)(1,2)");
  test_for_zero(levi_civita(n, o, 2, 3)(1, 3), "levi_civita(n,o,2,3)(1,3)");
  test_for_zero(levi_civita(n, o, 2, 3)(2, 0), "levi_civita(n,o,2,3)(2,0)");
  test_for_zero(levi_civita(n, o, 2, 3)(2, 1), "levi_civita(n,o,2,3)(2,1)");
  test_for_zero(levi_civita(n, o, 2, 3)(2, 2), "levi_civita(n,o,2,3)(2,2)");
  test_for_zero(levi_civita(n, o, 2, 3)(2, 3), "levi_civita(n,o,2,3)(2,3)");
  test_for_zero(levi_civita(n, o, 2, 3)(3, 0), "levi_civita(n,o,2,3)(3,0)");
  test_for_zero(levi_civita(n, o, 2, 3)(3, 1), "levi_civita(n,o,2,3)(3,1)");
  test_for_zero(levi_civita(n, o, 2, 3)(3, 2), "levi_civita(n,o,2,3)(3,2)");
  test_for_zero(levi_civita(n, o, 2, 3)(3, 3), "levi_civita(n,o,2,3)(3,3)");

  test_for_zero(levi_civita(n, o, 3, 0)(0, 0), "levi_civita(n,o,3,0)(0,0)");
  test_for_zero(levi_civita(n, o, 3, 0)(0, 1), "levi_civita(n,o,3,0)(0,1)");
  test_for_zero(levi_civita(n, o, 3, 0)(0, 2), "levi_civita(n,o,3,0)(0,2)");
  test_for_zero(levi_civita(n, o, 3, 0)(0, 3), "levi_civita(n,o,3,0)(0,3)");
  test_for_zero(levi_civita(n, o, 3, 0)(1, 0), "levi_civita(n,o,3,0)(1,0)");
  test_for_zero(levi_civita(n, o, 3, 0)(1, 1), "levi_civita(n,o,3,0)(1,1)");
  test_for_zero(levi_civita(n, o, 3, 0)(1, 2) + 1,
                "levi_civita(n,o,3,0)(1,2)");
  test_for_zero(levi_civita(n, o, 3, 0)(1, 3), "levi_civita(n,o,3,0)(1,3)");
  test_for_zero(levi_civita(n, o, 3, 0)(2, 0), "levi_civita(n,o,3,0)(2,0)");
  test_for_zero(levi_civita(n, o, 3, 0)(2, 1) - 1,
                "levi_civita(n,o,3,0)(2,1)");
  test_for_zero(levi_civita(n, o, 3, 0)(2, 2), "levi_civita(n,o,3,0)(2,2)");
  test_for_zero(levi_civita(n, o, 3, 0)(2, 3), "levi_civita(n,o,3,0)(2,3)");
  test_for_zero(levi_civita(n, o, 3, 0)(3, 0), "levi_civita(n,o,3,0)(3,0)");
  test_for_zero(levi_civita(n, o, 3, 0)(3, 1), "levi_civita(n,o,3,0)(3,1)");
  test_for_zero(levi_civita(n, o, 3, 0)(3, 2), "levi_civita(n,o,3,0)(3,2)");
  test_for_zero(levi_civita(n, o, 3, 0)(3, 3), "levi_civita(n,o,3,0)(3,3)");

  test_for_zero(levi_civita(n, o, 3, 1)(0, 0), "levi_civita(n,o,3,1)(0,0)");
  test_for_zero(levi_civita(n, o, 3, 1)(0, 1), "levi_civita(n,o,3,1)(0,1)");
  test_for_zero(levi_civita(n, o, 3, 1)(0, 2) - 1,
                "levi_civita(n,o,3,1)(0,2)");
  test_for_zero(levi_civita(n, o, 3, 1)(0, 3), "levi_civita(n,o,3,1)(0,3)");
  test_for_zero(levi_civita(n, o, 3, 1)(1, 0), "levi_civita(n,o,3,1)(1,0)");
  test_for_zero(levi_civita(n, o, 3, 1)(1, 1), "levi_civita(n,o,3,1)(1,1)");
  test_for_zero(levi_civita(n, o, 3, 1)(1, 2), "levi_civita(n,o,3,1)(1,2)");
  test_for_zero(levi_civita(n, o, 3, 1)(1, 3), "levi_civita(n,o,3,1)(1,3)");
  test_for_zero(levi_civita(n, o, 3, 1)(2, 0) + 1,
                "levi_civita(n,o,3,1)(2,0)");
  test_for_zero(levi_civita(n, o, 3, 1)(2, 1), "levi_civita(n,o,3,1)(2,1)");
  test_for_zero(levi_civita(n, o, 3, 1)(2, 2), "levi_civita(n,o,3,1)(2,2)");
  test_for_zero(levi_civita(n, o, 3, 1)(2, 3), "levi_civita(n,o,3,1)(2,3)");
  test_for_zero(levi_civita(n, o, 3, 1)(3, 0), "levi_civita(n,o,3,1)(3,0)");
  test_for_zero(levi_civita(n, o, 3, 1)(3, 1), "levi_civita(n,o,3,1)(3,1)");
  test_for_zero(levi_civita(n, o, 3, 1)(3, 2), "levi_civita(n,o,3,1)(3,2)");
  test_for_zero(levi_civita(n, o, 3, 1)(3, 3), "levi_civita(n,o,3,1)(3,3)");

  test_for_zero(levi_civita(n, o, 3, 2)(0, 0), "levi_civita(n,o,3,2)(0,0)");
  test_for_zero(levi_civita(n, o, 3, 2)(0, 1) + 1,
                "levi_civita(n,o,3,2)(0,1)");
  test_for_zero(levi_civita(n, o, 3, 2)(0, 2), "levi_civita(n,o,3,2)(0,2)");
  test_for_zero(levi_civita(n, o, 3, 2)(0, 3), "levi_civita(n,o,3,2)(0,3)");
  test_for_zero(levi_civita(n, o, 3, 2)(1, 0) - 1,
                "levi_civita(n,o,3,2)(1,0)");
  test_for_zero(levi_civita(n, o, 3, 2)(1, 1), "levi_civita(n,o,3,2)(1,1)");
  test_for_zero(levi_civita(n, o, 3, 2)(1, 2), "levi_civita(n,o,3,2)(1,2)");
  test_for_zero(levi_civita(n, o, 3, 2)(1, 3), "levi_civita(n,o,3,2)(1,3)");
  test_for_zero(levi_civita(n, o, 3, 2)(2, 0), "levi_civita(n,o,3,2)(2,0)");
  test_for_zero(levi_civita(n, o, 3, 2)(2, 1), "levi_civita(n,o,3,2)(2,1)");
  test_for_zero(levi_civita(n, o, 3, 2)(2, 2), "levi_civita(n,o,3,2)(2,2)");
  test_for_zero(levi_civita(n, o, 3, 2)(2, 3), "levi_civita(n,o,3,2)(2,3)");
  test_for_zero(levi_civita(n, o, 3, 2)(3, 0), "levi_civita(n,o,3,2)(3,0)");
  test_for_zero(levi_civita(n, o, 3, 2)(3, 1), "levi_civita(n,o,3,2)(3,1)");
  test_for_zero(levi_civita(n, o, 3, 2)(3, 2), "levi_civita(n,o,3,2)(3,2)");
  test_for_zero(levi_civita(n, o, 3, 2)(3, 3), "levi_civita(n,o,3,2)(3,3)");

  test_for_zero(levi_civita(n, o, 3, 3)(0, 0), "levi_civita(n,o,3,3)(0,0)");
  test_for_zero(levi_civita(n, o, 3, 3)(0, 1), "levi_civita(n,o,3,3)(0,1)");
  test_for_zero(levi_civita(n, o, 3, 3)(0, 2), "levi_civita(n,o,3,3)(0,2)");
  test_for_zero(levi_civita(n, o, 3, 3)(0, 3), "levi_civita(n,o,3,3)(0,3)");
  test_for_zero(levi_civita(n, o, 3, 3)(1, 0), "levi_civita(n,o,3,3)(1,0)");
  test_for_zero(levi_civita(n, o, 3, 3)(1, 1), "levi_civita(n,o,3,3)(1,1)");
  test_for_zero(levi_civita(n, o, 3, 3)(1, 2), "levi_civita(n,o,3,3)(1,2)");
  test_for_zero(levi_civita(n, o, 3, 3)(1, 3), "levi_civita(n,o,3,3)(1,3)");
  test_for_zero(levi_civita(n, o, 3, 3)(2, 0), "levi_civita(n,o,3,3)(2,0)");
  test_for_zero(levi_civita(n, o, 3, 3)(2, 1), "levi_civita(n,o,3,3)(2,1)");
  test_for_zero(levi_civita(n, o, 3, 3)(2, 2), "levi_civita(n,o,3,3)(2,2)");
  test_for_zero(levi_civita(n, o, 3, 3)(2, 3), "levi_civita(n,o,3,3)(2,3)");
  test_for_zero(levi_civita(n, o, 3, 3)(3, 0), "levi_civita(n,o,3,3)(3,0)");
  test_for_zero(levi_civita(n, o, 3, 3)(3, 1), "levi_civita(n,o,3,3)(3,1)");
  test_for_zero(levi_civita(n, o, 3, 3)(3, 2), "levi_civita(n,o,3,3)(3,2)");
  test_for_zero(levi_civita(n, o, 3, 3)(3, 3), "levi_civita(n,o,3,3)(3,3)");
}
