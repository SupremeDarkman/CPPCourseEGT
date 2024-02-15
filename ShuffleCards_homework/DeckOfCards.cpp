#include "DeckOfCards.h"
DeckOfCards::DeckOfCards()
{
	this->deck = {};
}

DeckOfCards::DeckOfCards(std::vector<PlayingCard> deck)
{
	this->deck = deck;
}

void DeckOfCards::addCardToDeck(PlayingCard card)
{
	this->deck.push_back(card);
}

void DeckOfCards::displayDeck()
{
	for (unsigned i = 0; i < deck.size(); i++)
	{
		deck.at(i).print();
		std::cout << std::endl;
	}

}

void DeckOfCards::raffleShuffle()
{
	for (unsigned i = 0; i < 52; i++)
	{
		int j = rand() % 52;
		Card temp = deck[i];
		deck[i] = deck[j];
		decl[j] = temp;
	}


	//std::vector<PlayingCard> deckFirstHalf, deckSecondHalf;

	//unsigned halfDeckSize = this->deck.size() / 2;

	//for (unsigned i = 0; i < halfDeckSize; i++)
	//{
	//	deckFirstHalf.at(i) = this->deck.at(i);
	//}



	//for (unsigned k=0,j = halfDeckSize; j < this->deck.size(); k++,j++)
	//{
	//	deckSecondHalf.at(k) = this->deck.at(j);
	//}

	//for (unsigned i = 0, j=0; j < deckFirstHalf.size() || i < this->deck.size(); i+=2, j++)
	//{
	//	this->deck.at(i) = deckFirstHalf.at(j);
	//}

	//for (unsigned i = 1, j = 0; j < deckSecondHalf.size() || i < this->deck.size(); i+=2, j++)
	//{
	//	this->deck.at(i) = deckSecondHalf.at(j);
	//}

}

void DeckOfCards::deal()
{
	for (unsigned i = 0; i < 52; i++)
	{
		std::cout << std::right << setw(5) << deck[i].face << "of " << std::left << setw(8) << deck[i].suit
			<< ((i + 1) % 2 ? 't\' : '\n');
	}
}
