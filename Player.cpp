#include "Player.h"
#include "Display.h"
#include <iostream>

Player::Player(std::vector<Card>* cards)
{
    // Display::Print("Initializing Player...");
    deck = cards;
    input = new Input();
}

Card* Player::PlayCard()
{
    Display::Print("Your Turn");
    Display::Print("Pick a card");
    Display::PrintDeck(deck);
    int inputIndex = input->GetInt(0, deck->size() - 1);
    Card* output = &deck->at(inputIndex);
    deck->erase(deck->begin() + inputIndex);
    return output;
}