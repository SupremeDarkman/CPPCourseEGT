<<<<<<< HEAD
<<<<<<< HEAD
#include "Alcoholic.h"

Alcoholic::Alcoholic(string name, double price, unsigned qnt, double volume, double tax) : Drinks(name , price, qnt)
{
    setVolume(volume);
    setTax(tax);
}

double Alcoholic::CalculatePrice()
{
    return getPrice()*(getPrice()*getTax());
}

double Alcoholic::getTax()
{
    return this->tax;
}
double Alcoholic::getVolume()
{
    return this->volume;
}
void Alcoholic::setTax(double tax)
{
    this->tax = tax;
}

void Alcoholic::setVolume(double vol)
{
    this->volume = vol;
}

void Alcoholic::print()
{
    Drinks::print();
    std::cout << "Volume: " << getVolume() << " Tax: " << getTax();
} 
=======
#include "Alcoholic.h"

Alcoholic::Alcoholic(string name, double price, unsigned qnt, double volume, double tax) : Drinks(name , price, qnt)
{
    setVolume(volume);
    setTax(tax);
}

double Alcoholic::CalculatePrice()
{
    return getPrice()*(getPrice()*getTax());
}

double Alcoholic::getTax()
{
    return this->tax;
}
double Alcoholic::getVolume()
{
    return this->volume;
}
void Alcoholic::setTax(double tax)
{
    this->tax = tax;
}

void Alcoholic::setVolume(double vol)
{
    this->volume = vol;
}

void Alcoholic::print()
{
    Drinks::print();
    std::cout << "Volume: " << getVolume() << " Tax: " << getTax();
} 
>>>>>>> 1d0d2b52868cca66f0f6b7311b496bba22b8ba5e
=======
#include "Alcoholic.h"

Alcoholic::Alcoholic(string name, double price, unsigned qnt, double volume, double tax) : Drinks(name , price, qnt)
{
    setVolume(volume);
    setTax(tax);
}

double Alcoholic::CalculatePrice()
{
    return getPrice()*(getPrice()*getTax());
}

double Alcoholic::getTax()
{
    return this->tax;
}
double Alcoholic::getVolume()
{
    return this->volume;
}
void Alcoholic::setTax(double tax)
{
    this->tax = tax;
}

void Alcoholic::setVolume(double vol)
{
    this->volume = vol;
}

void Alcoholic::print()
{
    Drinks::print();
    std::cout << "Volume: " << getVolume() << " Tax: " << getTax();
} 
>>>>>>> 1d0d2b52868cca66f0f6b7311b496bba22b8ba5e
