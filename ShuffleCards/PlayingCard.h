#pragma once
#include <string>
class PlayingCard
{
public:
	PlayingCard(std::string type, std::string suit);

	void setType(std::string type);
	void setSuit(std::string suit);

	std::string getType() const;
	std::string getSuit() const;

	void print() const;

private:
	std::string type;
	std::string suit;
};

