inline void func1(double *restrict y, double *restrict a1)
{
  y[0] += a1[0];
  y[1] += a1[1];
  y[2] += a1[2];
  a1[0] *= 0.1;
  a1[1] *= 0.1;
  a1[2] *= 0.1;
  return;
}

inline void func2(double *restrict y, double *restrict a1, double *restrict a2)
{
  y[0] += a1[0] + 2 * a2[0];
  y[1] += a1[1] + 2 * a2[1];
  y[2] += a1[2] + 2 * a2[2];
  a1[0] *= 0.1;
  a2[0] *= 0.2;
  a1[1] *= 0.1;
  a2[1] *= 0.2;
  a1[2] *= 0.1;
  a2[2] *= 0.2;
  return;
}

inline void func3(double *restrict y, double *restrict a1, double *restrict a2,
                  double *restrict a3)
{
  y[0] += a1[0] + 2 * a2[0]
          + 3 * (a1[0] * a2[0] + a1[1] * a2[1] + a1[2] * a2[2]) * a3[0];
  y[1] += a1[1] + 2 * a2[1]
          + 3 * (a1[0] * a2[0] + a1[1] * a2[1] + a1[2] * a2[2]) * a3[1];
  y[2] += a1[2] + 2 * a2[2]
          + 3 * (a1[0] * a2[0] + a1[1] * a2[1] + a1[2] * a2[2]) * a3[2];
  a1[0] *= 0.1;
  a2[0] *= 0.2;
  a3[0] *= 0.3;
  a1[1] *= 0.1;
  a2[1] *= 0.2;
  a3[1] *= 0.3;
  a1[2] *= 0.1;
  a2[2] *= 0.2;
  a3[2] *= 0.3;
  return;
}

inline void func4(double *restrict y, double *restrict a1, double *restrict a2,
                  double *restrict a3, double *restrict a4)
{
  y[0] += a1[0] + 2 * a2[0]
          + 3 * (a1[0] * a2[0] + a1[1] * a2[1] + a1[2] * a2[2]) * a3[0]
          + 4 * (a1[0] * a3[0] + a1[1] * a3[1] + a1[2] * a3[2])
              * (a2[0] * a2[0] + a2[1] * a2[1] + a2[2] * a2[2]) * a4[0];
  y[1] += a1[1] + 2 * a2[1]
          + 3 * (a1[0] * a2[0] + a1[1] * a2[1] + a1[2] * a2[2]) * a3[1]
          + 4 * (a1[0] * a3[0] + a1[1] * a3[1] + a1[2] * a3[2])
              * (a2[0] * a2[0] + a2[1] * a2[1] + a2[2] * a2[2]) * a4[1];
  y[2] += a1[2] + 2 * a2[2]
          + 3 * (a1[0] * a2[0] + a1[1] * a2[1] + a1[2] * a2[2]) * a3[2]
          + 4 * (a1[0] * a3[0] + a1[1] * a3[1] + a1[2] * a3[2])
              * (a2[0] * a2[0] + a2[1] * a2[1] + a2[2] * a2[2]) * a4[2];
  a1[0] *= 0.1;
  a2[0] *= 0.2;
  a3[0] *= 0.3;
  a4[0] *= 0.4;
  a1[1] *= 0.1;
  a2[1] *= 0.2;
  a3[1] *= 0.3;
  a4[1] *= 0.4;
  a1[2] *= 0.1;
  a2[2] *= 0.2;
  a3[2] *= 0.3;
  a4[2] *= 0.4;
  return;
}

