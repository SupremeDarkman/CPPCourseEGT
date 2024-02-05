#include "Plane.h"

Plane::Plane()
{
}

void Plane::bookSeat(int numOfSeat)
{
    if (numOfSeat > CAPACITY || numOfSeat < 0)
        std::cout << "There are no such space in the plane " << std::endl;

    if (isItFull() || isItAlreadTaken(numOfSeat))
        std::cout << "There is no more space or your chosen seat is not empty. " << "For more information use whereIsEmpty" << std::endl;

    if (numOfSeat == 0) numOfSeat++;

    this->seats[numOfSeat - 1] = 1;
}

bool Plane::isItAlreadTaken(int num) const
{
    if (this->seats[num] == 1)
        return true;
    return false;
}

bool Plane::isItFull() const
{
    for (unsigned i = 0; i < CAPACITY; i++)
        if (seats[i] == 0)
            return false;
    return true;
}

void Plane::whereIsEmpty() const
{
    for (unsigned i = 0; i < CAPACITY; i++)
        std::cout << seats[i] << " ";
}

