<<<<<<< HEAD
<<<<<<< HEAD
#pragma once
#include "Drinks.h"

#include <ctime>
#include <vector>

using std::vector;

class Order
{
public:
	Order(Drinks drinks);

	void setDrink(Drinks obj);
	void setData(time_t data);
	void setSum(double sum);


	time_t getData();
	Drinks getDrink();
	double getSum();

	void print();
private:
	Drinks drinks;
	time_t data;
	double sum;
=======
#pragma once
#include "Drinks.h"

#include <ctime>
#include <vector>

using std::vector;

class Order
{
public:
	Order(Drinks drinks);

	void setDrink(Drinks obj);
	void setData(time_t data);
	void setSum(double sum);


	time_t getData();
	Drinks getDrink();
	double getSum();

	void print();
private:
	Drinks drinks;
	time_t data;
	double sum;
>>>>>>> 1d0d2b52868cca66f0f6b7311b496bba22b8ba5e
=======
#pragma once
#include "Drinks.h"

#include <ctime>
#include <vector>

using std::vector;

class Order
{
public:
	Order(Drinks drinks);

	void setDrink(Drinks obj);
	void setData(time_t data);
	void setSum(double sum);


	time_t getData();
	Drinks getDrink();
	double getSum();

	void print();
private:
	Drinks drinks;
	time_t data;
	double sum;
>>>>>>> 1d0d2b52868cca66f0f6b7311b496bba22b8ba5e
};