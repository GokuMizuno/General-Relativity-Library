#pragma once
/*metric header
Minkowski metric
Riemannian metric
*/

#include <cmath>

namespace GRLib
{
	class metric
	{
		template <class T, int Dim1, int Dim2> class g;
		Tensor2<double, 4, 4> Minkowski;
		Tensor2<double, 4, 4> Riemann;

		//template <class T, int Dim> class diag
		template<class T, int dim> class diag;
	};
}
