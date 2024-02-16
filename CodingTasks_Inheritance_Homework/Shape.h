#pragma once
#include <string>
#include <iostream>
class Shape
{
public:
	Shape(std::string colour) : colour(colour) {}
	virtual void draw() const = 0;
	virtual ~Shape() {}
protected:
	std::string colour;
};

