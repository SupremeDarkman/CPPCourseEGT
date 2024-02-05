#pragma once
#include "PlayingCard.h"
#include <iostream>
#include <vector>
#include <string>

class DeckOfCards
{
public:
	DeckOfCards();
	DeckOfCards(std::vector<PlayingCard> deck);

	void addCardToDeck(PlayingCard card);
	void displayDeck();
	void raffleShuffle();

private:
	std::vector<PlayingCard> deck;
};

