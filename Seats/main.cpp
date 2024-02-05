#include <iostream>
#include "Plane.h"

int main()
{

	Plane plane1;
	plane1.bookSeat(1);
	plane1.bookSeat(0);
	plane1.whereIsEmpty();
	plane1.bookSeat(-10);
	plane1.whereIsEmpty();

	return 0;
}