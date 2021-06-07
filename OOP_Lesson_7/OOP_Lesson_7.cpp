﻿#include <iostream> 
#include <vector>
#include <set> 
#include <string> 
#include "Game.h" 

using namespace std;

int main()
{
    cout << "\t\tWelcome to Blackjack!\n\n";

    int numPlayers = 0;
    while (numPlayers < 1 || numPlayers > 7)
    {
        cout << "How many players? (1 - 7): ";
        cin >> numPlayers;
    }

    vector<string> names;
    //set<string> names;
    string name;
    for (int i = 0; i < numPlayers; ++i)
    {
        cout << "Enter player name: ";
        cin >> name;
        names.push_back(name);
        //names.insert(name);
    }
    cout << endl;

    // игровой цикл
    Game aGame(names);
    char again = 'y';
    while (again != 'n' && again != 'N')
    {
        aGame.play();
        cout << "\nDo you want to play again? (Y/N): ";
        cin >> again;
    }

    //!-> home task change for with iterrator to range base for

    //!-> templates in h


    return 0;
}