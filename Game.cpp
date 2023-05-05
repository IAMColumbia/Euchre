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
    int deckSize = deck->size();
    for(int i = 0; i < deckSize; i++)
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

        deckToAddTo->push_back(deck->at(0));
        deck->erase(deck->begin() + 0);

        cardCount++;
        // Display::Print("Player:::" + std::to_string(player) + " // " + std::to_string(cardCount) + " -- " + std::to_string(i));

        if(cardCount >= 5)
        {
            player++;
            cardCount = 0;
        }

        if(player > 4)
        {   break;  }
    }   

    //I couldnt figure out downcasting so I had to do it the bad w  ay :(
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
    int playerTeamScore;
    int enemyTeamScore;
    
    //pick a trump card
    Card trumpCard = deck->at(0);
    deck->erase(deck->begin() + 0);

    while(Game::running)
    {
        Card* winningCard = nullptr;
        int winningPlayer = -1;

        Display::Print("\n\nTrump Card: " + trumpCard.ToString());
        
        Display::Print("\nRound " + std::to_string(roundsLeft));
        
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
            Card* cardPlayed;

            if(bot != nullptr)
            { 
                Display::Print("BOT: ");
                cardPlayed = bot->PlayCard();
            }
            else
            {
                Display::Print("PLAYER: ");
                cardPlayed = player->PlayCard();
            }

            if(winningCard == nullptr || cardPlayed->IsGreaterThan(winningCard) || cardPlayed->Equals(&trumpCard))
            {
                winningCard = cardPlayed;
                winningPlayer = i;
            }
        }

        Display::Print("\n\nRound over.\n");

        if (winningCard != nullptr)
        {
            Display::Print("Winning Card: " + winningCard->ToString());
            Display::Print("Winning Player: " + std::to_string(winningPlayer));
            if (winningPlayer == 0 || winningPlayer == 1)
            {
                playerTeamScore++;
            }
            else
            {
                enemyTeamScore++;
            }
        }

        roundsLeft--;

        if(roundsLeft <= 0)
        {
            Display::Print("Game Over");
            if(playerTeamScore > enemyTeamScore)
            { Display::Print("WINNER: PLAYER TEAM"); }
            else
            { Display::Print("WINNER: ENEMY TEAM"); }
            running = false;        
        }
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