#include "Deck.h"
#include <iostream>

Deck::Deck()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 1; j < 14; j++)
        {
            m_deck.push_back(new Card(j, i));
        }
    }
}

Deck::~Deck()
{
    for (int i = 0; i < m_deck.size(); i++)
    {
        delete m_deck[i];
    }
}

void Deck::shuffle()
{
    // loop through the deck and swap each card with a random card in the deck until the deck is shuffled completely
    for (int i = m_deck.size() - 1; i > 0; i--)
    {
        // generate a random number between 0 and i inclusive where i is the index of the last card in the deck
        int j = rand() % (i + 1);
        Card *temp = m_deck[i];
        m_deck[i] = m_deck[j];
        m_deck[j] = temp;
    }
}

Card *Deck::deal_card()
{
    // if the deck is empty, return nullptr to indicate that there are no more cards to deal
    if (m_deck.size() == 0)
    {
        return nullptr;
    }
    // otherwise, return the top card in the deck and remove it from the deck
    Card *card = m_deck.back();
    m_deck.pop_back();
    return card;
}

int Deck::get_size()
{
    return m_deck.size();
}

void Deck::print_deck()
{
    for (int i = 0; i < m_deck.size(); i++)
    {
        std::cout << m_deck[i]->get_name_string() << std::endl;
    }
}

void Deck::reset()
{
    // delete all the cards in the deck and then create a new deck of cards
    for (int i = 0; i < m_deck.size(); i++)
    {
        delete m_deck[i];
    }
    m_deck.clear();
    for (int i = 0; i < 4; i++)
    {
        for (int j = 1; j < 14; j++)
        {
            m_deck.push_back(new Card(j, i));
        }
    }
}
