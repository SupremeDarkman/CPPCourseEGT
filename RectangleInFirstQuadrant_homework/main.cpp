#include <iostream>
#include <cmath>
struct Point
{
	int x =0, y=0;
};

struct Rectangle
{
	Point a; // left and down coord of the Point
	Point b; // right and down
	Point c; // right and up
	Point d; // left and up
};

double length(Point k, Point p)
{
	int x2MinusX1 = p.x - k.x;
	int y2MinusY1 = p.y - k.y;
	return sqrt((x2MinusX1 * x2MinusX1) + (y2MinusY1 * y2MinusY1));
}

bool checkIfIsRect(Rectangle rect)
{
	return (rect.a.y == rect.b.y && rect.a.x == rect.d.x && rect.c.y == rect.d.y && rect.c.x == rect.b.x);

}

double S(Rectangle rect)
{
	return length(rect.d, rect.a) * length(rect.a, rect.b);
}
double P(Rectangle rect)
{
	return 2 * length(rect.d, rect.a) + 2 * length(rect.a, rect.b);
}

bool checkIfIsSquare(Rectangle rect)
{
	if (checkIfIsRect(rect) && (length(rect.a, rect.d) == length(rect.a, rect.b)))
	{
		return true;
	}
	return false;
}
bool IsInFirstQuandrant(Rectangle rect)
{
	if ((rect.a.x < 0 || rect.b.x < 0 || rect.c.x < 0 || rect.d.x < 0) ||
		(rect.a.y < 0 || rect.b.y < 0 || rect.c.y < 0 || rect.d.y < 0))
	{
		return false;
	}
	return true;
}

int main()
{
	Rectangle rect;
	rect.a.x = 5;
	rect.a.y= 2;

	rect.b.x= 0;
	rect.b.y= 2;

	rect.c.x= 0;
	rect.c.y= 0;
	
	rect.d.x= 5;
	rect.d.y= 0;

	std::cout << std::boolalpha << "Is it rectangle: " << checkIfIsRect(rect) << std::endl;
	std::cout << std::boolalpha << "Is it square: " << checkIfIsSquare(rect) << std::endl;
	std::cout << std::boolalpha << "Is it in first quandrant: " << IsInFirstQuandrant(rect) << std::endl;
	std::cout << std::boolalpha << "P: " << P(rect) << std::endl;
	std::cout << std::boolalpha << "S: " << S(rect) << std::endl;


	return 0;
}
