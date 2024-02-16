#pragma once
#include "Shape.h"
const float PI = 3.14;
class Circle : public Shape
{
public:
	Circle(float r) : r(r) {}
	float area() { return r * r * PI; }
	void draw() override { std::cout << "Drawing a " << Shape::colour << " circle" << std::endl; }
	~Circle() {}
private:
	float r;
};

