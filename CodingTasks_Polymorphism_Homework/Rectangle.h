#pragma once
#include "Shape.h"
class Rectangle : public Shape
{
public:
	Rectangle(float width, float height, std::string colour) : width(width), height(height), Shape(colour){}
	float area(){ return width * height;}
	void draw() override { std::cout << "Drawing a " << colour << " rectangle" << std::endl; }
	~Rectangle() {}
private:
	float width;
	float height;
};

