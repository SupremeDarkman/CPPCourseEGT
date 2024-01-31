#include <iostream>
#include "Teacher.h"

Teacher::Teacher(string name, string title, Discipline& discipline)
	: name(name), discipline(discipline)
{
	this->title = title;
}

void Teacher::setDiscpline(Discipline disc)
{
	this->discipline = disc;
}

Discipline Teacher::getDiscpline()
{
	return this->discipline;
}

void Teacher::print()
{
	std::cout << "Teacher name: " << this->name << std::endl
			  << "Title: " << this->title << std::endl 
			  << "Discipline: ";
	this->discipline.printDiscipline();
}
