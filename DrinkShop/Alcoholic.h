<<<<<<< HEAD
<<<<<<< HEAD
#pragma once
#include "Drinks.h"

class Alcoholic : public Drinks
{

public:
	Alcoholic(string name, double price, unsigned qnt, double volume, double tax);
	double CalculatePrice();

	double getTax();
	double getVolume();

	void setTax(double tax);
	void setVolume(double vol);

	virtual void print();

private:
	double volume;
	double tax;
};

=======
#pragma once
#include "Drinks.h"

class Alcoholic : public Drinks
{

public:
	Alcoholic(string name, double price, unsigned qnt, double volume, double tax);
	double CalculatePrice();

	double getTax();
	double getVolume();

	void setTax(double tax);
	void setVolume(double vol);

	virtual void print();

private:
	double volume;
	double tax;
};

>>>>>>> 1d0d2b52868cca66f0f6b7311b496bba22b8ba5e
=======
#pragma once
#include "Drinks.h"

class Alcoholic : public Drinks
{

public:
	Alcoholic(string name, double price, unsigned qnt, double volume, double tax);
	double CalculatePrice();

	double getTax();
	double getVolume();

	void setTax(double tax);
	void setVolume(double vol);

	virtual void print();

private:
	double volume;
	double tax;
};

>>>>>>> 1d0d2b52868cca66f0f6b7311b496bba22b8ba5e
