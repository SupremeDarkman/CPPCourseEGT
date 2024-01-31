#pragma once
#include <string>
using std::string;

class Screening
{
public:
	Screening(string movieName, int soldTickets);
	void setMovieName(string mName);
	void setSoldTickets(int sTickets);

	string getMovieName();
	int getSoldTickets();

	void printInfo();

private:
	string movieName;
	int soldTickets;
};

