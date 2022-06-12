#include "Card.h"

Card::Card(int value, int suit)
{
    m_value = value;
    m_suit = suit;
}

Card::~Card()
{
}

int Card::get_value_int()
{
    return m_value;
}

int Card::get_suit_int()
{
    return m_suit;
}

std::string Card::get_value_string()
{
    switch (m_value)
    {
    case 1:
        return "Ace";
        break;
    case 2:
        return "Two";
        break;
    case 3:
        return "Three";
        break;
    case 4:
        return "Four";
        break;
    case 5:
        return "Five";
        break;
    case 6:
        return "Six";
        break;
    case 7:
        return "Seven";
        break;
    case 8:
        return "Eight";
        break;
    case 9:
        return "Nine";
        break;
    case 10:
        return "Ten";
        break;
    case 11:
        return "Jack";
        break;
    case 12:
        return "Queen";
        break;
    case 13:
        return "King";
        break;
    default:
        return "Invalid";
        break;
    }
}

std::string Card::get_suit_string()
{
    switch (m_suit)
    {
    case 0:
        return "Clubs";
        break;
    case 1:
        return "Diamonds";
        break;
    case 2:
        return "Hearts";
        break;
    case 3:
        return "Spades";
        break;
    default:
        return "Invalid";
        break;
    }
}

std::string Card::get_name_string()
{
    return get_value_string() + " of " + get_suit_string();
}