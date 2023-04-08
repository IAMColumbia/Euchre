#include "Game.h"
#include "Input.h"
#include <iostream>

void Game::Start()
{
    std::cout << "Euchre" << std::endl;
    Input* input = new Input();
    std::cout << input->GetInt(0, 9) << std::endl;

    while(Game::running)
    {
        
    }
}