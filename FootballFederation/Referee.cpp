<<<<<<< HEAD
<<<<<<< HEAD
#include "Referee.h"
Referee::Referee(string name, string pass, unsigned result) : User(name, pass)
{
	setResult(result);
}

void Referee::setResult(unsigned result)
{
	this->result = result;
}

unsigned Referee::getResult()
{
	return this->result;
}
=======
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
>>>>>>> 1d0d2b52868cca66f0f6b7311b496bba22b8ba5e
=======
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
>>>>>>> 1d0d2b52868cca66f0f6b7311b496bba22b8ba5e
