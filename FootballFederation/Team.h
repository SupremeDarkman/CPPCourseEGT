<<<<<<< HEAD
<<<<<<< HEAD
#pragma once
//#include "Player.h"
//#include "Referee.h"
#include <string>
#include <iostream>
#include <vector>

using std::vector;
using std::string;

class Team
{
public:
	Team(string name, string city);
	//Team(string name, string city, Referee ref, vector<Player> players, unsigned numOfMatches, unsigned numOfWins, unsigned numOfLosses, unsigned ties, int points, unsigned position);

	void setName(string name);
	void setCity(string city);;

	string getName();
	string getCity();

	int getPoints();

	void addPoints(int points);
	void print();
private:
	string name;
	string city;
	/*Referee ref;
	vector<Player> players;
	unsigned numOfMatches;
	unsigned numOfWins;
	unsigned numOfLosses;
	unsigned ties;*/
	int points;
	//unsigned position;
};

=======
#pragma once
#include "Player.h"
#include "Referee.h"
#include <string>
#include <vector>

using std::vector;
using std::string;

class Team
{
public:
	Team(string name, string city);
	Team(string name, string city, Referee ref, vector<Player> players, unsigned numOfMatches, unsigned numOfWins, unsigned numOfLosses, unsigned ties, int points, unsigned position);

	void setName(string name);
	void setCity(string city);;

	string getName();
	string getCity();

	int getPoints();

	void addPoints(int points);
private:
	string name;
	string city;
	Referee ref;
	vector<Player> players;
	unsigned numOfMatches;
	unsigned numOfWins;
	unsigned numOfLosses;
	unsigned ties;
	int points;
	unsigned position;
};

>>>>>>> 1d0d2b52868cca66f0f6b7311b496bba22b8ba5e
=======
#pragma once
#include "Player.h"
#include "Referee.h"
#include <string>
#include <vector>

using std::vector;
using std::string;

class Team
{
public:
	Team(string name, string city);
	Team(string name, string city, Referee ref, vector<Player> players, unsigned numOfMatches, unsigned numOfWins, unsigned numOfLosses, unsigned ties, int points, unsigned position);

	void setName(string name);
	void setCity(string city);;

	string getName();
	string getCity();

	int getPoints();

	void addPoints(int points);
private:
	string name;
	string city;
	Referee ref;
	vector<Player> players;
	unsigned numOfMatches;
	unsigned numOfWins;
	unsigned numOfLosses;
	unsigned ties;
	int points;
	unsigned position;
};

>>>>>>> 1d0d2b52868cca66f0f6b7311b496bba22b8ba5e
