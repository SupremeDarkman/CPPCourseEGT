#include "Alcoholic.h"

Alcoholic::Alcoholic(string name, double price, unsigned qnt, double volume, double tax) : Drinks(name , price, qnt)
{
    setVolume(volume);
    setTax(tax);
}

double Alcoholic::calculatePrice()
{
    return getQuantity()*(getPrice()*getTax());
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