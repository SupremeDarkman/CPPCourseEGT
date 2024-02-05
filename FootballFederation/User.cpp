#include "User.h"
#include <iostream>
User::User(string name, string pass)
{
	setName(name);
	setPassword(pass);
}

void User::setName(string name)
{
	this->name = name;
}

string User::getName()
{
    return this->name;
}

void User::setPassword(string pass)
{
	if (pass.length() >= 4 && pass.length() < 20)
		this->password = pass;
	else
	{
		while (!(pass.length() > 4 && pass.length() < 20))
		{	
			std::cout << "Incorrect password. Enter new one: ";
			std::cin >> pass;
		}
		this->password = pass;
	}
}

string User::getPassword()
{
    return this->password;
}
