#include "Player.h"
#include "Display.h"

Player::Player(std::vector<Card>* cards)
{
    Display::Print("Initializing Player...");
    deck = cards;
}

Card* Player::PlayCard()
{
    Display::Print("Player PlayCard()");
    return nullptr;
}