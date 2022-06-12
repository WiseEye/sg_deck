/**
 * @file Deck.h
 * @author Daniel Heinen
 * @brief A class representing a deck of playing cards. This class is abstract and can be used as a base class for other decks with different rules for dealing cards and shuffling.
 *  Many function has a default implementation that can be overridden by subclasses. This is because the rules of the deck can be different depending on the game.
 * example: A deck of cards with the following rules:
 * - The deck is shuffled after every deal
 * - The deck is reshuffled if it is empty
 * - The deck is reshuffled if it is below a certain threshold
 * These are just examples and can be changed to suit the game.
 *
 * @version 0.1
 * @date 2022-06-12
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef DECK_H
#define DECK_H

#include <vector>
#include "Card.h"

class Deck
{
public:
    /**
     * @brief Construct a new Deck object. When the object is created, the deck is populated with all 52 cards in the order of their suit and value.
     *  The deck is not shuffled. unless the shuffle() function is called.
     */
    Deck();

    /**
     * @brief Destroy the Deck object
     */
    ~Deck();

    /**
     * @brief Shuffle the deck of cards. This function is virtual and can be overridden by subclasses. This is because the
     * shuffle of a deck can be different depending on the game. The default implementation uses Fisher-Yates shuffle algorithm.
     * The following is an example of the Fisher-Yates shuffle algorithm:
     *
     * @code
     * for (int i = deck.size() - 1; i > 0; i--)
     * {
     *    int j = rand() % (i + 1);
     *   Card temp = deck[i];
     *  deck[i] = deck[j];
     * deck[j] = temp;
     * }
     * @endcode

     */
    virtual void shuffle();

    /**
     * @brief Deal a card from the top of the deck.
     *
     * @return Card* A pointer to the card that was dealt
     */
    virtual Card *deal_card();

    /**
     * @brief Get the number of cards in the deck
     *
     * @return int The number of cards in the deck
     */
    int get_size();

    /**
     * @brief reset the deck to its original state.
     *
     */
    virtual void reset();

private:
    /**
     * @brief The vector of cards that make up the deck
     */
    std::vector<Card *> m_deck;
};

#endif