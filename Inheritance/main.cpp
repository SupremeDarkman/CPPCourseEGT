#include <iostream>
#include <vector>
#include "Dog.h"

int main()
{
	Dog g("sss", "sss", 4, "asd");
	Animal* gPtr = &g;
	Dog* dogPtr = new Dog("ffff", "asd", 7, "asdDD");
	
	dogPtr->getYears();
	
	std::vector<Animal*> animals;
	animals.push_back(dogPtr);
	animals.push_back(gPtr);
	
	std::vector<Animal> secondAnimals;
	
	delete dogPtr;

	return 0;
}