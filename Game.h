#pragma once
#include <vector>
#include "Card.h"
#include "Player.h"

class Game
{
    public:
        void Start();
    private:
        bool running = false;
        int playersPerTeam = 2;
        std::vector<Card>* deck;
        //std::vector<Player>* players;
        void ShuffleDeck(std::vector<Card>* deck);
};