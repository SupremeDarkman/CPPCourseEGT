#pragma once
#include <string>
#include <iostream>
class Shape
{
public:
	Shape() : colour("red") {}
	virtual void draw() const = 0;
	virtual ~Shape() {}
protected:
	std::string colour;
};

