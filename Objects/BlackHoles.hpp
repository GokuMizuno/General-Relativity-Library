#pragma once
#include <math>
#include <complex>

using namespace GRLib
{
	class BlackHole
	{
		public:
		//variables, then functions
		double radius;
		//mass, spin, charge
		//photon_sphere  //should this be a function?

		//default M=0, S=0, Q=0
		//need radius, ISCO, virtual functions for other derivable properties
		Blackhole()  //constructor
		{
			double Mass = 0.0;
			double Spin = 0.0;
			double Charge = 0.0;
		};

		Blackhole(double Mass, double Spin, double Charge)
		{ }

		~Blackhole(){}  //destructor

		double ISCO()
		{
			double r = (6*G_N * M)/(c^2);
			return r;
		}

		Schwartzchild_Radius(T &mass)  //returns r_s of a given mass
		{
			T rs = (2* G_N /c^2) * *mass;
			return rs;
		}

		Ergosphere_Radius(mass, rotationalVelocity, angleOfThePointOfInterest)
		{ }

		Schwartzchild_Density(mass)
		{
			double rho = ((3*c^6)/(32*PI*G_N^3 * M^2));
			return rho;
		}

		protected:
		private:
	};

	class Schwartzchild : Blackhole
	{
		public:
		Schwartzchild(double Mass = 0.0)
		{}
		double ISCO()
		{}
		double photon_sphere()
		{  return (1.5)*r_s;  }
		protected:
		private:
	};

	class Kerr : Blackhole
	{
		public:
		Kerr(Mass = 0.0, Spin = 0.0)
		{  }
		double ISCO()
		double photon_sphere()  {}  //need to find angular momentum, make that private?
		protected:
		private:
	};
	class RN
	class //rotating, charged, mass
}
