#pragma once
#include <iostream>

class Shape
{
public:
	Shape(int a);
	
	void setA(int a);

	int getA() const;

	virtual void print() const;
	virtual double getArea() const;

private:
	int a;
};

