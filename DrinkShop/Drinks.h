#pragma once
#include <string>
#include <iostream>
using std::string;
class Drinks
{
public:

	Drinks(string type, double price, unsigned quantity);

	void setType(string type);
	void setPrice(double price);
	void setQuantity(unsigned qnt);

	string getType() const;
	double getPrice() const;
	unsigned getQuantity() const;

	virtual double calculatePrice() = 0;
private:
	string type;
	double price;
	unsigned quantity;
};

