#pragma once
#include "Player.h"
#include "Card.h"

class Bot : Player
{
    public:
        using Player::Player;
        Card* GetCard();
};