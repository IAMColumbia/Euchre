#pragma once

class Card
{
    public:
        enum Suit
        {
            Spades,
            Hearts,
            Diamonds,
            Clubs
        };
        enum Rank
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
        Card(Card::Suit suit, Card::Rank rank);
        Suit Suit;
        Rank Rank;
};