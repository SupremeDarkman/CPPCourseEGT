<<<<<<< HEAD
<<<<<<< HEAD
#pragma once
#include "User.h"
class Referee : public User
{
public:
	Referee(string name, string password, unsigned result);

	void setResult(unsigned result);
	unsigned getResult();
private:
	unsigned result;

};

=======
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

>>>>>>> 1d0d2b52868cca66f0f6b7311b496bba22b8ba5e
=======
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

>>>>>>> 1d0d2b52868cca66f0f6b7311b496bba22b8ba5e
