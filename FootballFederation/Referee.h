#pragma once
#include "User.h"
class Referee : public User
{
public:
	Referee(string name, string password);

	void setResult(unsigned result);
	unsigned getResult();
private:
	unsigned result;

};