#include "Game.h"
#include "Display.h"
#include "Input.h"
#include "Player.h"
#include "Bot.h"
#include "Utility.h"
#include <iostream>
#include <string>

void Game::Start()
{
    Game::running = true;
    std::cout << "Euchre" << std::endl;

    //generate Euchre deck
    deck = new std::vector<Card>();
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            deck->push_back(*new Card((Card::SuitEnum)i, (Card::RankEnum)j));
        }
    }

    ShuffleDeck(deck);

    std::vector<Card>* player1_Deck = new std::vector<Card>();    
    std::vector<Card>* bot2_Deck = new std::vector<Card>();    
    std::vector<Card>* bot3_Deck = new std::vector<Card>();    
    std::vector<Card>* bot4_Deck = new std::vector<Card>();

    int player = 1;
    int cardCount = 0;
    for(int i = 0; i < deck->size(); i++)
    {
        std::vector<Card>* deckToAddTo;
        switch (player)
        {
            case 1:
            deckToAddTo = player1_Deck;
                break;
            case 2:
            deckToAddTo = bot2_Deck;
                break;
            case 3:
            deckToAddTo = bot3_Deck;
                break;
            case 4:
            deckToAddTo = bot4_Deck;
                break;
        }

        deckToAddTo->push_back(deck->at(i));
        deck->erase(deck->begin() + i);

        cardCount++;

        if(cardCount >= 5)
        { player++; }
        if(player > 4)
        { break; }
    }   

    //I couldnt figure out downcasting so I had to do it the bad way :(
    Player* player1 = new Player(player1_Deck);
    Bot* bot2 = new Bot(bot2_Deck);
    Bot* bot3 = new Bot(bot3_Deck);
    Bot* bot4 = new Bot(bot4_Deck);

    // players = new std::vector<Player>();
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

void Game::ShuffleDeck(std::vector<Card> *deck)
{
    for (int i = 0; i < deck->size(); i++)
    {
        Card temp = deck->at(i);
        int randIndex = Utility::RandomRange(0, deck->size());
        deck->at(i) = deck->at(randIndex);
        deck->at(randIndex) = temp;
    }
    // Display::Print("DECK: ");
    // for (int i = 0; i < deck->size(); i++)
    // {
    //     Display::Print(std::to_string(deck->at(i).Suit));
    // }
}