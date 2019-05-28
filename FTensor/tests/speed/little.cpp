#include "../../FTensor.hpp"
#include <iostream>

using namespace GRLib;

int main()
{
  Tensor1<double, 3> y(0, 1, 2);

  //    Tensor1<double,3> y(0,1,2);
  Tensor1<double, 3> x(2, 3, 4);
  Tensor1<double, 3> n(5, 6, 7);
  //    Tensor2 t2(1,2,3,4,5,6,7,8,9);
  //    Tensor2 t2e(9,8,7,6,5,4,3,2,1);
  //    Tensor2_symmetric t2s(1,2,3,4,5,6);
  //    Tensor2_symmetric t2es(9,8,7,6,5,4);

  const Index<'i', 3> i;
  //    const Index<'j'> j;
  //    const Index<'k'> k;

  //    y(i)=-n(i)+2.0;
  //    y(i)+=n(i)-2.0;
  //    y(i)-=n(i)*2.0;
  //    y(i)+=2.0;
  //    y(i)-=2.0;
  //    y(i)*=2.0;
  //    y(i)/=2.0;
  //    x(i)=2.0+y(i)-n(i)/2.0;
  //    n(i)=2.0-y(i)+2.0*x(i);
  //    n(i)=-(y(i)+x(i))*n(i)*0.0+1.0;
  //    t2(i,j)=t2(i,j)+2.0*t2e(i,j)-t2(i,j)*2.0;
  //    t2e(i,j)=n(k)*n(i)*(-t2(k,j));
  //    x(i)=t2e(i,j)*n(j) - n(j)*t2e(i,j);
  //    n(i)=t2e(j,i)*n(j) - n(j)*t2e(j,i) + t2s(i,j)*y(j);
  //    n(i)+=(y(i)-x(i))-(y(i)-x(i))+(y(i)-x(i))-(y(i)-x(i))+(y(i)-x(i))-(y(i)-x(i))+(y(i)-x(i))-(y(i)-x(i))+(y(i)-x(i))-(y(i)-x(i))+(y(i)-x(i))-(y(i)-x(i))+(y(i)-x(i))-(y(i)-x(i))+(y(i)-x(i))-(y(i)-x(i));
  //  //
  //  n(i)=(y(i)-x(i))*(y(i)-x(i))*(y(i)-x(i))*(y(i)-x(i))*(y(i)-x(i))*(y(i)-x(i))*(y(i)-x(i))*(y(i)-x(i))*(y(i)-x(i))*(y(i)-x(i))*(y(i)-x(i))*(y(i)-x(i))*(y(i)-x(i))*(y(i)-x(i))*(y(i)-x(i))*(y(i)-x(i))/(n(i)*n(i)*n(i)*n(i)*n(i)*n(i)*n(i)*n(i)*n(i)*n(i)*n(i)*n(i)*n(i)*n(i)*n(i));

  for(int ii = 0; ii < 100000000; ii++)
    {
      //        const Index<'i',3> i;

      //    n(i)+=(y(i)-x(i))-(y(i)-x(i))+(y(i)-x(i))-(y(i)-x(i))+(y(i)-x(i))-(y(i)-x(i))+(y(i)-x(i))-(y(i)-x(i))+(y(i)-x(i))-(y(i)-x(i))+(y(i)-x(i))-(y(i)-x(i))+(y(i)-x(i))-(y(i)-x(i))+(y(i)-x(i))-(y(i)-x(i));

      //        y(i)+=x(i)+n(i);

      y(i) += (x(i) + n(i)) - (x(i) + n(i)) + (x(i) + n(i)) - (x(i) + n(i))
              + (x(i) + n(i))
        //      	-(x(i)+n(i))+(x(i)+n(i))
        //    	-(x(i)+n(i))+(x(i)+n(i))
        //    	-(x(i)+n(i))+(x(i)+n(i))
        //    	-(x(i)+n(i))+(x(i)+n(i))
        //    	-(x(i)+n(i))+(x(i)+n(i))
        //    	-(x(i)+n(i))+(x(i)+n(i))
        //    	-(x(i)+n(i))+(x(i)+n(i))
        //  -(x(i)+n(i))+(x(i)+n(i))
        //  -(x(i)+n(i))+(x(i)+n(i))
        //  -(x(i)+n(i))+(x(i)+n(i))
        //  -(x(i)+n(i))+(x(i)+n(i))
        ;
    }
  std::cout << y(0) << " " << y(1) << " " << y(2) << std::endl;
  //         << x(0) << " " << x(1) << " " << x(2) << endl
  //         << n(0) << " " << n(1) << " " << n(2) << endl
  //         << y(i)*n(i) << endl;
}
