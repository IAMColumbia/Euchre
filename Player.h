#pragma once
#include "Card.h"
#include "Input.h"
#include <vector>


class Player
{
    public:
        Player(std::vector<Card>* cards);
        virtual Card* PlayCard();
    protected:
        std::vector<Card> *deck;
    private:
        Input* input;
};