inline void
func5(double *restrict y, double *restrict a1, double *restrict a2,
      double *restrict a3, double *restrict a4, double *restrict a5)
{
  y[0] += a1[0] + 2 * a2[0]
          + 3 * (a1[0] * a2[0] + a1[1] * a2[1] + a1[2] * a2[2]) * a3[0]
          + 4 * (a1[0] * a3[0] + a1[1] * a3[1] + a1[2] * a3[2])
              * (a2[0] * a2[0] + a2[1] * a2[1] + a2[2] * a2[2]) * a4[0]
          + 5 * (a1[0] * a4[0] + a1[1] * a4[1] + a1[2] * a4[2])
              * (a2[0] * a3[0] + a2[1] * a3[1] + a2[2] * a3[2]) * a5[0];
  y[1] += a1[1] + 2 * a2[1]
          + 3 * (a1[0] * a2[0] + a1[1] * a2[1] + a1[2] * a2[2]) * a3[1]
          + 4 * (a1[0] * a3[0] + a1[1] * a3[1] + a1[2] * a3[2])
              * (a2[0] * a2[0] + a2[1] * a2[1] + a2[2] * a2[2]) * a4[1]
          + 5 * (a1[0] * a4[0] + a1[1] * a4[1] + a1[2] * a4[2])
              * (a2[0] * a3[0] + a2[1] * a3[1] + a2[2] * a3[2]) * a5[1];
  y[2] += a1[2] + 2 * a2[2]
          + 3 * (a1[0] * a2[0] + a1[1] * a2[1] + a1[2] * a2[2]) * a3[2]
          + 4 * (a1[0] * a3[0] + a1[1] * a3[1] + a1[2] * a3[2])
              * (a2[0] * a2[0] + a2[1] * a2[1] + a2[2] * a2[2]) * a4[2]
          + 5 * (a1[0] * a4[0] + a1[1] * a4[1] + a1[2] * a4[2])
              * (a2[0] * a3[0] + a2[1] * a3[1] + a2[2] * a3[2]) * a5[2];
  a1[0] *= 0.1;
  a2[0] *= 0.2;
  a3[0] *= 0.3;
  a4[0] *= 0.4;
  a5[0] *= 0.5;
  a1[1] *= 0.1;
  a2[1] *= 0.2;
  a3[1] *= 0.3;
  a4[1] *= 0.4;
  a5[1] *= 0.5;
  a1[2] *= 0.1;
  a2[2] *= 0.2;
  a3[2] *= 0.3;
  a4[2] *= 0.4;
  a5[2] *= 0.5;
  return;
}

inline void func6(double *restrict y, double *restrict a1, double *restrict a2,
                  double *restrict a3, double *restrict a4,
                  double *restrict a5, double *restrict a6)
{
  y[0] += a1[0] + 2 * a2[0]
          + 3 * (a1[0] * a2[0] + a1[1] * a2[1] + a1[2] * a2[2]) * a3[0]
          + 4 * (a1[0] * a3[0] + a1[1] * a3[1] + a1[2] * a3[2])
              * (a2[0] * a2[0] + a2[1] * a2[1] + a2[2] * a2[2]) * a4[0]
          + 5 * (a1[0] * a4[0] + a1[1] * a4[1] + a1[2] * a4[2])
              * (a2[0] * a3[0] + a2[1] * a3[1] + a2[2] * a3[2]) * a5[0]
          + 6 * (a1[0] * a5[0] + a1[1] * a5[1] + a1[2] * a5[2])
              * (a2[0] * a4[0] + a2[1] * a4[1] + a2[2] * a4[2])
              * (a3[0] * a3[0] + a3[1] * a3[1] + a3[2] * a3[2]) * a6[0];
  y[1] += a1[1] + 2 * a2[1]
          + 3 * (a1[0] * a2[0] + a1[1] * a2[1] + a1[2] * a2[2]) * a3[1]
          + 4 * (a1[0] * a3[0] + a1[1] * a3[1] + a1[2] * a3[2])
              * (a2[0] * a2[0] + a2[1] * a2[1] + a2[2] * a2[2]) * a4[1]
          + 5 * (a1[0] * a4[0] + a1[1] * a4[1] + a1[2] * a4[2])
              * (a2[0] * a3[0] + a2[1] * a3[1] + a2[2] * a3[2]) * a5[1]
          + 6 * (a1[0] * a5[0] + a1[1] * a5[1] + a1[2] * a5[2])
              * (a2[0] * a4[0] + a2[1] * a4[1] + a2[2] * a4[2])
              * (a3[0] * a3[0] + a3[1] * a3[1] + a3[2] * a3[2]) * a6[1];
  y[2] += a1[2] + 2 * a2[2]
          + 3 * (a1[0] * a2[0] + a1[1] * a2[1] + a1[2] * a2[2]) * a3[2]
          + 4 * (a1[0] * a3[0] + a1[1] * a3[1] + a1[2] * a3[2])
              * (a2[0] * a2[0] + a2[1] * a2[1] + a2[2] * a2[2]) * a4[2]
          + 5 * (a1[0] * a4[0] + a1[1] * a4[1] + a1[2] * a4[2])
              * (a2[0] * a3[0] + a2[1] * a3[1] + a2[2] * a3[2]) * a5[2]
          + 6 * (a1[0] * a5[0] + a1[1] * a5[1] + a1[2] * a5[2])
              * (a2[0] * a4[0] + a2[1] * a4[1] + a2[2] * a4[2])
              * (a3[0] * a3[0] + a3[1] * a3[1] + a3[2] * a3[2]) * a6[2];
  a1[0] *= 0.1;
  a2[0] *= 0.2;
  a3[0] *= 0.3;
  a4[0] *= 0.4;
  a5[0] *= 0.5;
  a6[0] *= 0.6;
  a1[1] *= 0.1;
  a2[1] *= 0.2;
  a3[1] *= 0.3;
  a4[1] *= 0.4;
  a5[1] *= 0.5;
  a6[1] *= 0.6;
  a1[2] *= 0.1;
  a2[2] *= 0.2;
  a3[2] *= 0.3;
  a4[2] *= 0.4;
  a5[2] *= 0.5;
  a6[2] *= 0.6;
  return;
}

