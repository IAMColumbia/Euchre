#include "Bot.h"
#include "Display.h"
#include "Utility.h"

Card* Bot::PlayCard()
{
    // Display::Print("Bot PlayCard()");
    // return nullptr;
    int inputIndex = Utility::RandomRange(0, deck->size());
    Display::PrintDeck(deck);
    Display::Print("Bot Picked: " + inputIndex);
    Card* output = &deck->at(inputIndex);
    deck->erase(deck->begin() + inputIndex);
    Display::Print("Bot Played: " + output->ToString());
    return output;
}

Bot::Bot(std::vector<Card>* cards) : Player::Player(cards)
{
    
}