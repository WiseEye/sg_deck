#include <gtest/gtest.h>
#include "Card.h"

TEST(CardTest, TestCardConstructor)
{
    Card card(1, 0);
    EXPECT_EQ(1, card.get_value_int());
    EXPECT_EQ(0, card.get_suit_int());
}

TEST(CardTest, TestCardConstructor2)
{
    Card card(14, 3);
    EXPECT_EQ(14, card.get_value_int());
    EXPECT_EQ(3, card.get_suit_int());
}