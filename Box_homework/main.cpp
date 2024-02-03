#include <iostream>
#include "Box.h"
int main()
{
	Box box1(10,10,10), box2(15,4,1), box3;
	box3 = box1 + box2;
	std::cout << box3;
}