#include "Team.h"

Team::Team(string name, string city)
{
    setName(name);
    setCity(city);
    this->points = 0;
}

//Team::Team(string name, string city, Referee ref, vector<Player> players, unsigned numOfMatches, unsigned numOfWins, unsigned numOfLosses, unsigned ties, int points, unsigned position)
//{
//}

void Team::setName(string name)
{
    this->name = name;
}

void Team::setCity(string city)
{
    this->city = city;
}

string Team::getName()
{
    return this->name;
}

string Team::getCity()
{
    return this->city;
}

int Team::getPoints()
{
    return this->points;
}

void Team::addPoints(int newPoints)
{
    this->points += newPoints;
}

void Team::print()
{
    std::cout << "Name: " << getName() << std::endl
        << "City: " << getCity() << std::endl
        << "Points: " << getPoints() << std::endl;
}
