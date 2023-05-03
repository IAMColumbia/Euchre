#include "Display.h"
#include <iostream>

void Display::Print(std::string text)
{
    std::cout << text << std::endl;
}

void Display::PrintDeck(std::vector<Card>* deck)
{
    for(int i = 0; i < deck->size(); i++)
    {
        Print(std::to_string(i) + "    " + deck->at(i).ToString());
    }
}