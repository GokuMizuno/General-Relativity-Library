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
			const double epsilon_0 = 8.854187817E-12;  //C^2/N
			const double k_B = 1.380649E-23;  //m^2*kg/s^2*K  //Boltzmann constant

			//Quantum
			const double h = 6.626E-34;
			const double h_bar = h/(2*pi);  //TEST THIS!
			//plank length, mass, time, temperature, area
			const double m_P = sqrt((h_bar*c)/(G));
			const double l_P = sqrt((h_bar*G)/(c*c*c));
			const double t_P = sqrt((h_bar*G)/(c*c*c*c*c));
			const double T_P = sqrt((h_bar*c*c*c*c*c) / (G*k_B));
			const double a_P = l_P * l_P;

			//Solar mass, radius
			m_Sun = 1.989E30;  //kg
			r_Sun = 696.34E6;  //meters

			//Cosmological
			const double lambda = 1.1056E-52;  //m^-2
			const double H_0 = 73.8;  //km/s/Mpc
			const double AU = 1.496E11;  //m
			const double ly = 9.461E15; //m
			const double pc = 3.262 * ly;  //m

			//break;
	}
}
