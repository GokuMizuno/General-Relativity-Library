/*metric cpp file*/
#include <cmath>

namespace GRLib
{
	class metric
	{
		template <class T, int Dim1, int Dim2> class g;
		Tensor2<double, 4, 4> Minkowski =
			(-1, 0, 0, 0,
				0, 1, 0, 0,
				0, 0, 1, 0,
				0, 0, 0, 1);

		Tensor2<double, 4, 4> Riemann;

		template<class T, int dim> class Diag(class T, T num = 1)
		{
			Tensor2<class T, int dim, int dim> g;
			//need to error check
			try
			{
				for (int i = 0; i < dim; i++) {
					for (int j = 0; j < dim; j++) {
						if (i == j) { g[i][j] = num; }
						else { g[i][j] = 0; }
					}
				}
			}
			catch
			{
				//log error
			}
		}
	};
}