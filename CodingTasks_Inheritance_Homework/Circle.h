#pragma once
#include "Shape.h"
class Circle : public Shape
{
public:
	void draw() override
	{
		std::cout << "Drawing a " << Shape::colour << " circle" << std::endl;
	}
	~Circle() {}
private:

};

