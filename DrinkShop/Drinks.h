<<<<<<< HEAD
<<<<<<< HEAD
#pragma once
#include <string>
#include <iostream>
using std::string;
class Drinks
{
public:

	Drinks(string name, double price, unsigned quantity);

	void setName(string name);
	void setPrice(double price);
	void setQuantity(unsigned qnt);

	string getName();
	double getPrice();
	unsigned getQuantity();

	//Drinks getDrink(string name, double price);
	//Drinks addDrink(string name, double price, unsigned quantity);
	virtual void print();

private:
	string name;
	double price;
	unsigned quantity;
};

=======
#pragma once
#include <string>
#include <iostream>
using std::string;
class Drinks
{
public:

	Drinks(string name, double price, unsigned quantity);

	void setName(string name);
	void setPrice(double price);
	void setQuantity(unsigned qnt);

	string getName();
	double getPrice();
	unsigned getQuantity();

	//Drinks getDrink(string name, double price);
	//Drinks addDrink(string name, double price, unsigned quantity);
	virtual void print();

private:
	string name;
	double price;
	unsigned quantity;
};

>>>>>>> 1d0d2b52868cca66f0f6b7311b496bba22b8ba5e
=======
#pragma once
#include <string>
#include <iostream>
using std::string;
class Drinks
{
public:

	Drinks(string name, double price, unsigned quantity);

	void setName(string name);
	void setPrice(double price);
	void setQuantity(unsigned qnt);

	string getName();
	double getPrice();
	unsigned getQuantity();

	//Drinks getDrink(string name, double price);
	//Drinks addDrink(string name, double price, unsigned quantity);
	virtual void print();

private:
	string name;
	double price;
	unsigned quantity;
};

>>>>>>> 1d0d2b52868cca66f0f6b7311b496bba22b8ba5e
