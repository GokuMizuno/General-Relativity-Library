#include <math>
#include <complex>

namespace GRLib
{
	template <class T> class Position(T &x, T &y, T &z, T &t, T &frameVelocity)  //given 4 sep variables
		//given an array
		//given a vector
		//given a tensor
	{
	public:
		template <class T> class Position()
		{}
		template <class T> class Position()
		{}
		template <class T> class Position(T &x, T &y, T &z, T &t)
		{
			T x_prime = gamma(*x - *v*(*t));
			T y_prime = *y;
			T z_prime = *z;
			T t_prime = gamma(t - ((*v * *x) / (c ^ 2)));
		}

	private:
		gamma(T frameVelocity)
		{
			int c = 300000; //m/s  will need to change this later to match units and type of passing array

			if (v >= (T)c)
				//faster than light, throw error
				return 0;
			else
				return 1 / (sqrt(1 - (v / c) ^ 2));
		}
	}

	template <class T> class Velocity(T &vx, T &vy, T &vz, T &vt)
	{
	public:
		T> class Velocity(A_type vx, A_)();
		~T> class Velocity(A_type vx, A_)();

	private:
		 
	};

	T> class Velocity(A_type vx, A_)::T> class Velocity(A_type vx, A_)()
	{
	}

	T> class Velocity(A_type vx, A_)::~T> class Velocity(A_type vx, A_)()
	{
	}
}

//Lorentz transformations
//vector transform
//tensor transform as overload