#include <iostream>
#include "Circle.h"
#include "Rectangle.h"

int main()
{
	Shape* shape1Ptr = new Circle();
	Shape* shape2Ptr = new Rectangle();

	shape1Ptr->draw();
	shape2Ptr->draw();

	
	
	delete shape1Ptr;
	shape1Ptr = nullptr;
	delete shape2Ptr;
	shape2Ptr = nullptr;
	
	return 0;
}
