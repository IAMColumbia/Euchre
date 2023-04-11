#include "Player.h"
#include "Display.h"

Player::Player(std::vector<Card>* cards)
{
    Display::Print("Initializing Player...");
    this->cards = cards;
}

Card* Player::GetCard()
{
    Display::Print("Player GetCard()");
    return nullptr;
}