#include "Screening.h"
#include <iostream>

Screening::Screening(string movieName, int soldTickets)
{
	setMovieName(movieName);
	setSoldTickets(soldTickets);
}

void Screening::setMovieName(string mName)
{
	if (mName.length() > 5)
	{
		this->movieName = mName;
	}
	else
	{
		this->movieName = "";
		std::cerr << "Too short" << std::endl;
	}
}

void Screening::setSoldTickets(int sTickets)
{
	if (sTickets >= 0)
		this->soldTickets = sTickets;
	else
		this->soldTickets = 0;

}

string Screening::getMovieName()
{
	return this->movieName;
}

int Screening::getSoldTickets()
{
	return this->soldTickets;
}

void Screening::printInfo()
{
	std::cout << "Movie name: " << getMovieName() << std::endl 
			  << "Sold Tickets: "	<< getSoldTickets() << std::endl;
}
