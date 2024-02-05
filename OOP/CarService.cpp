#include "CarService.h"

Car CarService::inputData()
{
	string model;
	int year;
	string color;
	string fuel;
	string vin;
	string transmission;
	string plate;

	cout << "Enter model " << endl;
	cin >> model;
	cout << "Enter year " << endl;
	cin >> year;
	cout << "Enter color " << endl;
	cin >> color;
	cout << "Enter fuel " << endl;
	cin >> fuel;
	cout << "Enter vin " << endl;
	cin >> vin;
	cout << "Enter transmission " << endl;
	cin >> transmission;
	cout << "Enter plate " << endl;
	cin >> plate;

	Car myCar(model, year, color, fuel, vin, transmission, plate);
	return myCar;
}