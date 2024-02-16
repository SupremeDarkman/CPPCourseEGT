#include "Circle.h"
#include "Rectangle.h"
#include <vector>
int main()
{
	Shape* circle = new Circle();
	Shape* rectangle = new Rectangle();
	std::vector<Shape*> shapes;

	shapes.push_back(circle);
	shapes.push_back(rectangle);

	for (unsigned i = 0; i < shapes.size(); i++)
	{
		shapes.at(i)->draw();
		std::cout << std::endl;
	}

	return 0;
}