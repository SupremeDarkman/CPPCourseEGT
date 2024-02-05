#pragma once
#include "Order.h"

#include <string>
#include <vector>

using std::string;
using std::vector;

class Client
{
public:
	Client(string name, vector<Order*> orders);

	void setUserName(string name);
	void setOrders(vector <Order*> orders);
	string getUserName() const;
	vector<Order*> getOrders() const;

	void print();
private:
	string userName;
	vector<Order*> orders;
};

