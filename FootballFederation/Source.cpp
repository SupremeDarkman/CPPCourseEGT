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
}