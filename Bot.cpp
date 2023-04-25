#include "Bot.h"
#include "Display.h"

Card* Bot::PlayCard()
{
    Display::Print("Bot PlayCard()");
    return nullptr;
}

Bot::Bot(std::vector<Card>* cards) : Player::Player(cards)
{
    
}