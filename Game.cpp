#include "Game.h"
#include "Display.h"
#include "Input.h"
#include "Player.h"
#include "Bot.h"
#include <iostream>

void Game::Start()
{
    Game::running = true;
    std::cout << "Euchre" << std::endl;
    Input* input = new Input();

    deck = new std::vector<Card>();
    players = new std::vector<Player>();

    Player* player = new Player(deck);
    players->push_back(*player);

    for(int i = 1; i < Game::playersPerTeam * 2; i++)
    {
        Bot* bot = new Bot(deck);
        players->push_back(*(Player*)bot);
    }    

    while(Game::running)
    {
        Display::Print("Pick a card");
        std::cout << input->GetInt(0, 9) << std::endl;
    }
}