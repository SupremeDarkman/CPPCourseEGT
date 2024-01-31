<<<<<<< HEAD
<<<<<<< HEAD
#include <iostream>
#include "User.h"
#include "Team.h"
#include "Admin.h"
int main()
{
	User user1("Ivan", "Pass");
	std::cout << user1.getPassword() << std::endl;

	Team team1("Liverpool", "Liverpool");
	Team team2("Liverpool2", "Liverpool2");
	Team team3("Liverpool3", "Liverpool3");
	std::cout << "Team 1 points: "<< team1.getPoints() << std::endl;

	team1.addPoints(3);
	std::cout << std::endl;
	std::cout << "Team 1 points: " <<team1.getPoints() << std::endl;

	Admin a1("katq", "lokii");
	std::cout <<  "admin1 teams's size: " << a1.getTeams().size() << std::endl;

	a1.addTeam(team1);
	a1.addTeam(team2);
	a1.addTeam(team3);
	std::cout << "Adding team1, team2, team3" << std::endl;
	std::cout << "admin1 teams's size: " << a1.getTeams().size() << std::endl;

	a1.removeTeam(team1);
	std::cout << "Removing team1" << std::endl;
	std::cout << a1.getTeams().size() << std::endl;
	std::cout << "Updateting team4" << std::endl;
	Team team4("Liverpool", "Haskovo");
	a1.updateTeam(team3);
	std::cout << std::endl;
	for (Team t : a1.getTeams())
	{
		std::cout << t.getName() << " " << t.getCity() << std::endl;
	}

	return 0;
=======
#include <iostream>
#include "User.h"
#include "Team.h"
#include "Admin.h"
int main()
{
	User user1("Ivan", "Ivan");
	std::cout << user1.getPassword() << std::endl;
	Team team1("Liverpool", "Liverpool");
	Team team2("Liverpool2", "Liverpool2");
	Team team3("Liverpool3", "Liverpool3");
	std::cout << team1.getPoints() << std::endl;
	team1.addPoints(3);
	std::cout << team1.getPoints() << std::endl;

	Admin a1("katq", "lokii");
	std::cout << a1.getTeams().size() << std::endl;
	a1.addTeam(team1);
	a1.addTeam(team2);
	a1.addTeam(team3);
	std::cout << a1.getTeams().size() << std::endl;
	a1.removeTeam(team1);
	std::cout << a1.getTeams().size() << std::endl;

	Team team4("Liverpool", "Haskovo");
	a1.updateTeam(team4);

	for (Team t : a1.getTeams())
	{
		std::cout << t.getName() << " " << t.getCity() << std::endl;
	}

	return 0;
>>>>>>> 1d0d2b52868cca66f0f6b7311b496bba22b8ba5e
=======
#include <iostream>
#include "User.h"
#include "Team.h"
#include "Admin.h"
int main()
{
	User user1("Ivan", "Ivan");
	std::cout << user1.getPassword() << std::endl;
	Team team1("Liverpool", "Liverpool");
	Team team2("Liverpool2", "Liverpool2");
	Team team3("Liverpool3", "Liverpool3");
	std::cout << team1.getPoints() << std::endl;
	team1.addPoints(3);
	std::cout << team1.getPoints() << std::endl;

	Admin a1("katq", "lokii");
	std::cout << a1.getTeams().size() << std::endl;
	a1.addTeam(team1);
	a1.addTeam(team2);
	a1.addTeam(team3);
	std::cout << a1.getTeams().size() << std::endl;
	a1.removeTeam(team1);
	std::cout << a1.getTeams().size() << std::endl;

	Team team4("Liverpool", "Haskovo");
	a1.updateTeam(team4);

	for (Team t : a1.getTeams())
	{
		std::cout << t.getName() << " " << t.getCity() << std::endl;
	}

	return 0;
>>>>>>> 1d0d2b52868cca66f0f6b7311b496bba22b8ba5e
}