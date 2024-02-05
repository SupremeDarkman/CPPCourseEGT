#include "Client.h"

Client::Client(string uName, vector<Order*> orders)
{
	setUserName(uName);
	setOrders(orders);
}

void Client::setUserName(string uName)
{
	this->userName = uName;
}

void Client::setOrders(vector<Order*> orders)
{
	this->orders = orders;
}

string Client::getUserName() const
{
	return this->userName;
}

vector<Order*> Client::getOrders() const
{
	//for (unsigned i = 0; i < this->orders.size(); i++)
	//{
	//	orders[i]->print();
	//}

	return this->orders;
}

//void Client::addOrder(Order obj)
//{
//	this->orders.push_back(obj);
//}

void Client::print()
{
	std::cout << "Username: " << getUserName() << std::endl;
}

