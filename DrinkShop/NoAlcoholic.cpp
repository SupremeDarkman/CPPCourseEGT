<<<<<<< HEAD
<<<<<<< HEAD
#include "NoAlcoholic.h"

NoAlcoholic::NoAlcoholic(string name, double price, unsigned qnt, double liters, double cityTax) :Drinks(name, price, qnt)
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

void NoAlcoholic::print()
{
    Drinks::print();
    std::cout << "Liters " << getLiters() << " City Tax: " << getCityTax() << std::endl;
}
=======
#include "NoAlcoholic.h"

NoAlcoholic::NoAlcoholic(string name, double price, unsigned qnt, double liters, double cityTax) :Drinks(name, price, qnt)
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

void NoAlcoholic::print()
{
    Drinks::print();
    std::cout << "Liters " << getLiters() << " City Tax: " << getCityTax() << std::endl;
}
>>>>>>> 1d0d2b52868cca66f0f6b7311b496bba22b8ba5e
=======
#include "NoAlcoholic.h"

NoAlcoholic::NoAlcoholic(string name, double price, unsigned qnt, double liters, double cityTax) :Drinks(name, price, qnt)
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

void NoAlcoholic::print()
{
    Drinks::print();
    std::cout << "Liters " << getLiters() << " City Tax: " << getCityTax() << std::endl;
}
>>>>>>> 1d0d2b52868cca66f0f6b7311b496bba22b8ba5e
