#include "Rectangle.h"

Rectangle::Rectangle(int a, int size, int position, string sh, char chr, int sideB)
    :TwoDimensionalShape(a, size, position, sh, chr)
{
    setSideB(sideB);
}

bool operator>(const Rectangle& rect1, const Rectangle& rect2)
{
    return rect1.getArea() > rect2.getArea();
}

bool operator<(const Rectangle& rect1, const Rectangle& rect2)
{
    return rect1.getArea() < rect2.getArea();
}

bool operator==(const Rectangle& rect1, const Rectangle& rect2)
{
    return rect1.getArea() == rect2.getArea();
}

void Rectangle::setSideB(int sideB)
{
    this->sideB = sideB;
}

int Rectangle::getSideB() const
{
    return this->sideB;
}

void Rectangle::print() const
{
    std::cout << "We are in Rectangle print" << std::endl;
}

double Rectangle::getArea() const
{
    //std::cout << "Calculating area of Rectangle ..." << std::endl;
    return 0.0;
}
