#pragma once
#include "Shape.h"
#include <string>
#include <iostream>
using std::string;

class TwoDimensionalShape : public Shape
{
public:
	TwoDimensionalShape(int a, int size, int position, string shape, char ch);
	
	void setSize(int size);
	void setPosition(int position);
	void setShape(string shape);
	void setCh(char ch);

	int getSize() const;
	int getPosition() const;
	string getShape() const;
	char getCh() const;

	virtual void print() const;
	virtual double getArea() const;


private:
	int size;
	int position;
	string shape;
	char ch;
};

