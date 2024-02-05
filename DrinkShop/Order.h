#pragma once
#include "Drinks.h"
#include <vector>

using std::string;
using std::vector;

class Order
{
public:
	Order(vector<Drinks*> drinks, string date);

	void setDate(string date);
	void setTotalSum(double tSum);
	void setDrinks(vector<Drinks*> drinks);


	string getDate() const;
	vector<Drinks*> getDrinks();
	double getTotalSum() const;

	void print() const;
private:
	vector<Drinks*> drinks;
	string date;
	double totalSum;
};