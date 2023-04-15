#pragma once
#include "Card.h"
#include <vector>


class Player
{
    public:
        Player(std::vector<Card>* cards);
        virtual Card* PlayCard();
    private:
        std::vector<Card>* deck;
};