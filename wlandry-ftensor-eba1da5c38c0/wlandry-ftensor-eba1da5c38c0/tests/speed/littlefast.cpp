#include <iostream>

int main()
{
  double y[3], x[3], n[3];

  y[0] = 0;
  y[1] = 1;
  y[2] = 2;

  x[0] = 2;
  x[1] = 3;
  x[2] = 4;

  n[0] = 5;
  n[1] = 6;
  n[2] = 7;

  for(int i = 0; i < 100000000; i++)
    {
      //        y[0]=y[0]+n[0];
      //        y[1]=y[1]+n[1];
      //        y[2]=y[2]+n[2];

      n[0] += (y[0] - x[0]) - (y[0] - x[0]) + (y[0] - x[0]) - (y[0] - x[0])
              + (y[0] - x[0]) - (y[0] - x[0]) + (y[0] - x[0]) - (y[0] - x[0])
              + (y[0] - x[0]) - (y[0] - x[0]) + (y[0] - x[0]) - (y[0] - x[0])
              + (y[0] - x[0]) - (y[0] - x[0]) + (y[0] - x[0]) - (y[0] - x[0]);
      n[1] += (y[1] - x[1]) - (y[1] - x[1]) + (y[1] - x[1]) - (y[1] - x[1])
              + (y[1] - x[1]) - (y[1] - x[1]) + (y[1] - x[1]) - (y[1] - x[1])
              + (y[1] - x[1]) - (y[1] - x[1]) + (y[1] - x[1]) - (y[1] - x[1])
              + (y[1] - x[1]) - (y[1] - x[1]) + (y[1] - x[1]) - (y[1] - x[1]);
      n[2] += (y[2] - x[2]) - (y[2] - x[2]) + (y[2] - x[2]) - (y[2] - x[2])
              + (y[2] - x[2]) - (y[2] - x[2]) + (y[2] - x[2]) - (y[2] - x[2])
              + (y[2] - x[2]) - (y[2] - x[2]) + (y[2] - x[2]) - (y[2] - x[2])
              + (y[2] - x[2]) - (y[2] - x[2]) + (y[2] - x[2]) - (y[2] - x[2]);

      y[0] += x[0] + n[0];
      y[1] += x[1] + n[1];
      y[2] += x[2] + n[2];
    }
  std::cout << y[0] << " " << y[1] << " " << y[2] << std::endl;
}
