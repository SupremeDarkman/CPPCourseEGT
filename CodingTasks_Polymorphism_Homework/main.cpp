#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include <vector>
#include <iostream>
void printArea(Shape* shape)
{
	std::cout << shape->area() << std::endl;
}

int main()
{
	Circle* circle = new Circle(2.0f, "red");
	Shape* circle2 = new Circle(3.0f, "purple");
	Shape* rectangle = new Rectangle(3, 4, "blue");
	std::vector<Shape*> shapes;

	shapes.push_back(circle);
	shapes.push_back(circle2);
	shapes.push_back(rectangle);


	for (unsigned i = 0; i < shapes.size(); i++)
	{
		shapes.at(i)->draw();
		std::cout << std::endl;
		printArea(shapes.at(i));
	}

	return 0;
}
