//
//  main.cpp
//  DeckOfCards
//
//  Created by Sean Kearney on 05/04/2017.
//  Copyright © 2017 Sean Kearney. All rights reserved.
//

#include <iostream>
#include "Card.hpp"
#include "Deck.hpp"

int main() {
    mainMenu(printMenu());
   // printMenu();
    return 0;
}

int printMenu(){
    cout << "1 is ace, 11 is Jack, 12 is Queen, 13 is King \n" << endl;
    cout << "Press 1 to shuffle the cards \nPress 2 to deal cards \nPress 3 to show all cards \nPress 4 to add the two first cards (by overloading the + operator) \nPress 0 to exit" << endl;
    int input;
    cin >> input;
    return input;
}

void mainMenu(int input){
    Deck myDeck = *new Deck;
    
    while (input != 0)
    {
        switch (input) {
            case 1:
                shuffle(myDeck);
                cout << "Deck has been shuffled." << endl;
                input = printMenu();
                break;
                
            case 2:
                int num;
                cout << "Enter number of cards youd like to be dealt" << endl;
                cin >> num;
                dealCards(myDeck, num);
                input = printMenu();
                break;
                
            case 3:
                printDeck(myDeck);
                input = printMenu();
                break;
                
            case 4:
                cout << "The result of adding " << myDeck.cardDeck[0].getNumber() << " and " << myDeck.cardDeck[1].getNumber() << " is " << myDeck.cardDeck[0] + myDeck.cardDeck[1] << endl << endl;
                input = printMenu();
                break;

            default:
                cout << "bad input";
                break;
        }
    }
    delete &myDeck;
    cout << "Bye" << endl;
}
