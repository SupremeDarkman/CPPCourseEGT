#include <iostream>
#include "Discipline.h"
#include "Teacher.h"
int main()
{
	Discipline discpl("History", 25, 69);
	Teacher t1("Ivan Ivanov", "Mr", discpl);

	t1.print();

	return 0;
}
