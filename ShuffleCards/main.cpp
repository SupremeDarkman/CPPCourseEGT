#include <iostream>
#include "DeckOfCards.h"

int main()
{
	DeckOfCards deckOfCards;
	PlayingCard AHearth("A", "Hearth");
	PlayingCard KHearth("K", "Hearth");
	PlayingCard QHearth("Q", "Hearth");
	PlayingCard JHearth("J", "Hearth");
	PlayingCard TenHearth("10", "Hearth");
	PlayingCard NineHearth("9", "Hearth");
	deckOfCards.addCardToDeck(AHearth);
	deckOfCards.addCardToDeck(KHearth);
	deckOfCards.addCardToDeck(QHearth);
	deckOfCards.addCardToDeck(JHearth);
	deckOfCards.addCardToDeck(TenHearth);
	deckOfCards.addCardToDeck(NineHearth);

	deckOfCards.displayDeck();
	deckOfCards.raffleShuffle();
	deckOfCards.displayDeck();
}