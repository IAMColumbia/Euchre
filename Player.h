#pragma once
#include "Card.h"
#include <vector>


class Player
{
    public:
        Player(std::vector<Card>* cards);
        virtual Card* GetCard();
    private:
        std::vector<Card>* cards;
};