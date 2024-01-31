#include "Luxury.h"

Luxury::Luxury(string brand, string model, string type, string colour, string VIN, string plate, double fuelC, double tax, double milage, double luxtax)
	:Cars(brand, model, type, colour, VIN, plate, fuelC, tax, milage)
{
	setLuxTax(luxtax);
}

void Luxury::setLuxTax(double luxTax)
{
	this->luxTax = luxTax;
}

double Luxury::getLuxTax()
{
	return this->luxTax;
}

void Luxury::print()
{
}
