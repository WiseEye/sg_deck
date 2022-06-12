#include "Deck.h"
#include <gtest/gtest.h>

TEST(DeckTest, TestDeckConstructor)
{
    Deck deck;
    EXPECT_EQ(52, deck.get_size());
}

TEST(DeckTest, TestDeckShuffle)
{
}