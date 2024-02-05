#pragma once
#include "User.h"
#include "Team.h"
class Admin : public User
{
public:
	
	Admin(string name, string city);
	
	void addTeam(Team t);
	void removeTeam(Team t);
	void updateTeam(Team t);

	vector<Team> getTeams();

private:
	vector<Team> teams;
};