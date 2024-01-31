<<<<<<< HEAD
<<<<<<< HEAD
#pragma once
#include "Drinks.h"

class NoAlcoholic : public Drinks
{
public:
	NoAlcoholic(string name, double price, unsigned qnt, double liters, double cityTax);

	void setLiters(double liters);
	void setCityTax(double citytTax);

	double getLiters();
	double getCityTax();

	virtual void print();
private:
	double liters;
	double cityTax;
};

=======
#pragma once
#include "Drinks.h"

class NoAlcoholic : public Drinks
{
public:
	NoAlcoholic(string name, double price, unsigned qnt, double liters, double cityTax);

	void setLiters(double liters);
	void setCityTax(double citytTax);

	double getLiters();
	double getCityTax();

	virtual void print();
private:
	double liters;
	double cityTax;
};

>>>>>>> 1d0d2b52868cca66f0f6b7311b496bba22b8ba5e
=======
#pragma once
#include "Drinks.h"

class NoAlcoholic : public Drinks
{
public:
	NoAlcoholic(string name, double price, unsigned qnt, double liters, double cityTax);

	void setLiters(double liters);
	void setCityTax(double citytTax);

	double getLiters();
	double getCityTax();

	virtual void print();
private:
	double liters;
	double cityTax;
};

>>>>>>> 1d0d2b52868cca66f0f6b7311b496bba22b8ba5e