inline void
func7(double *restrict y, double *restrict a1, double *restrict a2,
      double *restrict a3, double *restrict a4, double *restrict a5,
      double *restrict a6, double *restrict a7)
{
  y[0] += a1[0] + 2 * a2[0]
          + 3 * (a1[0] * a2[0] + a1[1] * a2[1] + a1[2] * a2[2]) * a3[0]
          + 4 * (a1[0] * a3[0] + a1[1] * a3[1] + a1[2] * a3[2])
              * (a2[0] * a2[0] + a2[1] * a2[1] + a2[2] * a2[2]) * a4[0]
          + 5 * (a1[0] * a4[0] + a1[1] * a4[1] + a1[2] * a4[2])
              * (a2[0] * a3[0] + a2[1] * a3[1] + a2[2] * a3[2]) * a5[0]
          + 6 * (a1[0] * a5[0] + a1[1] * a5[1] + a1[2] * a5[2])
              * (a2[0] * a4[0] + a2[1] * a4[1] + a2[2] * a4[2])
              * (a3[0] * a3[0] + a3[1] * a3[1] + a3[2] * a3[2]) * a6[0]
          + 7 * (a1[0] * a6[0] + a1[1] * a6[1] + a1[2] * a6[2])
              * (a2[0] * a5[0] + a2[1] * a5[1] + a2[2] * a5[2])
              * (a3[0] * a4[0] + a3[1] * a4[1] + a3[2] * a4[2]) * a7[0];
  y[1] += a1[1] + 2 * a2[1]
          + 3 * (a1[0] * a2[0] + a1[1] * a2[1] + a1[2] * a2[2]) * a3[1]
          + 4 * (a1[0] * a3[0] + a1[1] * a3[1] + a1[2] * a3[2])
              * (a2[0] * a2[0] + a2[1] * a2[1] + a2[2] * a2[2]) * a4[1]
          + 5 * (a1[0] * a4[0] + a1[1] * a4[1] + a1[2] * a4[2])
              * (a2[0] * a3[0] + a2[1] * a3[1] + a2[2] * a3[2]) * a5[1]
          + 6 * (a1[0] * a5[0] + a1[1] * a5[1] + a1[2] * a5[2])
              * (a2[0] * a4[0] + a2[1] * a4[1] + a2[2] * a4[2])
              * (a3[0] * a3[0] + a3[1] * a3[1] + a3[2] * a3[2]) * a6[1]
          + 7 * (a1[0] * a6[0] + a1[1] * a6[1] + a1[2] * a6[2])
              * (a2[0] * a5[0] + a2[1] * a5[1] + a2[2] * a5[2])
              * (a3[0] * a4[0] + a3[1] * a4[1] + a3[2] * a4[2]) * a7[1];
  y[2] += a1[2] + 2 * a2[2]
          + 3 * (a1[0] * a2[0] + a1[1] * a2[1] + a1[2] * a2[2]) * a3[2]
          + 4 * (a1[0] * a3[0] + a1[1] * a3[1] + a1[2] * a3[2])
              * (a2[0] * a2[0] + a2[1] * a2[1] + a2[2] * a2[2]) * a4[2]
          + 5 * (a1[0] * a4[0] + a1[1] * a4[1] + a1[2] * a4[2])
              * (a2[0] * a3[0] + a2[1] * a3[1] + a2[2] * a3[2]) * a5[2]
          + 6 * (a1[0] * a5[0] + a1[1] * a5[1] + a1[2] * a5[2])
              * (a2[0] * a4[0] + a2[1] * a4[1] + a2[2] * a4[2])
              * (a3[0] * a3[0] + a3[1] * a3[1] + a3[2] * a3[2]) * a6[2]
          + 7 * (a1[0] * a6[0] + a1[1] * a6[1] + a1[2] * a6[2])
              * (a2[0] * a5[0] + a2[1] * a5[1] + a2[2] * a5[2])
              * (a3[0] * a4[0] + a3[1] * a4[1] + a3[2] * a4[2]) * a7[2];
  a1[0] *= 0.1;
  a2[0] *= 0.2;
  a3[0] *= 0.3;
  a4[0] *= 0.4;
  a5[0] *= 0.5;
  a6[0] *= 0.6;
  a7[0] *= 0.7;
  a1[1] *= 0.1;
  a2[1] *= 0.2;
  a3[1] *= 0.3;
  a4[1] *= 0.4;
  a5[1] *= 0.5;
  a6[1] *= 0.6;
  a7[1] *= 0.7;
  a1[2] *= 0.1;
  a2[2] *= 0.2;
  a3[2] *= 0.3;
  a4[2] *= 0.4;
  a5[2] *= 0.5;
  a6[2] *= 0.6;
  a7[2] *= 0.7;
  return;
}

