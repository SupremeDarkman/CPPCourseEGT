#pragma once
#include "Shape.h"
class Circle : public Shape
{
public:
	Circle(std::string colour) : Shape(colour) {}
	void draw() const override
	{
		std::cout << "Drawing a " << Shape::colour << " circle" << std::endl;
	}
	~Circle() {}
private:

};

