#include "Cars.h"

Cars::Cars(string brand, string model, string type, string colour, string VIN, string plate, double fuelConsumption, double tax, double milage)
{
    setBrand(brand);
    setModel(model);
    setType(type);
    setColour(colour);
    setVIN(VIN);
    setPlate(plate);
    setFuelConsumption(fuelConsumption);
    setTax(tax);
    setMilage(milage);
}

void Cars::setBrand(string brand)
{
    this->brand = brand;
}

void Cars::setModel(string model)
{
    this->model = model;
}

void Cars::setType(string type)
{
    this->type = type;
}

void Cars::setColour(string colour)
{
    this->colour = colour;
}

void Cars::setVIN(string VIN)
{
    this->VIN = VIN;
}

void Cars::setPlate(string plate)
{
    this->plate = plate;
}

void Cars::setFuelConsumption(double fuelCons)
{
    this->fuelConsumption = fuelCons;
}

void Cars::setTax(double tax)
{
    this->tax = tax;
}

void Cars::setMilage(double milage)
{
    this->milage = milage;
}

string Cars::getBrand()
{
    return this->brand;
}

string Cars::getModel()
{
    return this->model;
}

string Cars::getType()
{
    return this->type;
}

string Cars::getColour()
{
    return this->colour;
}

string Cars::getVIN()
{
    return this->VIN;
}

string Cars::getPlate()
{
    return this->plate;
}

double Cars::getFuelConsumption()
{
    return this->fuelConsumption;
}

double Cars::getTax()
{
    return this->tax;
}

double Cars::getMilage()
{
    return this->milage;
}

void Cars::print()
{
}
