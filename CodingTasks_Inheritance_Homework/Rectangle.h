#pragma once
#include "Shape.h"
#include <iostream>
class Rectangle : public Shape
{
public:
	void draw() override
	{
		std::cout << "Drawing a " << Shape::colour << " rectangle" << std::endl;
	}
	~Rectangle() {};
private:

};

