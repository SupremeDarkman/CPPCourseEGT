<<<<<<< HEAD
<<<<<<< HEAD
#include "Client.h"

Client::Client(string name)
{
	setName(name);
}

void Client::setName(string name)
{
	this->orderName = name;
}

string Client::getName()
{
	return this->orderName;
}

void Client::addOrder(Order obj)
{
	this->orders.push_back(obj);
}

void Client::print()
{
	for  (Order o : orders)
	{
		std::cout << 
		o.print();
	}
}

=======
#include "Client.h"

Client::Client(string name)
{
	setName(name);
}

void Client::setName(string name)
{
	this->orderName = name;
}

string Client::getName()
{
	return this->orderName;
}

void Client::addOrder(Order obj)
{
	this->orders.push_back(obj);
}

void Client::print()
{
	for  (Order o : orders)
	{
		std::cout << 
		o.print();
	}
}

>>>>>>> 1d0d2b52868cca66f0f6b7311b496bba22b8ba5e
=======
#include "Client.h"

Client::Client(string name)
{
	setName(name);
}

void Client::setName(string name)
{
	this->orderName = name;
}

string Client::getName()
{
	return this->orderName;
}

void Client::addOrder(Order obj)
{
	this->orders.push_back(obj);
}

void Client::print()
{
	for  (Order o : orders)
	{
		std::cout << 
		o.print();
	}
}

>>>>>>> 1d0d2b52868cca66f0f6b7311b496bba22b8ba5e
