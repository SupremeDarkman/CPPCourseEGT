#pragma once
#include "Shape.h"

class ThreeDimensionalShape : public Shape
{
public:
	ThreeDimensionalShape(int a, int h);

	void setH(int h);

	int getH() const;

	virtual void print() const;
	virtual double getArea() const;
	double getVolume() const;
private:
	int h;
};

