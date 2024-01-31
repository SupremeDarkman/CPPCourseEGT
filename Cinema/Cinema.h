#pragma once
#include <string>
#include <vector>
#include "Hall.h"
using std::string;
using std::vector;

class Cinema
{
public:
	Cinema(string name, string address, vector<Hall> hallsList);
	void setName(string name);
	string getName();
	void setAddress(string address);
	string getAddress();
	void setHallsList(vector<Hall> hallsList);
	vector<Hall> getHallsList();
	void addHallToList(Hall hall);
	void print();
private:
	string name;
	string address;
	vector<Hall> hallsList;
};

