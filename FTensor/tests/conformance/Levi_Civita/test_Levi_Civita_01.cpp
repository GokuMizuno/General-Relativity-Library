#include "../../../src/FTensor.hpp"
#include "../test_for_zero.hpp"
#include <iostream>
using namespace GRLib;
using namespace std;

void test_Levi_Civita_01()
{
  Index<'i', 2> i;
  Index<'j', 2> j;

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

  /* Test Levi_Civita Rank 2 */
  test_for_zero(levi_civita(i, j)(0, 0), "levi_civita(i,j)(0,0)");
  test_for_zero(levi_civita(i, j)(0, 1) - 1, "levi_civita(i,j)(0,1)");
  test_for_zero(levi_civita(i, j)(1, 0) + 1, "levi_civita(i,j)(1,0)");
  test_for_zero(levi_civita(i, j)(1, 1), "levi_civita(i,j)(1,1)");

  /* Test Levi_Civita Rank 3 */
  test_for_zero(levi_civita(k, l, m)(0, 0, 0), "levi_civita(k,l,m)(0,0,0)");
  test_for_zero(levi_civita(k, l, m)(0, 0, 1), "levi_civita(k,l,m)(0,0,1)");
  test_for_zero(levi_civita(k, l, m)(0, 0, 2), "levi_civita(k,l,m)(0,0,2)");
  test_for_zero(levi_civita(k, l, m)(0, 1, 0), "levi_civita(k,l,m)(0,1,0)");
  test_for_zero(levi_civita(k, l, m)(0, 1, 1), "levi_civita(k,l,m)(0,1,1)");
  test_for_zero(levi_civita(k, l, m)(0, 1, 2) - 1,
                "levi_civita(k,l,m)(0,1,2)");
  test_for_zero(levi_civita(k, l, m)(0, 2, 0), "levi_civita(k,l,m)(0,2,0)");
  test_for_zero(levi_civita(k, l, m)(0, 2, 1) + 1,
                "levi_civita(k,l,m)(0,2,1)");
  test_for_zero(levi_civita(k, l, m)(0, 2, 2), "levi_civita(k,l,m)(0,2,2)");
  test_for_zero(levi_civita(k, l, m)(1, 0, 0), "levi_civita(k,l,m)(1,0,0)");
  test_for_zero(levi_civita(k, l, m)(1, 0, 1), "levi_civita(k,l,m)(1,0,1)");
  test_for_zero(levi_civita(k, l, m)(1, 0, 2) + 1,
                "levi_civita(k,l,m)(1,0,2)");
  test_for_zero(levi_civita(k, l, m)(1, 1, 0), "levi_civita(k,l,m)(1,1,0)");
  test_for_zero(levi_civita(k, l, m)(1, 1, 1), "levi_civita(k,l,m)(1,1,1)");
  test_for_zero(levi_civita(k, l, m)(1, 1, 2), "levi_civita(k,l,m)(1,1,2)");
  test_for_zero(levi_civita(k, l, m)(1, 2, 0) - 1,
                "levi_civita(k,l,m)(1,2,0)");
  test_for_zero(levi_civita(k, l, m)(1, 2, 1), "levi_civita(k,l,m)(1,2,1)");
  test_for_zero(levi_civita(k, l, m)(1, 2, 2), "levi_civita(k,l,m)(1,2,2)");
  test_for_zero(levi_civita(k, l, m)(2, 0, 0), "levi_civita(k,l,m)(2,0,0)");
  test_for_zero(levi_civita(k, l, m)(2, 0, 1) - 1,
                "levi_civita(k,l,m)(2,0,1)");
  test_for_zero(levi_civita(k, l, m)(2, 0, 2), "levi_civita(k,l,m)(2,0,2)");
  test_for_zero(levi_civita(k, l, m)(2, 1, 0) + 1,
                "levi_civita(k,l,m)(2,1,0)");
  test_for_zero(levi_civita(k, l, m)(2, 1, 1), "levi_civita(k,l,m)(2,1,1)");
  test_for_zero(levi_civita(k, l, m)(2, 1, 2), "levi_civita(k,l,m)(2,1,2)");
  test_for_zero(levi_civita(k, l, m)(2, 2, 0), "levi_civita(k,l,m)(2,2,0)");
  test_for_zero(levi_civita(k, l, m)(2, 2, 1), "levi_civita(k,l,m)(2,2,1)");
  test_for_zero(levi_civita(k, l, m)(2, 2, 2), "levi_civita(k,l,m)(2,2,2)");

  /* Test Levi_Civita Rank 4 */
  test_for_zero(levi_civita(n, o, p, q)(0, 0, 0, 0),
                "levi_civita(n,o,p,q)(0,0,0,0)");
  test_for_zero(levi_civita(n, o, p, q)(0, 0, 0, 1),
                "levi_civita(n,o,p,q)(0,0,0,1)");
  test_for_zero(levi_civita(n, o, p, q)(0, 0, 0, 2),
                "levi_civita(n,o,p,q)(0,0,0,2)");
  test_for_zero(levi_civita(n, o, p, q)(0, 0, 0, 3),
                "levi_civita(n,o,p,q)(0,0,0,3)");
  test_for_zero(levi_civita(n, o, p, q)(0, 0, 1, 0),
                "levi_civita(n,o,p,q)(0,0,1,0)");
  test_for_zero(levi_civita(n, o, p, q)(0, 0, 1, 1),
                "levi_civita(n,o,p,q)(0,0,1,1)");
  test_for_zero(levi_civita(n, o, p, q)(0, 0, 1, 2),
                "levi_civita(n,o,p,q)(0,0,1,2)");
  test_for_zero(levi_civita(n, o, p, q)(0, 0, 1, 3),
                "levi_civita(n,o,p,q)(0,0,1,3)");
  test_for_zero(levi_civita(n, o, p, q)(0, 0, 2, 0),
                "levi_civita(n,o,p,q)(0,0,2,0)");
  test_for_zero(levi_civita(n, o, p, q)(0, 0, 2, 1),
                "levi_civita(n,o,p,q)(0,0,2,1)");
  test_for_zero(levi_civita(n, o, p, q)(0, 0, 2, 2),
                "levi_civita(n,o,p,q)(0,0,2,2)");
  test_for_zero(levi_civita(n, o, p, q)(0, 0, 2, 3),
                "levi_civita(n,o,p,q)(0,0,2,3)");
  test_for_zero(levi_civita(n, o, p, q)(0, 0, 3, 0),
                "levi_civita(n,o,p,q)(0,0,3,0)");
  test_for_zero(levi_civita(n, o, p, q)(0, 0, 3, 1),
                "levi_civita(n,o,p,q)(0,0,3,1)");
  test_for_zero(levi_civita(n, o, p, q)(0, 0, 3, 2),
                "levi_civita(n,o,p,q)(0,0,3,2)");
  test_for_zero(levi_civita(n, o, p, q)(0, 0, 3, 3),
                "levi_civita(n,o,p,q)(0,0,3,3)");
  test_for_zero(levi_civita(n, o, p, q)(0, 1, 0, 0),
                "levi_civita(n,o,p,q)(0,1,0,0)");
  test_for_zero(levi_civita(n, o, p, q)(0, 1, 0, 1),
                "levi_civita(n,o,p,q)(0,1,0,1)");
  test_for_zero(levi_civita(n, o, p, q)(0, 1, 0, 2),
                "levi_civita(n,o,p,q)(0,1,0,2)");
  test_for_zero(levi_civita(n, o, p, q)(0, 1, 0, 3),
                "levi_civita(n,o,p,q)(0,1,0,3)");
  test_for_zero(levi_civita(n, o, p, q)(0, 1, 1, 0),
                "levi_civita(n,o,p,q)(0,1,1,0)");
  test_for_zero(levi_civita(n, o, p, q)(0, 1, 1, 1),
                "levi_civita(n,o,p,q)(0,1,1,1)");
  test_for_zero(levi_civita(n, o, p, q)(0, 1, 1, 2),
                "levi_civita(n,o,p,q)(0,1,1,2)");
  test_for_zero(levi_civita(n, o, p, q)(0, 1, 1, 3),
                "levi_civita(n,o,p,q)(0,1,1,3)");
  test_for_zero(levi_civita(n, o, p, q)(0, 1, 2, 0),
                "levi_civita(n,o,p,q)(0,1,2,0)");
  test_for_zero(levi_civita(n, o, p, q)(0, 1, 2, 1),
                "levi_civita(n,o,p,q)(0,1,2,1)");
  test_for_zero(levi_civita(n, o, p, q)(0, 1, 2, 2),
                "levi_civita(n,o,p,q)(0,1,2,2)");
  test_for_zero(levi_civita(n, o, p, q)(0, 1, 2, 3) - 1,
                "levi_civita(n,o,p,q)(0,1,2,3)");
  test_for_zero(levi_civita(n, o, p, q)(0, 1, 3, 0),
                "levi_civita(n,o,p,q)(0,1,3,0)");
  test_for_zero(levi_civita(n, o, p, q)(0, 1, 3, 1),
                "levi_civita(n,o,p,q)(0,1,3,1)");
  test_for_zero(levi_civita(n, o, p, q)(0, 1, 3, 2) + 1,
                "levi_civita(n,o,p,q)(0,1,3,2)");
  test_for_zero(levi_civita(n, o, p, q)(0, 1, 3, 3),
                "levi_civita(n,o,p,q)(0,1,3,3)");
  test_for_zero(levi_civita(n, o, p, q)(0, 2, 0, 0),
                "levi_civita(n,o,p,q)(0,2,0,0)");
  test_for_zero(levi_civita(n, o, p, q)(0, 2, 0, 1),
                "levi_civita(n,o,p,q)(0,2,0,1)");
  test_for_zero(levi_civita(n, o, p, q)(0, 2, 0, 2),
                "levi_civita(n,o,p,q)(0,2,0,2)");
  test_for_zero(levi_civita(n, o, p, q)(0, 2, 0, 3),
                "levi_civita(n,o,p,q)(0,2,0,3)");
  test_for_zero(levi_civita(n, o, p, q)(0, 2, 1, 0),
                "levi_civita(n,o,p,q)(0,2,1,0)");
  test_for_zero(levi_civita(n, o, p, q)(0, 2, 1, 1),
                "levi_civita(n,o,p,q)(0,2,1,1)");
  test_for_zero(levi_civita(n, o, p, q)(0, 2, 1, 2),
                "levi_civita(n,o,p,q)(0,2,1,2)");
  test_for_zero(levi_civita(n, o, p, q)(0, 2, 1, 3) + 1,
                "levi_civita(n,o,p,q)(0,2,1,3)");
  test_for_zero(levi_civita(n, o, p, q)(0, 2, 2, 0),
                "levi_civita(n,o,p,q)(0,2,2,0)");
  test_for_zero(levi_civita(n, o, p, q)(0, 2, 2, 1),
                "levi_civita(n,o,p,q)(0,2,2,1)");
  test_for_zero(levi_civita(n, o, p, q)(0, 2, 2, 2),
                "levi_civita(n,o,p,q)(0,2,2,2)");
  test_for_zero(levi_civita(n, o, p, q)(0, 2, 2, 3),
                "levi_civita(n,o,p,q)(0,2,2,3)");
  test_for_zero(levi_civita(n, o, p, q)(0, 2, 3, 0),
                "levi_civita(n,o,p,q)(0,2,3,0)");
  test_for_zero(levi_civita(n, o, p, q)(0, 2, 3, 1) - 1,
                "levi_civita(n,o,p,q)(0,2,3,1)");
  test_for_zero(levi_civita(n, o, p, q)(0, 2, 3, 2),
                "levi_civita(n,o,p,q)(0,2,3,2)");
  test_for_zero(levi_civita(n, o, p, q)(0, 2, 3, 3),
                "levi_civita(n,o,p,q)(0,2,3,3)");
  test_for_zero(levi_civita(n, o, p, q)(0, 3, 0, 0),
                "levi_civita(n,o,p,q)(0,3,0,0)");
  test_for_zero(levi_civita(n, o, p, q)(0, 3, 0, 1),
                "levi_civita(n,o,p,q)(0,3,0,1)");
  test_for_zero(levi_civita(n, o, p, q)(0, 3, 0, 2),
                "levi_civita(n,o,p,q)(0,3,0,2)");
  test_for_zero(levi_civita(n, o, p, q)(0, 3, 0, 3),
                "levi_civita(n,o,p,q)(0,3,0,3)");
  test_for_zero(levi_civita(n, o, p, q)(0, 3, 1, 0),
                "levi_civita(n,o,p,q)(0,3,1,0)");
  test_for_zero(levi_civita(n, o, p, q)(0, 3, 1, 1),
                "levi_civita(n,o,p,q)(0,3,1,1)");
  test_for_zero(levi_civita(n, o, p, q)(0, 3, 1, 2) - 1,
                "levi_civita(n,o,p,q)(0,3,1,2)");
  test_for_zero(levi_civita(n, o, p, q)(0, 3, 1, 3),
                "levi_civita(n,o,p,q)(0,3,1,3)");
  test_for_zero(levi_civita(n, o, p, q)(0, 3, 2, 0),
                "levi_civita(n,o,p,q)(0,3,2,0)");
  test_for_zero(levi_civita(n, o, p, q)(0, 3, 2, 1) + 1,
                "levi_civita(n,o,p,q)(0,3,2,1)");
  test_for_zero(levi_civita(n, o, p, q)(0, 3, 2, 2),
                "levi_civita(n,o,p,q)(0,3,2,2)");
  test_for_zero(levi_civita(n, o, p, q)(0, 3, 2, 3),
                "levi_civita(n,o,p,q)(0,3,2,3)");
  test_for_zero(levi_civita(n, o, p, q)(0, 3, 3, 0),
                "levi_civita(n,o,p,q)(0,3,3,0)");
  test_for_zero(levi_civita(n, o, p, q)(0, 3, 3, 1),
                "levi_civita(n,o,p,q)(0,3,3,1)");
  test_for_zero(levi_civita(n, o, p, q)(0, 3, 3, 2),
                "levi_civita(n,o,p,q)(0,3,3,2)");
  test_for_zero(levi_civita(n, o, p, q)(0, 3, 3, 3),
                "levi_civita(n,o,p,q)(0,3,3,3)");

  test_for_zero(levi_civita(n, o, p, q)(1, 0, 0, 0),
                "levi_civita(n,o,p,q)(1,0,0,0)");
  test_for_zero(levi_civita(n, o, p, q)(1, 0, 0, 1),
                "levi_civita(n,o,p,q)(1,0,0,1)");
  test_for_zero(levi_civita(n, o, p, q)(1, 0, 0, 2),
                "levi_civita(n,o,p,q)(1,0,0,2)");
  test_for_zero(levi_civita(n, o, p, q)(1, 0, 0, 3),
                "levi_civita(n,o,p,q)(1,0,0,3)");
  test_for_zero(levi_civita(n, o, p, q)(1, 0, 1, 0),
                "levi_civita(n,o,p,q)(1,0,1,0)");
  test_for_zero(levi_civita(n, o, p, q)(1, 0, 1, 1),
                "levi_civita(n,o,p,q)(1,0,1,1)");
  test_for_zero(levi_civita(n, o, p, q)(1, 0, 1, 2),
                "levi_civita(n,o,p,q)(1,0,1,2)");
  test_for_zero(levi_civita(n, o, p, q)(1, 0, 1, 3),
                "levi_civita(n,o,p,q)(1,0,1,3)");
  test_for_zero(levi_civita(n, o, p, q)(1, 0, 2, 0),
                "levi_civita(n,o,p,q)(1,0,2,0)");
  test_for_zero(levi_civita(n, o, p, q)(1, 0, 2, 1),
                "levi_civita(n,o,p,q)(1,0,2,1)");
  test_for_zero(levi_civita(n, o, p, q)(1, 0, 2, 2),
                "levi_civita(n,o,p,q)(1,0,2,2)");
  test_for_zero(levi_civita(n, o, p, q)(1, 0, 2, 3) + 1,
                "levi_civita(n,o,p,q)(1,0,2,3)");
  test_for_zero(levi_civita(n, o, p, q)(1, 0, 3, 0),
                "levi_civita(n,o,p,q)(1,0,3,0)");
  test_for_zero(levi_civita(n, o, p, q)(1, 0, 3, 1),
                "levi_civita(n,o,p,q)(1,0,3,1)");
  test_for_zero(levi_civita(n, o, p, q)(1, 0, 3, 2) - 1,
                "levi_civita(n,o,p,q)(1,0,3,2)");
  test_for_zero(levi_civita(n, o, p, q)(1, 0, 3, 3),
                "levi_civita(n,o,p,q)(1,0,3,3)");
  test_for_zero(levi_civita(n, o, p, q)(1, 1, 0, 0),
                "levi_civita(n,o,p,q)(1,1,0,0)");
  test_for_zero(levi_civita(n, o, p, q)(1, 1, 0, 1),
                "levi_civita(n,o,p,q)(1,1,0,1)");
  test_for_zero(levi_civita(n, o, p, q)(1, 1, 0, 2),
                "levi_civita(n,o,p,q)(1,1,0,2)");
  test_for_zero(levi_civita(n, o, p, q)(1, 1, 0, 3),
                "levi_civita(n,o,p,q)(1,1,0,3)");
  test_for_zero(levi_civita(n, o, p, q)(1, 1, 1, 0),
                "levi_civita(n,o,p,q)(1,1,1,0)");
  test_for_zero(levi_civita(n, o, p, q)(1, 1, 1, 1),
                "levi_civita(n,o,p,q)(1,1,1,1)");
  test_for_zero(levi_civita(n, o, p, q)(1, 1, 1, 2),
                "levi_civita(n,o,p,q)(1,1,1,2)");
  test_for_zero(levi_civita(n, o, p, q)(1, 1, 1, 3),
                "levi_civita(n,o,p,q)(1,1,1,3)");
  test_for_zero(levi_civita(n, o, p, q)(1, 1, 2, 0),
                "levi_civita(n,o,p,q)(1,1,2,0)");
  test_for_zero(levi_civita(n, o, p, q)(1, 1, 2, 1),
                "levi_civita(n,o,p,q)(1,1,2,1)");
  test_for_zero(levi_civita(n, o, p, q)(1, 1, 2, 2),
                "levi_civita(n,o,p,q)(1,1,2,2)");
  test_for_zero(levi_civita(n, o, p, q)(1, 1, 2, 3),
                "levi_civita(n,o,p,q)(1,1,2,3)");
  test_for_zero(levi_civita(n, o, p, q)(1, 1, 3, 0),
                "levi_civita(n,o,p,q)(1,1,3,0)");
  test_for_zero(levi_civita(n, o, p, q)(1, 1, 3, 1),
                "levi_civita(n,o,p,q)(1,1,3,1)");
  test_for_zero(levi_civita(n, o, p, q)(1, 1, 3, 2),
                "levi_civita(n,o,p,q)(1,1,3,2)");
  test_for_zero(levi_civita(n, o, p, q)(1, 1, 3, 3),
                "levi_civita(n,o,p,q)(1,1,3,3)");
  test_for_zero(levi_civita(n, o, p, q)(1, 2, 0, 0),
                "levi_civita(n,o,p,q)(1,2,0,0)");
  test_for_zero(levi_civita(n, o, p, q)(1, 2, 0, 1),
                "levi_civita(n,o,p,q)(1,2,0,1)");
  test_for_zero(levi_civita(n, o, p, q)(1, 2, 0, 2),
                "levi_civita(n,o,p,q)(1,2,0,2)");
  test_for_zero(levi_civita(n, o, p, q)(1, 2, 0, 3) - 1,
                "levi_civita(n,o,p,q)(1,2,0,3)");
  test_for_zero(levi_civita(n, o, p, q)(1, 2, 1, 0),
                "levi_civita(n,o,p,q)(1,2,1,0)");
  test_for_zero(levi_civita(n, o, p, q)(1, 2, 1, 1),
                "levi_civita(n,o,p,q)(1,2,1,1)");
  test_for_zero(levi_civita(n, o, p, q)(1, 2, 1, 2),
                "levi_civita(n,o,p,q)(1,2,1,2)");
  test_for_zero(levi_civita(n, o, p, q)(1, 2, 1, 3),
                "levi_civita(n,o,p,q)(1,2,1,3)");
  test_for_zero(levi_civita(n, o, p, q)(1, 2, 2, 0),
                "levi_civita(n,o,p,q)(1,2,2,0)");
  test_for_zero(levi_civita(n, o, p, q)(1, 2, 2, 1),
                "levi_civita(n,o,p,q)(1,2,2,1)");
  test_for_zero(levi_civita(n, o, p, q)(1, 2, 2, 2),
                "levi_civita(n,o,p,q)(1,2,2,2)");
  test_for_zero(levi_civita(n, o, p, q)(1, 2, 2, 3),
                "levi_civita(n,o,p,q)(1,2,2,3)");
  test_for_zero(levi_civita(n, o, p, q)(1, 2, 3, 0) + 1,
                "levi_civita(n,o,p,q)(1,2,3,0)");
  test_for_zero(levi_civita(n, o, p, q)(1, 2, 3, 1),
                "levi_civita(n,o,p,q)(1,2,3,1)");
  test_for_zero(levi_civita(n, o, p, q)(1, 2, 3, 2),
                "levi_civita(n,o,p,q)(1,2,3,2)");
  test_for_zero(levi_civita(n, o, p, q)(1, 2, 3, 3),
                "levi_civita(n,o,p,q)(1,2,3,3)");
  test_for_zero(levi_civita(n, o, p, q)(1, 3, 0, 0),
                "levi_civita(n,o,p,q)(1,3,0,0)");
  test_for_zero(levi_civita(n, o, p, q)(1, 3, 0, 1),
                "levi_civita(n,o,p,q)(1,3,0,1)");
  test_for_zero(levi_civita(n, o, p, q)(1, 3, 0, 2) + 1,
                "levi_civita(n,o,p,q)(1,3,0,2)");
  test_for_zero(levi_civita(n, o, p, q)(1, 3, 0, 3),
                "levi_civita(n,o,p,q)(1,3,0,3)");
  test_for_zero(levi_civita(n, o, p, q)(1, 3, 1, 0),
                "levi_civita(n,o,p,q)(1,3,1,0)");
  test_for_zero(levi_civita(n, o, p, q)(1, 3, 1, 1),
                "levi_civita(n,o,p,q)(1,3,1,1)");
  test_for_zero(levi_civita(n, o, p, q)(1, 3, 1, 2),
                "levi_civita(n,o,p,q)(1,3,1,2)");
  test_for_zero(levi_civita(n, o, p, q)(1, 3, 1, 3),
                "levi_civita(n,o,p,q)(1,3,1,3)");
  test_for_zero(levi_civita(n, o, p, q)(1, 3, 2, 0) - 1,
                "levi_civita(n,o,p,q)(1,3,2,0)");
  test_for_zero(levi_civita(n, o, p, q)(1, 3, 2, 1),
                "levi_civita(n,o,p,q)(1,3,2,1)");
  test_for_zero(levi_civita(n, o, p, q)(1, 3, 2, 2),
                "levi_civita(n,o,p,q)(1,3,2,2)");
  test_for_zero(levi_civita(n, o, p, q)(1, 3, 2, 3),
                "levi_civita(n,o,p,q)(1,3,2,3)");
  test_for_zero(levi_civita(n, o, p, q)(1, 3, 3, 0),
                "levi_civita(n,o,p,q)(1,3,3,0)");
  test_for_zero(levi_civita(n, o, p, q)(1, 3, 3, 1),
                "levi_civita(n,o,p,q)(1,3,3,1)");
  test_for_zero(levi_civita(n, o, p, q)(1, 3, 3, 2),
                "levi_civita(n,o,p,q)(1,3,3,2)");
  test_for_zero(levi_civita(n, o, p, q)(1, 3, 3, 3),
                "levi_civita(n,o,p,q)(1,3,3,3)");

  test_for_zero(levi_civita(n, o, p, q)(2, 0, 0, 0),
                "levi_civita(n,o,p,q)(2,0,0,0)");
  test_for_zero(levi_civita(n, o, p, q)(2, 0, 0, 1),
                "levi_civita(n,o,p,q)(2,0,0,1)");
  test_for_zero(levi_civita(n, o, p, q)(2, 0, 0, 2),
                "levi_civita(n,o,p,q)(2,0,0,2)");
  test_for_zero(levi_civita(n, o, p, q)(2, 0, 0, 3),
                "levi_civita(n,o,p,q)(2,0,0,3)");
  test_for_zero(levi_civita(n, o, p, q)(2, 0, 1, 0),
                "levi_civita(n,o,p,q)(2,0,1,0)");
  test_for_zero(levi_civita(n, o, p, q)(2, 0, 1, 1),
                "levi_civita(n,o,p,q)(2,0,1,1)");
  test_for_zero(levi_civita(n, o, p, q)(2, 0, 1, 2),
                "levi_civita(n,o,p,q)(2,0,1,2)");
  test_for_zero(levi_civita(n, o, p, q)(2, 0, 1, 3) - 1,
                "levi_civita(n,o,p,q)(2,0,1,3)");
  test_for_zero(levi_civita(n, o, p, q)(2, 0, 2, 0),
                "levi_civita(n,o,p,q)(2,0,2,0)");
  test_for_zero(levi_civita(n, o, p, q)(2, 0, 2, 1),
                "levi_civita(n,o,p,q)(2,0,2,1)");
  test_for_zero(levi_civita(n, o, p, q)(2, 0, 2, 2),
                "levi_civita(n,o,p,q)(2,0,2,2)");
  test_for_zero(levi_civita(n, o, p, q)(2, 0, 2, 3),
                "levi_civita(n,o,p,q)(2,0,2,3)");
  test_for_zero(levi_civita(n, o, p, q)(2, 0, 3, 0),
                "levi_civita(n,o,p,q)(2,0,3,0)");
  test_for_zero(levi_civita(n, o, p, q)(2, 0, 3, 1) + 1,
                "levi_civita(n,o,p,q)(2,0,3,1)");
  test_for_zero(levi_civita(n, o, p, q)(2, 0, 3, 2),
                "levi_civita(n,o,p,q)(2,0,3,2)");
  test_for_zero(levi_civita(n, o, p, q)(2, 0, 3, 3),
                "levi_civita(n,o,p,q)(2,0,3,3)");
  test_for_zero(levi_civita(n, o, p, q)(2, 1, 0, 0),
                "levi_civita(n,o,p,q)(2,1,0,0)");
  test_for_zero(levi_civita(n, o, p, q)(2, 1, 0, 1),
                "levi_civita(n,o,p,q)(2,1,0,1)");
  test_for_zero(levi_civita(n, o, p, q)(2, 1, 0, 2),
                "levi_civita(n,o,p,q)(2,1,0,2)");
  test_for_zero(levi_civita(n, o, p, q)(2, 1, 0, 3) + 1,
                "levi_civita(n,o,p,q)(2,1,0,3)");
  test_for_zero(levi_civita(n, o, p, q)(2, 1, 1, 0),
                "levi_civita(n,o,p,q)(2,1,1,0)");
  test_for_zero(levi_civita(n, o, p, q)(2, 1, 1, 1),
                "levi_civita(n,o,p,q)(2,1,1,1)");
  test_for_zero(levi_civita(n, o, p, q)(2, 1, 1, 2),
                "levi_civita(n,o,p,q)(2,1,1,2)");
  test_for_zero(levi_civita(n, o, p, q)(2, 1, 1, 3),
                "levi_civita(n,o,p,q)(2,1,1,3)");
  test_for_zero(levi_civita(n, o, p, q)(2, 1, 2, 0),
                "levi_civita(n,o,p,q)(2,1,2,0)");
  test_for_zero(levi_civita(n, o, p, q)(2, 1, 2, 1),
                "levi_civita(n,o,p,q)(2,1,2,1)");
  test_for_zero(levi_civita(n, o, p, q)(2, 1, 2, 2),
                "levi_civita(n,o,p,q)(2,1,2,2)");
  test_for_zero(levi_civita(n, o, p, q)(2, 1, 2, 3),
                "levi_civita(n,o,p,q)(2,1,2,3)");
  test_for_zero(levi_civita(n, o, p, q)(2, 1, 3, 0) - 1,
                "levi_civita(n,o,p,q)(2,1,3,0)");
  test_for_zero(levi_civita(n, o, p, q)(2, 1, 3, 1),
                "levi_civita(n,o,p,q)(2,1,3,1)");
  test_for_zero(levi_civita(n, o, p, q)(2, 1, 3, 2),
                "levi_civita(n,o,p,q)(2,1,3,2)");
  test_for_zero(levi_civita(n, o, p, q)(2, 1, 3, 3),
                "levi_civita(n,o,p,q)(2,1,3,3)");
  test_for_zero(levi_civita(n, o, p, q)(2, 2, 0, 0),
                "levi_civita(n,o,p,q)(2,2,0,0)");
  test_for_zero(levi_civita(n, o, p, q)(2, 2, 0, 1),
                "levi_civita(n,o,p,q)(2,2,0,1)");
  test_for_zero(levi_civita(n, o, p, q)(2, 2, 0, 2),
                "levi_civita(n,o,p,q)(2,2,0,2)");
  test_for_zero(levi_civita(n, o, p, q)(2, 2, 0, 3),
                "levi_civita(n,o,p,q)(2,2,0,3)");
  test_for_zero(levi_civita(n, o, p, q)(2, 2, 1, 0),
                "levi_civita(n,o,p,q)(2,2,1,0)");
  test_for_zero(levi_civita(n, o, p, q)(2, 2, 1, 1),
                "levi_civita(n,o,p,q)(2,2,1,1)");
  test_for_zero(levi_civita(n, o, p, q)(2, 2, 1, 2),
                "levi_civita(n,o,p,q)(2,2,1,2)");
  test_for_zero(levi_civita(n, o, p, q)(2, 2, 1, 3),
                "levi_civita(n,o,p,q)(2,2,1,3)");
  test_for_zero(levi_civita(n, o, p, q)(2, 2, 2, 0),
                "levi_civita(n,o,p,q)(2,2,2,0)");
  test_for_zero(levi_civita(n, o, p, q)(2, 2, 2, 1),
                "levi_civita(n,o,p,q)(2,2,2,1)");
  test_for_zero(levi_civita(n, o, p, q)(2, 2, 2, 2),
                "levi_civita(n,o,p,q)(2,2,2,2)");
  test_for_zero(levi_civita(n, o, p, q)(2, 2, 2, 3),
                "levi_civita(n,o,p,q)(2,2,2,3)");
  test_for_zero(levi_civita(n, o, p, q)(2, 2, 3, 0),
                "levi_civita(n,o,p,q)(2,2,3,0)");
  test_for_zero(levi_civita(n, o, p, q)(2, 2, 3, 1),
                "levi_civita(n,o,p,q)(2,2,3,1)");
  test_for_zero(levi_civita(n, o, p, q)(2, 2, 3, 2),
                "levi_civita(n,o,p,q)(2,2,3,2)");
  test_for_zero(levi_civita(n, o, p, q)(2, 2, 3, 3),
                "levi_civita(n,o,p,q)(2,2,3,3)");
  test_for_zero(levi_civita(n, o, p, q)(2, 3, 0, 0),
                "levi_civita(n,o,p,q)(2,3,0,0)");
  test_for_zero(levi_civita(n, o, p, q)(2, 3, 0, 1) - 1,
                "levi_civita(n,o,p,q)(2,3,0,1)");
  test_for_zero(levi_civita(n, o, p, q)(2, 3, 0, 2),
                "levi_civita(n,o,p,q)(2,3,0,2)");
  test_for_zero(levi_civita(n, o, p, q)(2, 3, 0, 3),
                "levi_civita(n,o,p,q)(2,3,0,3)");
  test_for_zero(levi_civita(n, o, p, q)(2, 3, 1, 0) + 1,
                "levi_civita(n,o,p,q)(2,3,1,0)");
  test_for_zero(levi_civita(n, o, p, q)(2, 3, 1, 1),
                "levi_civita(n,o,p,q)(2,3,1,1)");
  test_for_zero(levi_civita(n, o, p, q)(2, 3, 1, 2),
                "levi_civita(n,o,p,q)(2,3,1,2)");
  test_for_zero(levi_civita(n, o, p, q)(2, 3, 1, 3),
                "levi_civita(n,o,p,q)(2,3,1,3)");
  test_for_zero(levi_civita(n, o, p, q)(2, 3, 2, 0),
                "levi_civita(n,o,p,q)(2,3,2,0)");
  test_for_zero(levi_civita(n, o, p, q)(2, 3, 2, 1),
                "levi_civita(n,o,p,q)(2,3,2,1)");
  test_for_zero(levi_civita(n, o, p, q)(2, 3, 2, 2),
                "levi_civita(n,o,p,q)(2,3,2,2)");
  test_for_zero(levi_civita(n, o, p, q)(2, 3, 2, 3),
                "levi_civita(n,o,p,q)(2,3,2,3)");
  test_for_zero(levi_civita(n, o, p, q)(2, 3, 3, 0),
                "levi_civita(n,o,p,q)(2,3,3,0)");
  test_for_zero(levi_civita(n, o, p, q)(2, 3, 3, 1),
                "levi_civita(n,o,p,q)(2,3,3,1)");
  test_for_zero(levi_civita(n, o, p, q)(2, 3, 3, 2),
                "levi_civita(n,o,p,q)(2,3,3,2)");
  test_for_zero(levi_civita(n, o, p, q)(2, 3, 3, 3),
                "levi_civita(n,o,p,q)(2,3,3,3)");

  test_for_zero(levi_civita(n, o, p, q)(3, 0, 0, 0),
                "levi_civita(n,o,p,q)(3,0,0,0)");
  test_for_zero(levi_civita(n, o, p, q)(3, 0, 0, 1),
                "levi_civita(n,o,p,q)(3,0,0,1)");
  test_for_zero(levi_civita(n, o, p, q)(3, 0, 0, 2),
                "levi_civita(n,o,p,q)(3,0,0,2)");
  test_for_zero(levi_civita(n, o, p, q)(3, 0, 0, 3),
                "levi_civita(n,o,p,q)(3,0,0,3)");
  test_for_zero(levi_civita(n, o, p, q)(3, 0, 1, 0),
                "levi_civita(n,o,p,q)(3,0,1,0)");
  test_for_zero(levi_civita(n, o, p, q)(3, 0, 1, 1),
                "levi_civita(n,o,p,q)(3,0,1,1)");
  test_for_zero(levi_civita(n, o, p, q)(3, 0, 1, 2) + 1,
                "levi_civita(n,o,p,q)(3,0,1,2)");
  test_for_zero(levi_civita(n, o, p, q)(3, 0, 1, 3),
                "levi_civita(n,o,p,q)(3,0,1,3)");
  test_for_zero(levi_civita(n, o, p, q)(3, 0, 2, 0),
                "levi_civita(n,o,p,q)(3,0,2,0)");
  test_for_zero(levi_civita(n, o, p, q)(3, 0, 2, 1) - 1,
                "levi_civita(n,o,p,q)(3,0,2,1)");
  test_for_zero(levi_civita(n, o, p, q)(3, 0, 2, 2),
                "levi_civita(n,o,p,q)(3,0,2,2)");
  test_for_zero(levi_civita(n, o, p, q)(3, 0, 2, 3),
                "levi_civita(n,o,p,q)(3,0,2,3)");
  test_for_zero(levi_civita(n, o, p, q)(3, 0, 3, 0),
                "levi_civita(n,o,p,q)(3,0,3,0)");
  test_for_zero(levi_civita(n, o, p, q)(3, 0, 3, 1),
                "levi_civita(n,o,p,q)(3,0,3,1)");
  test_for_zero(levi_civita(n, o, p, q)(3, 0, 3, 2),
                "levi_civita(n,o,p,q)(3,0,3,2)");
  test_for_zero(levi_civita(n, o, p, q)(3, 0, 3, 3),
                "levi_civita(n,o,p,q)(3,0,3,3)");
  test_for_zero(levi_civita(n, o, p, q)(3, 1, 0, 0),
                "levi_civita(n,o,p,q)(3,1,0,0)");
  test_for_zero(levi_civita(n, o, p, q)(3, 1, 0, 1),
                "levi_civita(n,o,p,q)(3,1,0,1)");
  test_for_zero(levi_civita(n, o, p, q)(3, 1, 0, 2) - 1,
                "levi_civita(n,o,p,q)(3,1,0,2)");
  test_for_zero(levi_civita(n, o, p, q)(3, 1, 0, 3),
                "levi_civita(n,o,p,q)(3,1,0,3)");
  test_for_zero(levi_civita(n, o, p, q)(3, 1, 1, 0),
                "levi_civita(n,o,p,q)(3,1,1,0)");
  test_for_zero(levi_civita(n, o, p, q)(3, 1, 1, 1),
                "levi_civita(n,o,p,q)(3,1,1,1)");
  test_for_zero(levi_civita(n, o, p, q)(3, 1, 1, 2),
                "levi_civita(n,o,p,q)(3,1,1,2)");
  test_for_zero(levi_civita(n, o, p, q)(3, 1, 1, 3),
                "levi_civita(n,o,p,q)(3,1,1,3)");
  test_for_zero(levi_civita(n, o, p, q)(3, 1, 2, 0) + 1,
                "levi_civita(n,o,p,q)(3,1,2,0)");
  test_for_zero(levi_civita(n, o, p, q)(3, 1, 2, 1),
                "levi_civita(n,o,p,q)(3,1,2,1)");
  test_for_zero(levi_civita(n, o, p, q)(3, 1, 2, 2),
                "levi_civita(n,o,p,q)(3,1,2,2)");
  test_for_zero(levi_civita(n, o, p, q)(3, 1, 2, 3),
                "levi_civita(n,o,p,q)(3,1,2,3)");
  test_for_zero(levi_civita(n, o, p, q)(3, 1, 3, 0),
                "levi_civita(n,o,p,q)(3,1,3,0)");
  test_for_zero(levi_civita(n, o, p, q)(3, 1, 3, 1),
                "levi_civita(n,o,p,q)(3,1,3,1)");
  test_for_zero(levi_civita(n, o, p, q)(3, 1, 3, 2),
                "levi_civita(n,o,p,q)(3,1,3,2)");
  test_for_zero(levi_civita(n, o, p, q)(3, 1, 3, 3),
                "levi_civita(n,o,p,q)(3,1,3,3)");
  test_for_zero(levi_civita(n, o, p, q)(3, 2, 0, 0),
                "levi_civita(n,o,p,q)(3,2,0,0)");
  test_for_zero(levi_civita(n, o, p, q)(3, 2, 0, 1) + 1,
                "levi_civita(n,o,p,q)(3,2,0,1)");
  test_for_zero(levi_civita(n, o, p, q)(3, 2, 0, 2),
                "levi_civita(n,o,p,q)(3,2,0,2)");
  test_for_zero(levi_civita(n, o, p, q)(3, 2, 0, 3),
                "levi_civita(n,o,p,q)(3,2,0,3)");
  test_for_zero(levi_civita(n, o, p, q)(3, 2, 1, 0) - 1,
                "levi_civita(n,o,p,q)(3,2,1,0)");
  test_for_zero(levi_civita(n, o, p, q)(3, 2, 1, 1),
                "levi_civita(n,o,p,q)(3,2,1,1)");
  test_for_zero(levi_civita(n, o, p, q)(3, 2, 1, 2),
                "levi_civita(n,o,p,q)(3,2,1,2)");
  test_for_zero(levi_civita(n, o, p, q)(3, 2, 1, 3),
                "levi_civita(n,o,p,q)(3,2,1,3)");
  test_for_zero(levi_civita(n, o, p, q)(3, 2, 2, 0),
                "levi_civita(n,o,p,q)(3,2,2,0)");
  test_for_zero(levi_civita(n, o, p, q)(3, 2, 2, 1),
                "levi_civita(n,o,p,q)(3,2,2,1)");
  test_for_zero(levi_civita(n, o, p, q)(3, 2, 2, 2),
                "levi_civita(n,o,p,q)(3,2,2,2)");
  test_for_zero(levi_civita(n, o, p, q)(3, 2, 2, 3),
                "levi_civita(n,o,p,q)(3,2,2,3)");
  test_for_zero(levi_civita(n, o, p, q)(3, 2, 3, 0),
                "levi_civita(n,o,p,q)(3,2,3,0)");
  test_for_zero(levi_civita(n, o, p, q)(3, 2, 3, 1),
                "levi_civita(n,o,p,q)(3,2,3,1)");
  test_for_zero(levi_civita(n, o, p, q)(3, 2, 3, 2),
                "levi_civita(n,o,p,q)(3,2,3,2)");
  test_for_zero(levi_civita(n, o, p, q)(3, 2, 3, 3),
                "levi_civita(n,o,p,q)(3,2,3,3)");
  test_for_zero(levi_civita(n, o, p, q)(3, 3, 0, 0),
                "levi_civita(n,o,p,q)(3,3,0,0)");
  test_for_zero(levi_civita(n, o, p, q)(3, 3, 0, 1),
                "levi_civita(n,o,p,q)(3,3,0,1)");
  test_for_zero(levi_civita(n, o, p, q)(3, 3, 0, 2),
                "levi_civita(n,o,p,q)(3,3,0,2)");
  test_for_zero(levi_civita(n, o, p, q)(3, 3, 0, 3),
                "levi_civita(n,o,p,q)(3,3,0,3)");
  test_for_zero(levi_civita(n, o, p, q)(3, 3, 1, 0),
                "levi_civita(n,o,p,q)(3,3,1,0)");
  test_for_zero(levi_civita(n, o, p, q)(3, 3, 1, 1),
                "levi_civita(n,o,p,q)(3,3,1,1)");
  test_for_zero(levi_civita(n, o, p, q)(3, 3, 1, 2),
                "levi_civita(n,o,p,q)(3,3,1,2)");
  test_for_zero(levi_civita(n, o, p, q)(3, 3, 1, 3),
                "levi_civita(n,o,p,q)(3,3,1,3)");
  test_for_zero(levi_civita(n, o, p, q)(3, 3, 2, 0),
                "levi_civita(n,o,p,q)(3,3,2,0)");
  test_for_zero(levi_civita(n, o, p, q)(3, 3, 2, 1),
                "levi_civita(n,o,p,q)(3,3,2,1)");
  test_for_zero(levi_civita(n, o, p, q)(3, 3, 2, 2),
                "levi_civita(n,o,p,q)(3,3,2,2)");
  test_for_zero(levi_civita(n, o, p, q)(3, 3, 2, 3),
                "levi_civita(n,o,p,q)(3,3,2,3)");
  test_for_zero(levi_civita(n, o, p, q)(3, 3, 3, 0),
                "levi_civita(n,o,p,q)(3,3,3,0)");
  test_for_zero(levi_civita(n, o, p, q)(3, 3, 3, 1),
                "levi_civita(n,o,p,q)(3,3,3,1)");
  test_for_zero(levi_civita(n, o, p, q)(3, 3, 3, 2),
                "levi_civita(n,o,p,q)(3,3,3,2)");
  test_for_zero(levi_civita(n, o, p, q)(3, 3, 3, 3),
                "levi_civita(n,o,p,q)(3,3,3,3)");
}
