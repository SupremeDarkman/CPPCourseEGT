#pragma once
#include <string>
using namespace std;

class Animal
{
public:

	Animal(string kind, string name, int years);
	void print();
	void setName(string name);
	string getName();
	void setKind(string kind);
	string getKind();
	void setYears(int years);
	int getYears();

private:
	string kind;
	string name;
	int years;
};

