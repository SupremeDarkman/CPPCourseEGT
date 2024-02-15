#pragma once
#include "Employee.h"
class Department
{
public:
	Department(std::string departmentName);
	void addEmployee(Employee* employees);
	void displayEmployess() const;
private:
	std::string departmentName;
	int numEmployees;
	Employee* employees = new Employee[numEmployees];
};

