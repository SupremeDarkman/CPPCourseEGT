#pragma once
#include <string>
using namespace std;

class Discipline
{
public:
	Discipline(string name, int lectures, int exercises);

	void setName(string name);
	void setLecters(int lect);
	void setExercises(int exer);

	string getName();
	int getLecters();
	int getExercises();

	void printDiscipline();
private:
	string name;
	int lectures;
	int exercises;
};

