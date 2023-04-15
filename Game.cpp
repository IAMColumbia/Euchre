#include "Game.h"
#include "Display.h"
#include "Input.h"
#include "Player.h"
#include "Bot.h"
#include <iostream>
#include <string>

void Game::Start()
{
    Game::running = true;
    std::cout << "Euchre" << std::endl;

    deck = new std::vector<Card>();
    players = new std::vector<Player>();

    Player* player = new Player(deck);
    players->push_back(*player);

    for(int i = 1; i < Game::playersPerTeam * 2; i++)
    {
        Bot* bot = new Bot(deck);
        players->push_back(*(Player*)bot);
    }    

    int roundsLeft = 5;

    while(Game::running)
    {
        Display::Print("Round " + roundsLeft);
        for(int i = 0; i < players->size(); i++)
        {
            Display::Print("Player(" + std::to_string(i) + ")");
            bool playerTeam = i < Game::playersPerTeam;
            Display::Print(playerTeam ? "Player Team" : "Other Team");

            players->at(i).PlayCard();
        }
        roundsLeft--;
    }
}