#pragma once
#include <cmath>
#include <complex>
#include "matrix.h"
#include <omp.h>

/*A list of metrics*/
//Template
		/*NameOfMetric*/
			//KMS
			//diag()

			//natural system
			//diag()

			//Euclidian coords
			//Spherical coords

namespace GRLib
{
	class Metric
	{
	public:
		/*Minkowski*/
		matrix Minkowski = matrix(4, 4);
			//KMS system
			//diag(-c^2,1,1,1)
			//natural system
			//diag(-1,1,1,1)
			//repeat in tensor form
			//Euclidian coords
			//Spherical coords

		/*Riemann*/
			//KMS
			//diag()

			//natural system
			//diag()

			//Euclidian coords
			//Spherical coords

		/*Kerr*/

	};
}