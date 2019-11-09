#pragma once
#include <cmath>
#include <complex>

/*
Precession
You need two objects; one orbits about the other, and precesses
Includes Thomas precession, de Sitter precession, and Lense-Thirring precession
*/

namespace GRLib
{
	class Precession
	{
		double AngleOfPrecession()
		{
			;
		}
	};

	/*Thomas precession is a SR correction to the observer being in a non-inertial frame*/
	class ThomasPrecession : Precession
	{

	};

	/*de Sitter precession is a GR correction accounting for the Schwartschild metric of curved spacetime
	near a large non-rotating mass*/
	class deSitterPrecession : Precession
	{};

	/*Lense-Thirring precession is a GR correction accounting for the frame dragging to the Kerr metric
	due to a large rotating mass*/
	class LenseThirringPrecession : Precession
	{};
}
