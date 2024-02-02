#include "Member.h"

Member::Member()
{
}

Member::Member(std::string name, int age, std::string memberID)
{
	this->name = name;
	this->age = age;
	this->memberID = memberID;
}

void Member::display() const
{
	std::cout << "Name: " << this->name << std::endl
		<< "Age: " << this->age << std::endl
		<< "MemberID: " << this->memberID << std::endl;
	std::cout << std::endl;
}

void Member::borrowBook(Book* book)
{

}
