<<<<<<< HEAD
#include "Admin.h"

Admin::Admin(string name, string city) 
	: User(name, city)
{
}

void Admin::addTeam(Team t)
{
	this->teams.push_back(t);
}


void Admin::removeTeam(Team t)
{
	string teamName = t.getName();
	for (unsigned i = 0; i < teams.size(); i++)
	{
		if (teams.at(i).getName() == teamName)
		{
			teams.erase(teams.begin() + i);
			break;
		}
	}
}

void Admin::updateTeam(Team t)
{
	string teamName = t.getName();
	for (unsigned i = 0; i < teams.size(); i++)
	{
		if (teams.at(i).getName() == teamName)
		{
			teams.at(i) = t;
			break;
		}
	}
}

vector<Team> Admin::getTeams()
{
	for (unsigned i = 0; i < teams.size(); i++)
	{
		teams.at(i).print();
	}
	return teams;
}

//? Admin::getTeams(){}
=======
#include "Admin.h"

Admin::Admin(string name, string city) 
	: User(name, city)
{
}

void Admin::addTeam(Team t)
{
	this->teams.push_back(t);
}


void Admin::removeTeam(Team t)
{
	string teamName = t.getName();
	for (unsigned i = 0; i < teams.size(); i++)
	{
		if (teams.at(i).getName() == teamName)
		{
			teams.erase(teams.begin() + i);
			break;
		}
	}
}

void Admin::updateTeam(Team t)
{
	string teamName = t.getName();
	for (unsigned i = 0; i < teams.size(); i++)
	{
		if (teams.at(i).getName() == teamName)
		{
			teams.at(i) = t;
			break;
		}
	}
}

//? Admin::getTeams(){}
>>>>>>> 1d0d2b52868cca66f0f6b7311b496bba22b8ba5e
