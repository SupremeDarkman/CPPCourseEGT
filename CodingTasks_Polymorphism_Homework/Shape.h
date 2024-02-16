#pragma once
class Shape
{
public:
	Shape() : colour("red") {}

	virtual float area() = 0;
	virtual void draw() = 0;
	virtual ~Shape() {}
protected:
	std::string colour;
};

