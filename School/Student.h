#pragma once

#include <string>
using namespace std;

class Student
{
public:
	Student(string, int);
	void setName(string);
	void setId(int);
	
	string getName();
	int getId();
	
	void print();
private:
	string name;
	int id;
};

