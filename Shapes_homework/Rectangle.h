#pragma once
#include "TwoDimensionalShape.h"
#include <string>
#include <iostream>
using std::string;

class Rectangle : public TwoDimensionalShape
{
	friend bool operator>(const Rectangle& rect1, const Rectangle& rect2);
	friend bool operator<(const Rectangle& rect1, const Rectangle& rect2);
	friend bool operator==(const Rectangle& rect1, const Rectangle& rect2);
public:
	Rectangle(int a, int size, int position, string sh, char chr, int sideB);

	void setSideB(int sideB);

	int getSideB() const;

	void print() const;
	double getArea() const;

private:
	int sideB;
};