inline void
func8(double *restrict y, double *restrict a1, double *restrict a2,
      double *restrict a3, double *restrict a4, double *restrict a5,
      double *restrict a6, double *restrict a7, double *restrict a8)
{
  y[0] += a1[0] + 2 * a2[0]
          + 3 * (a1[0] * a2[0] + a1[1] * a2[1] + a1[2] * a2[2]) * a3[0]
          + 4 * (a1[0] * a3[0] + a1[1] * a3[1] + a1[2] * a3[2])
              * (a2[0] * a2[0] + a2[1] * a2[1] + a2[2] * a2[2]) * a4[0]
          + 5 * (a1[0] * a4[0] + a1[1] * a4[1] + a1[2] * a4[2])
              * (a2[0] * a3[0] + a2[1] * a3[1] + a2[2] * a3[2]) * a5[0]
          + 6 * (a1[0] * a5[0] + a1[1] * a5[1] + a1[2] * a5[2])
              * (a2[0] * a4[0] + a2[1] * a4[1] + a2[2] * a4[2])
              * (a3[0] * a3[0] + a3[1] * a3[1] + a3[2] * a3[2]) * a6[0]
          + 7 * (a1[0] * a6[0] + a1[1] * a6[1] + a1[2] * a6[2])
              * (a2[0] * a5[0] + a2[1] * a5[1] + a2[2] * a5[2])
              * (a3[0] * a4[0] + a3[1] * a4[1] + a3[2] * a4[2]) * a7[0]
          + 8 * (a1[0] * a7[0] + a1[1] * a7[1] + a1[2] * a7[2])
              * (a2[0] * a6[0] + a2[1] * a6[1] + a2[2] * a6[2])
              * (a3[0] * a5[0] + a3[1] * a5[1] + a3[2] * a5[2])
              * (a4[0] * a4[0] + a4[1] * a4[1] + a4[2] * a4[2]) * a8[0];
  y[1] += a1[1] + 2 * a2[1]
          + 3 * (a1[0] * a2[0] + a1[1] * a2[1] + a1[2] * a2[2]) * a3[1]
          + 4 * (a1[0] * a3[0] + a1[1] * a3[1] + a1[2] * a3[2])
              * (a2[0] * a2[0] + a2[1] * a2[1] + a2[2] * a2[2]) * a4[1]
          + 5 * (a1[0] * a4[0] + a1[1] * a4[1] + a1[2] * a4[2])
              * (a2[0] * a3[0] + a2[1] * a3[1] + a2[2] * a3[2]) * a5[1]
          + 6 * (a1[0] * a5[0] + a1[1] * a5[1] + a1[2] * a5[2])
              * (a2[0] * a4[0] + a2[1] * a4[1] + a2[2] * a4[2])
              * (a3[0] * a3[0] + a3[1] * a3[1] + a3[2] * a3[2]) * a6[1]
          + 7 * (a1[0] * a6[0] + a1[1] * a6[1] + a1[2] * a6[2])
              * (a2[0] * a5[0] + a2[1] * a5[1] + a2[2] * a5[2])
              * (a3[0] * a4[0] + a3[1] * a4[1] + a3[2] * a4[2]) * a7[1]
          + 8 * (a1[0] * a7[0] + a1[1] * a7[1] + a1[2] * a7[2])
              * (a2[0] * a6[0] + a2[1] * a6[1] + a2[2] * a6[2])
              * (a3[0] * a5[0] + a3[1] * a5[1] + a3[2] * a5[2])
              * (a4[0] * a4[0] + a4[1] * a4[1] + a4[2] * a4[2]) * a8[1];
  y[2] += a1[2] + 2 * a2[2]
          + 3 * (a1[0] * a2[0] + a1[1] * a2[1] + a1[2] * a2[2]) * a3[2]
          + 4 * (a1[0] * a3[0] + a1[1] * a3[1] + a1[2] * a3[2])
              * (a2[0] * a2[0] + a2[1] * a2[1] + a2[2] * a2[2]) * a4[2]
          + 5 * (a1[0] * a4[0] + a1[1] * a4[1] + a1[2] * a4[2])
              * (a2[0] * a3[0] + a2[1] * a3[1] + a2[2] * a3[2]) * a5[2]
          + 6 * (a1[0] * a5[0] + a1[1] * a5[1] + a1[2] * a5[2])
              * (a2[0] * a4[0] + a2[1] * a4[1] + a2[2] * a4[2])
              * (a3[0] * a3[0] + a3[1] * a3[1] + a3[2] * a3[2]) * a6[2]
          + 7 * (a1[0] * a6[0] + a1[1] * a6[1] + a1[2] * a6[2])
              * (a2[0] * a5[0] + a2[1] * a5[1] + a2[2] * a5[2])
              * (a3[0] * a4[0] + a3[1] * a4[1] + a3[2] * a4[2]) * a7[2]
          + 8 * (a1[0] * a7[0] + a1[1] * a7[1] + a1[2] * a7[2])
              * (a2[0] * a6[0] + a2[1] * a6[1] + a2[2] * a6[2])
              * (a3[0] * a5[0] + a3[1] * a5[1] + a3[2] * a5[2])
              * (a4[0] * a4[0] + a4[1] * a4[1] + a4[2] * a4[2]) * a8[2];
  a1[0] *= 0.1;
  a2[0] *= 0.2;
  a3[0] *= 0.3;
  a4[0] *= 0.4;
  a5[0] *= 0.5;
  a6[0] *= 0.6;
  a7[0] *= 0.7;
  a8[0] *= 0.8;
  a1[1] *= 0.1;
  a2[1] *= 0.2;
  a3[1] *= 0.3;
  a4[1] *= 0.4;
  a5[1] *= 0.5;
  a6[1] *= 0.6;
  a7[1] *= 0.7;
  a8[1] *= 0.8;
  a1[2] *= 0.1;
  a2[2] *= 0.2;
  a3[2] *= 0.3;
  a4[2] *= 0.4;
  a5[2] *= 0.5;
  a6[2] *= 0.6;
  a7[2] *= 0.7;
  a8[2] *= 0.8;
  return;
}

