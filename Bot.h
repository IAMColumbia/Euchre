#pragma once
#include "Player.h"
#include "Card.h"

class Bot : public Player
{
    public:
        Bot(std::vector<Card>* cards);
        Card* PlayCard() override;
};