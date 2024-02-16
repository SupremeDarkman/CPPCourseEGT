#pragma once
class Shape
{
public:
	Shape(std::string colour)  { this->colour = colour; }

	virtual float area() = 0;
	virtual void draw() = 0;
	virtual ~Shape() {}

protected:
	std::string colour;
};

