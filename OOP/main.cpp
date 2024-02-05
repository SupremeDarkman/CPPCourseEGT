#include <vector>
#include "Car.h"
#include "CarService.h"

int main()
{
	vector<Car> cars;

	CarService cs;

	for (unsigned i = 0; i < 2; i++)
	{
		Car myCar = cs.inputData();
		cars.push_back(myCar);

	}

	for (unsigned i = 0; i < cars.size(); i++)
	{
		cars.at(i).displayMessage();
	}



	return 0;
}