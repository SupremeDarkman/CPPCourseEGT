<<<<<<< HEAD
<<<<<<< HEAD
#include "Order.h"

Order::Order(Drinks drinks)
{
    setDrink(drinks);
    setData(time(0));

}

void Order::setDrink(Drinks obj)
{
    this->drinks = obj;
}

void Order::setData(time_t data)
{
    this->data = data;
}

void Order::setSum(double sum)
{
    this->sum = sum;
}

time_t Order::getData()
{
    return this->data;
}

Drinks Order::getDrink()
{
    return this->drinks;
}

double Order::getSum()
{
    return this->sum;
}

void Order::print()
{
    this->drinks.print();
}
=======
#include "Order.h"

Order::Order(Drinks drinks)
{
    setDrink(drinks);
    setData(time(0));

}

void Order::setDrink(Drinks obj)
{
    this->drinks = obj;
}

void Order::setData(time_t data)
{
    this->data = data;
}

void Order::setSum(double sum)
{
    this->sum = sum;
}

time_t Order::getData()
{
    return this->data;
}

Drinks Order::getDrink()
{
    return this->drinks;
}

double Order::getSum()
{
    return this->sum;
}

void Order::print()
{
    this->drinks.print();
}
>>>>>>> 1d0d2b52868cca66f0f6b7311b496bba22b8ba5e
=======
#include "Order.h"

Order::Order(Drinks drinks)
{
    setDrink(drinks);
    setData(time(0));

}

void Order::setDrink(Drinks obj)
{
    this->drinks = obj;
}

void Order::setData(time_t data)
{
    this->data = data;
}

void Order::setSum(double sum)
{
    this->sum = sum;
}

time_t Order::getData()
{
    return this->data;
}

Drinks Order::getDrink()
{
    return this->drinks;
}

double Order::getSum()
{
    return this->sum;
}

void Order::print()
{
    this->drinks.print();
}
>>>>>>> 1d0d2b52868cca66f0f6b7311b496bba22b8ba5e
