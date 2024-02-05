#pragma once
#include <vector>
#include <iostream>
const int CAPACITY = 10;
class Plane
{
public:
	Plane();
	void bookSeat(int numOfSeat);
	void whereIsEmpty() const; // Showing the array with the 1/0
private:
	bool isItAlreadTaken(int num) const;
	bool isItFull() const;
	bool seats[CAPACITY] = {};

};

