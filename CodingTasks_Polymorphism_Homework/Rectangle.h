#pragma once
#include "Shape.h"
class Rectangle : public Shape
{
public:
	Rectangle(float width, float height) : width(width), height(height) {}
	float area(){ return width * height;}
	void draw() override { std::cout << "Drawing a " << Shape::colour << " rectangle" << std::endl; }
	~Rectangle() {}
private:
	float width;
	float height;
};

