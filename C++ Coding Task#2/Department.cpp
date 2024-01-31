#include "Department.h"

Department::Department(std::string departmentName)
{
	this->departmentName = departmentName;
	this->employees = nullptr;
	this->numEmployees = 0;
}

void Department::addEmployee(Employee* employees)
{
	this->numEmployees++;
	employees[numEmployees - 1] = *employees;
}

void Department::displayEmployess() const
{
	for (unsigned i = 0; i < this->numEmployees; i++)
	{
		this->employees->display();
	}
}
