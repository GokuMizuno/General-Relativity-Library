#pragma once
/*List of constants*/
#include <cmath>
#include <string>

namespace GRLib
{
	class Body
	{
		string name = "Generic";
		double m = 0;
		double r = 1;
		double q = 0;
		//coordinates
		Tensor1<double, 4> c(0, 0, 0, 0);

		Body(Name, mass, radius, charge, coord[4])
		{
			name = Name;
			m = mass;
			r = radius;
			q = charge;
			Tensor1<double, 4> c(coord[0], coord[1], coord[2], coord[3]);
		}

		void UpdateCoordinates(t, x, y, z)
		{
			c(t, x, y, z);
		}
		void UpdateCoordinates(double coords[4])
		{
			c(coord[0], coord[1], coord[2], coord[3]);
		}
		void UpdateName(string Name)
		{
			name = Name;
		}
		void UpdateMass(double mass)
		{
			m = mass;
		}
		void UpdateRadius(double radius)
		{
			//throw warning too, if r <=0?
			if (radius <= 0)
			{
				r = 0.00000001;
			}
			else
			{
				r = radius;
			}
		}

		string DisplayUnits()
		{
			std::cout << "Name = " << name << " mass = " << m << " radius = " << r << " charge = " << q << " coordinates = ";
			for (int i = 0; i < 4; i++)
			{
				std::cout << c[i] << ", ";
			}
			std::endl;
		}
	};
	class Units
	{
		//reference Sun
		Body Sol = new Body("Sol", 1.9891E30, 695510 * 1000, 0, [0, 0, 0, 0]);
		//reference Kerr black hole

		//switch (units) :
		//	//natural units
		//case 1:
		//	const double c = 1;
		//	const double G = 1;
		//	const double epsilon_0 = ;
		//	const double h;
		//	const double h_bar;
		//	const double lambda = ;
		//	const double H_0 = ;
		//	const double l_P = ;
		//	break;
		//	//mks
		//default:
			const double c = 3.0E8;  //m/s
			const double G = 6.67430E-11;  //(N*m^2)/kg^2
			const double epsilon_0 = ;

			//Quantum
			const double h;
			const double h_bar;
			//plank length, mass, area
			const double m_P = ;
			const double l_P = ;
			const double a_P = ;

			//Solar mass, radius
			m_Sun = ;
			r_Sun = ;

			//Cosmological
			const double lambda = ;
			const double H_0 = ;

			//break;
	}
}
