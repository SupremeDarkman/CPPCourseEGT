#include <iostream>
#include "Department.h"

int main()
{
	Employee empl1, empl2, empl3;
	Department depart("Department");
	depart.addEmployee(&empl1);
	depart.addEmployee(&empl2);
	depart.addEmployee(&empl3);
}
