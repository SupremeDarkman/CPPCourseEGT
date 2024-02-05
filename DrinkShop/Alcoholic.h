#pragma once
#include "Drinks.h"

class Alcoholic : public Drinks
{

public:
	Alcoholic(string type, double price, unsigned qnt, double volume, double tax);

	double getTax();
	double getVolume();

	void setTax(double tax);
	void setVolume(double vol);

	double calculatePrice() override;

private:
	double volume;
	double tax;
};

