<<<<<<< HEAD
<<<<<<< HEAD
#pragma once
#include "Order.h"

#include <string>
#include <vector>

using std::string;
using std::vector;

class Client
{
public:
	Client(string name);

	void setName(string name);
	string getName();

	void addDrink(Drinks drink);

	void print();
private:
	int number;	
	string orderName;
	vector<Drinks*> drinks;
};

=======
#pragma once
#include "Order.h"

#include <string>
#include <vector>

using std::string;
using std::vector;

class Client
{
public:
	Client(string name);

	void setName(string name);
	string getName();

	void addDrink(Drinks drink);

	void print();
private:
	int number;	
	string orderName;
	vector<Drinks*> drinks;
};

>>>>>>> 1d0d2b52868cca66f0f6b7311b496bba22b8ba5e
=======
#pragma once
#include "Order.h"

#include <string>
#include <vector>

using std::string;
using std::vector;

class Client
{
public:
	Client(string name);

	void setName(string name);
	string getName();

	void addDrink(Drinks drink);

	void print();
private:
	int number;	
	string orderName;
	vector<Drinks*> drinks;
};

>>>>>>> 1d0d2b52868cca66f0f6b7311b496bba22b8ba5e
