#pragma once
#include "Animal.h"
class Dog : public Animal
{
public:
	Dog(string kind, string name, int years, string bark);
	void setBark(string bark);
	string getBark();
	void print();
private:
	string bark;
};

