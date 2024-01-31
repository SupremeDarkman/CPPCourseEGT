<<<<<<< HEAD
<<<<<<< HEAD
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

=======
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

>>>>>>> 1d0d2b52868cca66f0f6b7311b496bba22b8ba5e
=======
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

>>>>>>> 1d0d2b52868cca66f0f6b7311b496bba22b8ba5e
