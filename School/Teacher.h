#pragma once
#include <string>
#include <vector>
#include "Discipline.h"

using namespace std;

class Teacher
{
public:
	Teacher(string name, string title);
	Teacher(string name, string title, Discipline&);
	Teacher(string name, string title, Discipline&, vector<Discipline>*);
	
	void setName(string name);
	void setTitle(string title);
	void setDiscpline(Discipline disc);
	
	string getName();
	string getTitle();
	Discipline getDiscpline();
	
	void print();
private:
	string name;
	string title;
	Discipline discipline;
	

};

