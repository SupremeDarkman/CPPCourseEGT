#include "Referee.h"
Referee::Referee(string name, string pass) : User(name, pass)
{
}

void Referee::setResult(unsigned result)
{
	this->result = result;
}

unsigned Referee::getResult()
{
	return this->result;
}
