#pragma once
#include "Shape.h"
#include <iostream>
class Rectangle : public Shape
{
public:
	Rectangle(std::string colour) : Shape(colour) {}
	void draw() const override
	{
		std::cout << "Drawing a " << Shape::colour << " rectangle" << std::endl;
	}
	~Rectangle() {};
private:

};

