#include "Cinema.h"
#include <iostream>

Cinema::Cinema(string name, string address, vector<Hall> hallsList)
{
    setName(name);
    setAddress(address);
    setHallsList(hallsList);
}

void Cinema::setName(string name)
{
    this->name = name;
}

string Cinema::getName()
{
    return this->name;
}

void Cinema::setAddress(string address)
{
    this->address = address;
}

string Cinema::getAddress()
{
    return this->address;
}

void Cinema::setHallsList(vector<Hall> hallsList)
{
    this->hallsList = hallsList;
}

vector<Hall> Cinema::getHallsList()
{
    return this->hallsList;
}

void Cinema::addHallToList(Hall hall)
{
    this->hallsList.push_back(hall);
}

void Cinema::print()
{
    std::cout << "Cinema Name: " << getName() << std::endl
        << "Address: " << getAddress() << std::endl;
    for (int i = 0; i < hallsList.size(); i++)
    {
        hallsList.at(i).print();
        std::cout << std::endl;
    }
}
