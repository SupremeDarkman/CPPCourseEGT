#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "Screening.h"
using std::string;
using std::vector;

class Hall
{
public:
	Hall(string hallName, int seats);
	Hall(string hallName, int seats, vector<Screening> screeningList);

	void setHallName(string hName);
	void setSeats(int seats);
	void setScreeningList(vector<Screening>);
	
	string getHallName();
	int getSeats();
	vector<Screening> getScreeningList();

	void addScreening(Screening screen);
	void print();
private:
	string hallName;
	int seats;
	vector<Screening> screeningList;
};

