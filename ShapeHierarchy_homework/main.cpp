#include <iostream>
#include "Circle.h"
#include "Rectangle.h"

int main()
{
	Shape* shape1Ptr = new Circle();
	Shape* shape2Ptr = new Rectangle();

	shape1Ptr->draw();
	shape2Ptr->draw();
}