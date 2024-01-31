#pragma once
#include <string>
#include <iostream>
using std::string;

class Author
{
public:
	Author(string firstName, string lastName, string naitonality);
	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setNationality(string nationality);

	string getFirstName();
	string getLastName();
	string getNationality();

	void print();

private:
	string firstName;
	string lastName;
	string nationality;
};

