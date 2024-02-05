#include "Drinks.h"

Drinks::Drinks(string type, double price, unsigned quantity)
{
    setType(type);
    setPrice(price);
    setQuantity(quantity);
}

void Drinks::setType(string type)
{
    this->type = type;
}

void Drinks::setPrice(double price)
{
    this->price = price;
}

void Drinks::setQuantity(unsigned qnt)
{
    this->quantity = qnt;
}

string Drinks::getType() const 
{
    return this->type;
}

double Drinks::getPrice() const
{
    return this->price;
}

unsigned Drinks::getQuantity() const
{
    return this->quantity;
}
