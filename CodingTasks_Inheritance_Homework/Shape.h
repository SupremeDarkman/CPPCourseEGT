#pragma once
#include <string>
#include <iostream>
class Shape
{
public:
	Shape() : colour("red") {}
	virtual void draw() = 0;
	~Shape() {}
protected:
	std::string colour;
};

