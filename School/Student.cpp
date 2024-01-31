#include "Student.h"
#include "iostream"

Student::Student(string name, int id)
{
	setName(name);
	setId(id);
}

void Student::setName(string name)
{
	this->name = name;
}

void Student::setId(int)
{
	this->id = id;
}

string Student::getName()
{
	return this->name;
}

int Student::getId()
{
	return this->id;
}

void Student::print()
{
	std::cout << "Student name: " << this->name << std::endl
		<< "Id: " << this->id << std::endl;
}
