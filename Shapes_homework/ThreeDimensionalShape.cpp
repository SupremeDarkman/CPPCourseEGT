#include "ThreeDimensionalShape.h"

ThreeDimensionalShape::ThreeDimensionalShape(int a, int h) : Shape(a)
{
    setH(h);
}

void ThreeDimensionalShape::setH(int h)
{
    this->h = h;
}

int ThreeDimensionalShape::getH() const
{
    return this->h;
}

void ThreeDimensionalShape::print() const
{
    std::cout << "Printing in 3D print " << std::endl;
}

double ThreeDimensionalShape::getArea() const
{
    std::cout << "Calculating area of ThreeDimShape... " << std::endl;
    return 0.0;
}

double ThreeDimensionalShape::getVolume() const
{
    std::cout << "Calculating volume of ThreeDimShape... " << std::endl;
    return 0.0;
}
