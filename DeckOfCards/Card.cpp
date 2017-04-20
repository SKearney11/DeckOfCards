//
//  Card.cpp
//  DeckOfCards
//
//  Created by Sean Kearney on 05/04/2017.
//  Copyright © 2017 Sean Kearney. All rights reserved.
//

#include "Card.hpp"

Card::Card(int number, string suit){
    m_Number = number;
    m_Suit = suit;
}

int Card::getNumber()
{
    return m_Number;
}

string Card::getSuit()
{
    return m_Suit;
}
 
