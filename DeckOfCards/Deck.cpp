//
//  Deck.cpp
//  DeckOfCards
//
//  Created by Sean Kearney on 09/04/2017.
//  Copyright © 2017 Sean Kearney. All rights reserved.
//

#include "Deck.hpp"
#include <vector>

Deck::Deck()
{
    for(int i = 1; i < 14; ++i)
    {
        cardDeck.push_back(Card(i, "Diamonds"));
        cardDeck.push_back(Card(i, "Hearts"));
        cardDeck.push_back(Card(i, "Spades"));
        cardDeck.push_back(Card(i, "Clubs"));
    }
}

Deck::~Deck()
{
    
}


void shuffle(Deck& aDeck)
{
    random_shuffle(aDeck.cardDeck.begin(), aDeck.cardDeck.end());
}

void printDeck(Deck& aDeck)
{
    for(int i = 0; i < aDeck.cardDeck.size(); i++)
    {
        cout << "Suit = " << aDeck.cardDeck[i].getSuit() << " Number = " << aDeck.cardDeck[i].getNumber() << endl;
    }
    cout << endl;
}

void dealCards(Deck& aDeck, int num){
    cout << "Your cards are: " << endl;
    for(int i = 0; i < num; i ++)
    {
        cout << aDeck.cardDeck[i].getNumber() << " of " << aDeck.cardDeck[i].getSuit() << endl;
    }
    cout << endl;
}

int operator+(Card Card1, Card Card2)
{
    int result = Card1.getNumber() + Card2.getNumber();
    return result;
}
