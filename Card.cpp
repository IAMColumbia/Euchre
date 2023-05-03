#include "Card.h"

Card::Card(Card::SuitEnum suit, Card::RankEnum rank)
{
    Suit = suit;
    Rank = rank;
}

std::string Card::ToString()
{
    std::string output = "";

    //could not figure out how to get an enum's name
    switch (Rank)
    {
        case Card::RankEnum::Ace:
            output += "Ace";
            break;
        case Card::RankEnum::King:
            output += "King";
            break;
        case Card::RankEnum::Queen:
            output += "Queen";
            break;
        case Card::RankEnum::Jack:
            output += "Jack";
            break;
        case Card::RankEnum::Ten:
            output += "Ten";
            break;
        case Card::RankEnum::Nine:
            output += "Nine";
            break;
        case Card::RankEnum::Eight:
            output += "Eight";
            break;
        case Card::RankEnum::Seven:
            output += "Seven";
            break;
    }

    output += " of ";

    switch (Suit)
    {
        case Card::SuitEnum::Clubs:
            output += "Clubs";
            break;
        case Card::SuitEnum::Diamonds:
            output += "Diamonds";
            break;
        case Card::SuitEnum::Spades:
            output += "Spades";
            break;
        case Card::SuitEnum::Hearts:
            output += "Hearts";
            break;
    }

    return output;
}