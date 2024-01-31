#include "Hall.h"

Hall::Hall(string name, int seats)
{
    setHallName(name);
    setSeats(seats);
}

Hall::Hall(string name, int seats, vector<Screening> screeningList)
    : screeningList(screeningList)
{
    setHallName(name);
    setSeats(seats);
}

void Hall::setHallName(string hName)
{
    this->hallName = hName;
}

void Hall::setSeats(int seats)
{
    this->seats = seats;

}

void Hall::setScreeningList(vector<Screening>)
{
   
}

void Hall::addScreening(Screening screen)
{
   this->screeningList.push_back(screen);
}

void Hall::print()
{
    std::cout << "Hall: " << getHallName() << std::endl
        << "Seats: " << getSeats() << std::endl;
    for (size_t i = 0; i < this->screeningList.size(); i++)
    {
        this->screeningList.at(i).printInfo();
    }

}


string Hall::getHallName()
{
    return this->hallName;
}

int Hall::getSeats()
{
    return this->seats;
}

vector<Screening> Hall::getScreeningList()
{
    return this->screeningList;
}
