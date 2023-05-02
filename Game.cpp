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
    // players = new std::vector<Player>();

    //I couldnt figure out downcasting so I had to do it the bad way :(
    Player* player1 = new Player(deck);
    Bot* bot2 = new Bot(deck);
    Bot* bot3 = new Bot(deck);
    Bot* bot4 = new Bot(deck);

    // Player* player = new Player(deck);
    // players->push_back(*player);

    // for(int i = 1; i < Game::playersPerTeam * 2; i++)
    // {
    //     Bot* bot = new Bot(deck);
    //     std::cout << "Returning " << *typeid(*bot).name() << std::endl; 
    //     player = bot;  
    //     players->push_back(*player);
    // }    

    int roundsLeft = 5;
    

    while(Game::running)
    {
        Display::Print("\nRound " + roundsLeft);
        for(int i = 0; i < 4; i++)
        {
            Display::Print("\n");
            // Bot *bot = static_cast<Bot *>(&players->at(i));
            // bot = (Bot *)bot;
            //Bad workaround because i couldnt get downcasting to work
            Player* player = nullptr;
            Bot* bot = nullptr;
            switch(i)
            {
                case 0:
                player = player1;
                    break;
                case 1:
                bot = bot2;
                    break;
                case 2:
                bot = bot3;
                    break;
                case 3:
                bot = bot4;
                    break;
            }

            bool isPlayerTeam = i < 2;
            Display::Print(isPlayerTeam ? "Player Team" : "Other Team");
            
            if(bot != nullptr)
            { 
                Display::Print("BOT: ");
                bot->PlayCard();
            }
            else
            {
                Display::Print("PLAYER: ");
                player->PlayCard();
            }
        }
        roundsLeft--;
    }

    
}