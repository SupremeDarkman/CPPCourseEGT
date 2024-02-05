#pragma once
#include "Player.h"
#include "Referee.h"
#include <string>
#include <vector>
#include <iostream>

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