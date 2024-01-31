#pragma once
#include "Cars.h"
class Luxury : public Cars
{
public:
	Luxury(string brand, string model, string type, string colour, string VIN, string plate, double fuelC, double tax, double milage, double luxtax);

	void setLuxTax(double luxTax);
	double getLuxTax();

	void print();

private:
	double luxTax;
};

