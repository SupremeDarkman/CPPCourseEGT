#pragma once
#include "Drinks.h"

class NoAlcoholic : public Drinks
{
public:
	NoAlcoholic(string type, double price, unsigned qnt, double liters, double cityTax);

	void setLiters(double liters);
	void setCityTax(double citytTax);

	double getLiters();
	double getCityTax();

	double calculatePrice() override;
private:
	double liters;
	double cityTax;
};

