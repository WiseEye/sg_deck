#include <gtest/gtest.h>
#include "Card.h"

TEST(CardTest, TestCardConstructor)
{
    Card card(1, 0);
    EXPECT_EQ(1, card.get_value_int());
    EXPECT_EQ(0, card.get_suit_int());
}

TEST(CardTest, TestGetValueString)
{

    // Test get_value_string
    Card card(1, 0);
    EXPECT_EQ("Ace", card.get_value_string());
    card = Card(2, 0);
    EXPECT_EQ("Two", card.get_value_string());
    card = Card(3, 0);
    EXPECT_EQ("Three", card.get_value_string());
    card = Card(4, 0);
    EXPECT_EQ("Four", card.get_value_string());
    card = Card(5, 0);
    EXPECT_EQ("Five", card.get_value_string());
    card = Card(6, 0);
    EXPECT_EQ("Six", card.get_value_string());
    card = Card(7, 0);
    EXPECT_EQ("Seven", card.get_value_string());
    card = Card(8, 0);
    EXPECT_EQ("Eight", card.get_value_string());
    card = Card(9, 0);
    EXPECT_EQ("Nine", card.get_value_string());
    card = Card(10, 0);
    EXPECT_EQ("Ten", card.get_value_string());
    card = Card(11, 0);
    EXPECT_EQ("Jack", card.get_value_string());
    card = Card(12, 0);
    EXPECT_EQ("Queen", card.get_value_string());
    card = Card(13, 0);
    EXPECT_EQ("King", card.get_value_string());
    card = Card(14, 0);
    EXPECT_EQ("Invalid", card.get_value_string());
}

TEST(CardTest, TestGEtSuit)
{
    // Testget_suit_string
    Card card(1, 0);
    EXPECT_EQ("Clubs", card.get_suit_string());
    card = Card(1, 1);
    EXPECT_EQ("Diamonds", card.get_suit_string());
    card = Card(1, 2);
    EXPECT_EQ("Hearts", card.get_suit_string());
    card = Card(1, 3);
    EXPECT_EQ("Spades", card.get_suit_string());
    card = Card(1, 4);
    EXPECT_EQ("Invalid", card.get_suit_string());
}

TEST(CardTest, TestGetingNames)
{
    // test get_name_string
    Card card(1, 0);
    EXPECT_EQ("Ace of Clubs", card.get_name_string());
}