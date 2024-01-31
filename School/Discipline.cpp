#include <iostream>
#include "Discipline.h"
Discipline::Discipline(string name, int lectures, int exercises)
{
	setName(name);
	setLecters(lectures);
	setExercises(exercises);
}

void Discipline::setName(string name)
{
	this->name = name;
}

void Discipline::setLecters(int lect)
{
	this->lectures = lect;
}

void Discipline::setExercises(int exer)
{
	this->exercises = exer;
}

string Discipline::getName()
{
	return this->name;
}

int Discipline::getLecters()
{
	return this->lectures;
}

int Discipline::getExercises()
{
	return this->exercises;
}

void Discipline::printDiscipline()
{
	std::cout << this->name << " " << this->lectures << " " << this->exercises;
}
