#pragma once
#include <string>
#include <vector>
#include "Card.h"

class Display
{
    public:
        static void Print(std::string text);
        static void PrintDeck(std::vector<Card>* deck);
};