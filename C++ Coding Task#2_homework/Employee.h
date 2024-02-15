#pragma once
#include <string>
#include <iostream>
class Employee
{
public:
	Employee();
	Employee(std::string name, std::string employessID, std::string position);

	void display() const;
private:
	std::string name;
	std::string employeeID;
	std::string position;
};

