#include "TwoDimensionalShape.h"

TwoDimensionalShape::TwoDimensionalShape(int a, int size, int position, string shape, char ch) : Shape(size)
{
	setSize(size);
	setPosition(position);
	setShape(shape);
	setCh(ch);
}

void TwoDimensionalShape::setSize(int size)
{
	this->size;
}

void TwoDimensionalShape::setPosition(int position)
{
	this->position = position;
}

void TwoDimensionalShape::setShape(string shape)
{
	this->shape = shape;
}

void TwoDimensionalShape::setCh(char ch)
{
	this->ch = ch;
}

int TwoDimensionalShape::getSize() const
{
	return this->size;
}

int TwoDimensionalShape::getPosition() const
{
	return this->position;
}

string TwoDimensionalShape::getShape() const
{
	return this->shape;
}

char TwoDimensionalShape::getCh() const
{
	return this->ch;
}

void TwoDimensionalShape::print() const
{
	std::cout << "Printing in 2D" << std::endl;
}

double TwoDimensionalShape::getArea() const
{
	std::cout << "Calculating area of TwoDimShape ... " << std::endl;
	return 0.0;
}
