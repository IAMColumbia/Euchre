#pragma once

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
            Ace,
            King,
            Queen,
            Jack,
            Ten,
            Nine,
            Eight,
            Seven
        };
        
        Card(Card::SuitEnum suit, Card::RankEnum rank);
        SuitEnum Suit;
        RankEnum Rank;
};