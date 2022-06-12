/**
 * @file Card.h
 * @author Daniel Heinen
 * @brief This file contains the definition of the Card class used to represent a card using in a deck of standard playing cards.
 *

 * @version 0.1
 * @date 2022-06-12
 *
 * @copyright Copyright (c) 2022 Daniel Heinen
 *
 */

#ifndef CARD_H
#define CARD_H

#include <string>

class Card
{
public:
    /**
     * @brief Construct a new Card object with the given suit and value.
     *
     * @param value An integer representing the card value (1-13). This variable will not be validated on creation of the object . The following values are used:
     * 1 = Ace, 2 = Two, 3 = Three, 4 = Four, 5 = Five, 6 = Six, 7 = Seven, 8 = Eight, 9 = Nine, 10 = Ten, 11 = Jack, 12 = Queen, 13 = King
     * @param suit An integer representing the suit of the card (0-3) (0 = clubs, 1 = diamonds, 2 = hearts, 3 = spades). This variable will not be validated on creation of the object.
     */
    Card(int value, int suit);

    /**
     * @brief Destroy the Card object
     */
    ~Card();

    /**
     * @brief Get the value of the card as an integer. This function is virtual and can be overridden by subclasses. This is because the value of a card can be different depending on the game.
     * The default implementation returns the value of the card as an integer. The following values are used:
     * 1 = Ace, 2 = Two, 3 = Three, 4 = Four, 5 = Five, 6 = Six, 7 = Seven, 8 = Eight, 9 = Nine, 10 = Ten, 11 = Jack, 12 = Queen, 13 = King
     *
     * @return An integer representing the value of the card (1-13)
     * NOTE: This is not the face value of the card but a representation of the value of the card.
     */
    virtual int get_value_int();

    /**
     * @brief Get the Suit as an integer
     *
     * @return int The integer representing the suit of the card (0-3) (0 = clubs, 1 = diamonds, 2 = hearts, 3 = spades)

     */
    int get_suit_int();

    /**
     * @brief Get the value of the card as a string
     *
     * @return A string representing the face value of the card (1-13)
     */
    std::string get_value_string();

    /**
     * @brief Get the suit of the card as a string
     *
     * @return A string representing the suit of the card (clubs, diamonds, hearts, spades)
     */
    std::string get_suit_string();

    /**
     * @brief Get the name of the card as a string
     *
     * @return A string representing the name of the card (e.g. "Ace of Spades")
     */
    std::string get_name_string();

private:
    /**
     * @brief The value of the card (1-13). This variable will not be validated on creation of the object. The following values are used:
     * 1 = Ace, 2 = Two, 3 = Three, 4 = Four, 5 = Five, 6 = Six, 7 = Seven, 8 = Eight, 9 = Nine, 10 = Ten, 11 = Jack, 12 = Queen, 13 = King

     */
    int m_value;

    /**
     * @brief The suit of the card (0-3) (0 = clubs, 1 = diamonds, 2 = hearts, 3 = spades)
     */
    int m_suit;
};

#endif