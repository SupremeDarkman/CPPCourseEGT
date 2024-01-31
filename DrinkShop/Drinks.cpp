<<<<<<< HEAD
<<<<<<< HEAD
#include "Drinks.h"

Drinks::Drinks(string name, double price, unsigned quantity)
{
    setName(name);
    setPrice(price);
    setQuantity(quantity);
}

void Drinks::setName(string name)
{
    this->name = name;
}

void Drinks::setPrice(double price)
{
    this->price = price;
}

void Drinks::setQuantity(unsigned qnt)
{
    this->quantity = qnt;
}

string Drinks::getName()
{
    return this->name;
}

double Drinks::getPrice()
{
    return this->price;
}

unsigned Drinks::getQuantity()
{
    return this->quantity;
}

void Drinks::print()
{
    std::cout << "Name: " << getName() << " Price: " << getPrice() << " Quantity: " << getQuantity() <<  std::endl;
}
=======
#include "Drinks.h"

Drinks::Drinks(string name, double price, unsigned quantity)
{
    setName(name);
    setPrice(price);
    setQuantity(quantity);
}

void Drinks::setName(string name)
{
    this->name = name;
}

void Drinks::setPrice(double price)
{
    this->price = price;
}

void Drinks::setQuantity(unsigned qnt)
{
    this->quantity = qnt;
}

string Drinks::getName()
{
    return this->name;
}

double Drinks::getPrice()
{
    return this->price;
}

unsigned Drinks::getQuantity()
{
    return this->quantity;
}

void Drinks::print()
{
    std::cout << "Name: " << getName() << " Price: " << getPrice() << " Quantity: " << getQuantity() <<  std::endl;
}
>>>>>>> 1d0d2b52868cca66f0f6b7311b496bba22b8ba5e
=======
#include "Drinks.h"

Drinks::Drinks(string name, double price, unsigned quantity)
{
    setName(name);
    setPrice(price);
    setQuantity(quantity);
}

void Drinks::setName(string name)
{
    this->name = name;
}

void Drinks::setPrice(double price)
{
    this->price = price;
}

void Drinks::setQuantity(unsigned qnt)
{
    this->quantity = qnt;
}

string Drinks::getName()
{
    return this->name;
}

double Drinks::getPrice()
{
    return this->price;
}

unsigned Drinks::getQuantity()
{
    return this->quantity;
}

void Drinks::print()
{
    std::cout << "Name: " << getName() << " Price: " << getPrice() << " Quantity: " << getQuantity() <<  std::endl;
}
>>>>>>> 1d0d2b52868cca66f0f6b7311b496bba22b8ba5e
