#include "Deck.h"
#include <iostream>
int main(int argc, char const *argv[])
{
    Deck deck;
    deck.shuffle();
    Card *card = deck.deal_card();
    while (card != nullptr)
    {
        card = deck.deal_card();
    }

    return 0;
}
