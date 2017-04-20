//
//  Card.hpp
//  DeckOfCards
//
//  Created by Sean Kearney on 05/04/2017.
//  Copyright © 2017 Sean Kearney. All rights reserved.
//

#ifndef Card_hpp
#define Card_hpp

#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

class Card
{
public:
    Card(int number, string suit);
    int getNumber();
    string getSuit();
    
private:
    int m_Number;
    string m_Suit;
};


#endif /* Card.hpp */
