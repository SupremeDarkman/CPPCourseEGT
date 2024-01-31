#include "Employee.h"

Employee::Employee()
{
	this->name = "";
	this->employeeID = "";
	this->position = "";
}

Employee::Employee(std::string name, std::string employessID, std::string position)
{
	this->name = name;
	this->employeeID = employeeID;
	this->position = position;
}

void Employee::display() const
{
	std::cout << "Name: " << this->name << std::endl
		<< "EmployeeID: " << this->employeeID << std::endl
		<< "Position: " << this->position << std::endl;
	std::cout << std::endl;	
}
