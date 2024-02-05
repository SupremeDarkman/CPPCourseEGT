#pragma once
#include <string>
using std::string;

class User
{
public:
	User(string name, string pass);
	void setName(string name);
	string getName();
	void setPassword(string pass);
	string getPassword();

private:
	string name;
	string password;
};

