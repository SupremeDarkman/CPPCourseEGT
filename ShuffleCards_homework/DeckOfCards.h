#pragma once
#include "PlayingCard.h"
#include <iostream>
#include <vector>
#include <string>

struct Card
{
	char* face;
	char* suit;
};
class DeckOfCards
{
public:
	DeckOfCards();
	DeckOfCards(std::vector<PlayingCard> deck);

	void addCardToDeck(PlayingCard card);
	void displayDeck();
	void raffleShuffle();
	void deal();

private:
	Card deck[52];
	std::vector<PlayingCard> deck;
};

