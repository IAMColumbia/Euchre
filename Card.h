#pragma once
#include <string>

class Card
{
    public:
        enum SuitEnum
        {
            Spades,
            Hearts,
            Diamonds,
            Clubs
        };
        enum RankEnum
        {
            Seven,
            Eight,
            Nine,
            Ten,
            Jack,
            Queen,
            King,
            Ace
        };
        
        Card(Card::SuitEnum suit, Card::RankEnum rank);
        SuitEnum Suit;
        RankEnum Rank;
        std::string ToString();
        bool IsGreaterThan(Card* card);
        bool Equals(Card* card);
};