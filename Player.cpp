#include "Player.h"
#include "Display.h"
#include <iostream>

Player::Player(std::vector<Card>* cards)
{
    Display::Print("Initializing Player...");
    deck = cards;
    input = new Input();
}

Card* Player::PlayCard()
{
    Display::Print("Your Turn");
    Display::Print("Pick a card");
    std::cout << input->GetInt(0, 9) << std::endl;
    return nullptr;
}