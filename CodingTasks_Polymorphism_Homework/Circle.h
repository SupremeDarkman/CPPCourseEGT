#pragma once
#include "Shape.h"
const float PI = 3.14;
class Circle : public Shape
{
public:
	Circle(float r, std::string colour) : r(r), Shape(colour) {}
	float area() { return r * r * PI; }
	void draw() const override { std::cout << "Drawing a " << colour << " circle" << std::endl; }
	~Circle() {}
private:
	float r;
};

