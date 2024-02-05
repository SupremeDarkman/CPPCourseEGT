#include "Dog.h"
#include <iostream>

Dog::Dog(string kind, string name, int year, string bark) : Animal(kind, name, year)
{
	this->bark = bark;
}

void Dog::print()
{
	Animal::print();
	std::cout << this->bark;
}