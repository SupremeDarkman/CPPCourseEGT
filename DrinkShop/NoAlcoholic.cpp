#include "NoAlcoholic.h"

NoAlcoholic::NoAlcoholic(string type, double price, unsigned qnt, double liters, double cityTax) :Drinks(type, price, qnt)
{
    setLiters(liters);
    setCityTax(cityTax);
}

void NoAlcoholic::setLiters(double liters)
{
    this->liters = liters;
}

void NoAlcoholic::setCityTax(double cityTax)
{
    this->cityTax = cityTax;
}

double NoAlcoholic::getLiters()
{
    return this->liters;
}

double NoAlcoholic::getCityTax()
{
    return this->cityTax;
}

double NoAlcoholic::calculatePrice()
{
    return getQuantity() * (getPrice() + getCityTax());
}