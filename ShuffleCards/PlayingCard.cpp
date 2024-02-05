#include "PlayingCard.h"
#include <iostream>
PlayingCard::PlayingCard(std::string type, std::string suit)
{
	setType(type);
	setSuit(suit);
}

void PlayingCard::setType(std::string type)
{
	this->type = type;
}

void PlayingCard::setSuit(std::string suit)
{
	this->suit = suit;
}

std::string PlayingCard::getType() const
{
	return this->type;
}

std::string PlayingCard::getSuit() const
{
	return this->suit;
}

void PlayingCard::print() const
{
	std::cout << "Type: " << getType() << std::endl << "Suit: " << getSuit() << std::endl;
}
