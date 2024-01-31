#include "Shape.h"

Shape::Shape(int a)
{
	setA(a);
}

void Shape::setA(int a)
{
	this->a = a;
}

int Shape::getA() const
{
	return this->a;
}

void Shape::print() const
{
	std::cout << " In shape " << std::endl;

}

double Shape::getArea() const
{
	std::cout << "Calculating area of Shape ... " << std::endl;
	return 0.0;
}
