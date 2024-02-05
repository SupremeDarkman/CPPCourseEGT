#include "Order.h"

Order::Order(vector<Drinks*> drinks, string date)
{
    setDrinks(drinks);
    setDate(date);
}

void Order::setDate(string date)
{
    this->date = date;
}

void Order::setTotalSum(double tSum)
{
    this->totalSum = tSum;
}

void Order::setDrinks(vector<Drinks*> drinks)
{
    this->drinks = drinks;
}

string Order::getDate() const
{
    return this->date;
}

vector<Drinks*> Order::getDrinks()
{
    return this->drinks;
}

double Order::getTotalSum() const
{
    return this->totalSum;
}

void Order::print() const
{
    for (unsigned i = 0; i < this->drinks.size(); i++)
    {
        std::cout << drinks[i]->getType() << " -> " << drinks[i]->calculatePrice();
    }
}
