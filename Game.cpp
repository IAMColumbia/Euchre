#include "Game.h"
#include "Display.h"
#include "Input.h"
#include "Player.h"
#include <iostream>

void Game::Start()
{
    Game::running = true;
    std::cout << "Euchre" << std::endl;
    Input* input = new Input();

    deck = new std::vector<Card>();

    Player* player = new Player(deck);
    //TODO: add player to array

    for(int i = 1; i < Game::playersPerTeam * 2; i++)
    {
        //TODO: create bots and add to array
    }    

    while(Game::running)
    {
        Display::Print("Pick a card");
        std::cout << input->GetInt(0, 9) << std::endl;
    }
}