inline void
func9(double *restrict y, double *restrict a1, double *restrict a2,
      double *restrict a3, double *restrict a4, double *restrict a5,
      double *restrict a6, double *restrict a7, double *restrict a8,
      double *restrict a9)
{
  y[0] += a1[0] + 2 * a2[0]
          + 3 * (a1[0] * a2[0] + a1[1] * a2[1] + a1[2] * a2[2]) * a3[0]
          + 4 * (a1[0] * a3[0] + a1[1] * a3[1] + a1[2] * a3[2])
              * (a2[0] * a2[0] + a2[1] * a2[1] + a2[2] * a2[2]) * a4[0]
          + 5 * (a1[0] * a4[0] + a1[1] * a4[1] + a1[2] * a4[2])
              * (a2[0] * a3[0] + a2[1] * a3[1] + a2[2] * a3[2]) * a5[0]
          + 6 * (a1[0] * a5[0] + a1[1] * a5[1] + a1[2] * a5[2])
              * (a2[0] * a4[0] + a2[1] * a4[1] + a2[2] * a4[2])
              * (a3[0] * a3[0] + a3[1] * a3[1] + a3[2] * a3[2]) * a6[0]
          + 7 * (a1[0] * a6[0] + a1[1] * a6[1] + a1[2] * a6[2])
              * (a2[0] * a5[0] + a2[1] * a5[1] + a2[2] * a5[2])
              * (a3[0] * a4[0] + a3[1] * a4[1] + a3[2] * a4[2]) * a7[0]
          + 8 * (a1[0] * a7[0] + a1[1] * a7[1] + a1[2] * a7[2])
              * (a2[0] * a6[0] + a2[1] * a6[1] + a2[2] * a6[2])
              * (a3[0] * a5[0] + a3[1] * a5[1] + a3[2] * a5[2])
              * (a4[0] * a4[0] + a4[1] * a4[1] + a4[2] * a4[2]) * a8[0]
          + 9 * (a1[0] * a8[0] + a1[1] * a8[1] + a1[2] * a8[2])
              * (a2[0] * a7[0] + a2[1] * a7[1] + a2[2] * a7[2])
              * (a3[0] * a6[0] + a3[1] * a6[1] + a3[2] * a6[2])
              * (a4[0] * a5[0] + a4[1] * a5[1] + a4[2] * a5[2]) * a9[0];
  y[1] += a1[1] + 2 * a2[1]
          + 3 * (a1[0] * a2[0] + a1[1] * a2[1] + a1[2] * a2[2]) * a3[1]
          + 4 * (a1[0] * a3[0] + a1[1] * a3[1] + a1[2] * a3[2])
              * (a2[0] * a2[0] + a2[1] * a2[1] + a2[2] * a2[2]) * a4[1]
          + 5 * (a1[0] * a4[0] + a1[1] * a4[1] + a1[2] * a4[2])
              * (a2[0] * a3[0] + a2[1] * a3[1] + a2[2] * a3[2]) * a5[1]
          + 6 * (a1[0] * a5[0] + a1[1] * a5[1] + a1[2] * a5[2])
              * (a2[0] * a4[0] + a2[1] * a4[1] + a2[2] * a4[2])
              * (a3[0] * a3[0] + a3[1] * a3[1] + a3[2] * a3[2]) * a6[1]
          + 7 * (a1[0] * a6[0] + a1[1] * a6[1] + a1[2] * a6[2])
              * (a2[0] * a5[0] + a2[1] * a5[1] + a2[2] * a5[2])
              * (a3[0] * a4[0] + a3[1] * a4[1] + a3[2] * a4[2]) * a7[1]
          + 8 * (a1[0] * a7[0] + a1[1] * a7[1] + a1[2] * a7[2])
              * (a2[0] * a6[0] + a2[1] * a6[1] + a2[2] * a6[2])
              * (a3[0] * a5[0] + a3[1] * a5[1] + a3[2] * a5[2])
              * (a4[0] * a4[0] + a4[1] * a4[1] + a4[2] * a4[2]) * a8[1]
          + 9 * (a1[0] * a8[0] + a1[1] * a8[1] + a1[2] * a8[2])
              * (a2[0] * a7[0] + a2[1] * a7[1] + a2[2] * a7[2])
              * (a3[0] * a6[0] + a3[1] * a6[1] + a3[2] * a6[2])
              * (a4[0] * a5[0] + a4[1] * a5[1] + a4[2] * a5[2]) * a9[1];
  y[2] += a1[2] + 2 * a2[2]
          + 3 * (a1[0] * a2[0] + a1[1] * a2[1] + a1[2] * a2[2]) * a3[2]
          + 4 * (a1[0] * a3[0] + a1[1] * a3[1] + a1[2] * a3[2])
              * (a2[0] * a2[0] + a2[1] * a2[1] + a2[2] * a2[2]) * a4[2]
          + 5 * (a1[0] * a4[0] + a1[1] * a4[1] + a1[2] * a4[2])
              * (a2[0] * a3[0] + a2[1] * a3[1] + a2[2] * a3[2]) * a5[2]
          + 6 * (a1[0] * a5[0] + a1[1] * a5[1] + a1[2] * a5[2])
              * (a2[0] * a4[0] + a2[1] * a4[1] + a2[2] * a4[2])
              * (a3[0] * a3[0] + a3[1] * a3[1] + a3[2] * a3[2]) * a6[2]
          + 7 * (a1[0] * a6[0] + a1[1] * a6[1] + a1[2] * a6[2])
              * (a2[0] * a5[0] + a2[1] * a5[1] + a2[2] * a5[2])
              * (a3[0] * a4[0] + a3[1] * a4[1] + a3[2] * a4[2]) * a7[2]
          + 8 * (a1[0] * a7[0] + a1[1] * a7[1] + a1[2] * a7[2])
              * (a2[0] * a6[0] + a2[1] * a6[1] + a2[2] * a6[2])
              * (a3[0] * a5[0] + a3[1] * a5[1] + a3[2] * a5[2])
              * (a4[0] * a4[0] + a4[1] * a4[1] + a4[2] * a4[2]) * a8[2]
          + 9 * (a1[0] * a8[0] + a1[1] * a8[1] + a1[2] * a8[2])
              * (a2[0] * a7[0] + a2[1] * a7[1] + a2[2] * a7[2])
              * (a3[0] * a6[0] + a3[1] * a6[1] + a3[2] * a6[2])
              * (a4[0] * a5[0] + a4[1] * a5[1] + a4[2] * a5[2]) * a9[2];
  a1[0] *= 0.1;
  a2[0] *= 0.2;
  a3[0] *= 0.3;
  a4[0] *= 0.4;
  a5[0] *= 0.5;
  a6[0] *= 0.6;
  a7[0] *= 0.7;
  a8[0] *= 0.8;
  a9[0] *= 0.9;
  a1[1] *= 0.1;
  a2[1] *= 0.2;
  a3[1] *= 0.3;
  a4[1] *= 0.4;
  a5[1] *= 0.5;
  a6[1] *= 0.6;
  a7[1] *= 0.7;
  a8[1] *= 0.8;
  a9[1] *= 0.9;
  a1[2] *= 0.1;
  a2[2] *= 0.2;
  a3[2] *= 0.3;
  a4[2] *= 0.4;
  a5[2] *= 0.5;
  a6[2] *= 0.6;
  a7[2] *= 0.7;
  a8[2] *= 0.8;
  a9[2] *= 0.9;
  return;
}
