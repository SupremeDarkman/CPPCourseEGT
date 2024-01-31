#pragma once
#include <string>
using std::string;

class Cars
{
public:
	Cars(string brand, string model, string type, string colour, string VIN, string plate, double fuelConsumption, double tax, double milage);

	void setBrand(string brand);
	void setModel(string model);
	void setType(string type);
	void setColour(string colour);
	void setVIN(string VIN);
	void setPlate(string plate);
	void setFuelConsumption(double fuelCons);
	void setTax(double tax);
	void setMilage(double milage);

	string getBrand();
	string getModel();
	string getType();
	string getColour();
	string getVIN();
	string getPlate();
	double getFuelConsumption();
	double getTax();
	double getMilage();


	void print();
private:
	string brand;
	string model;
	string type;
	string colour;
	string VIN;
	string plate;
	double fuelConsumption;
	double tax;
	double milage;
};

