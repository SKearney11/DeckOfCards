//
//  Deck.hpp
//  DeckOfCards
//
//  Created by Sean Kearney on 09/04/2017.
//  Copyright © 2017 Sean Kearney. All rights reserved.
//

#ifndef Deck_hpp
#define Deck_hpp

#include <stdio.h>
#include "Card.hpp"


class Deck
{
public:
    Deck();
    ~Deck();
    vector<Card> cardDeck;
}; 

int printMenu();
void mainMenu(int input);
void newDeck();
void shuffle(Deck&);
void dealCards(Deck&, int num);
void printDeck(Deck&);
void customDeck(int numOfCards);

int operator+(Card Card1, Card Card2);

#endif /* Deck_hpp */
