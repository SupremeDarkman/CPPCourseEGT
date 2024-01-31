#include "TwoDimensionalShape.h"
#include "ThreeDimensionalShape.h"
#include "Rectangle.h"
#include <vector>
using std::vector;

int main()
{
	Shape* TwoDimensitonalShapePtr = new TwoDimensionalShape(20, 4, 5, "two", 't');
	Shape* ThreeDimensionalShapePtr = new ThreeDimensionalShape(15, 20);
	Rectangle* RectanglePtr1 = new Rectangle(20, 10, 25, "Figure is rectangle", 'r', 20);
	Rectangle* RectanglePtr2 = new Rectangle(25, 15, 30, "Figure is rectangle", 'r', 25);

	//Testing overloading operators
	std::cout << std::endl;
	bool temp1 = *RectanglePtr1 > *RectanglePtr2;
	std::cout << std::boolalpha << temp1 << std::endl;

	bool temp2 = *RectanglePtr1 < *RectanglePtr2;
	std::cout << std::boolalpha << temp2 << std::endl;

	bool temp3 = *RectanglePtr1 == *RectanglePtr2;
	std::cout << std::boolalpha << temp3 << std::endl;
	std::cout << std::endl;

	vector<Shape*> myShapes;
	myShapes.push_back(TwoDimensitonalShapePtr);
	myShapes.push_back(ThreeDimensionalShapePtr);
	myShapes.push_back(RectanglePtr1);
	myShapes.push_back(RectanglePtr2);

	for (unsigned i = 0; i < myShapes.size(); i++)
	{
		myShapes.at(i)->print();
		std::cout << myShapes.at(i)->getArea() << std::endl; 
	}


	return 0;
}