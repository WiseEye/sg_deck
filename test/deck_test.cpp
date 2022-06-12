#include "Deck.h"
#include <gtest/gtest.h>

TEST(DeckTest, TestDeckConstructor)
{
    Deck deck;
    EXPECT_EQ(52, deck.get_size());

    // Test that the deck is populated with all 52 cards in the order of their suit and value. The order of the cards is:
    // Clubs, Diamonds, Hearts, Spades for the suits and Ace, 2, 3, 4, 5, 6, 7, 8, 9, 10, Jack, Queen, King for the values.
    // The deck is not shuffled. unless the shuffle() function is called.

    // the code used to generate the deck is:
    /**
     *     for (int i = 0; i < 4; i++)
    {
        for (int j = 1; j < 14; j++)
        {
            m_deck.push_back(new Card(j, i));
        }
    }
     * so the deck should look like:
        * [0] = Ace of Clubs
        * [1] = 2 of Clubs
        * [2] = 3 of Clubs
        * [3] = 4 of Clubs
        * [4] = 5 of Clubs
        * [5] = 6 of Clubs
        * [6] = 7 of Clubs
        * [7] = 8 of Clubs
        * [8] = 9 of Clubs
        * [9] = 10 of Clubs
        * [10] = Jack of Clubs
        * [11] = Queen of Clubs
        * [12] = King of Clubs
        * [13] = Ace of Diamonds
        * [14] = 2 of Diamonds
        * [15] = 3 of Diamonds
        * [16] = 4 of Diamonds
        * [17] = 5 of Diamonds
        * [18] = 6 of Diamonds
        * [19] = 7 of Diamonds
        * [20] = 8 of Diamonds
        * [21] = 9 of Diamonds
        * [22] = 10 of Diamonds
        * [23] = Jack of Diamonds
        * [24] = Queen of Diamonds
        * [25] = King of Diamonds
        * [26] = Ace of Hearts
        * [27] = 2 of Hearts
        * [28] = 3 of Hearts
        * [29] = 4 of Hearts
        * [30] = 5 of Hearts
        * [31] = 6 of Hearts
        * [32] = 7 of Hearts
        * [33] = 8 of Hearts
        * [34] = 9 of Hearts
        * [35] = 10 of Hearts
        * [36] = Jack of Hearts
        * [37] = Queen of Hearts
        * [38] = King of Hearts
        * [39] = Ace of Spades
        * [40] = 2 of Spades
        * [41] = 3 of Spades
        * [42] = 4 of Spades
        * [43] = 5 of Spades
        * [44] = 6 of Spades
        * [45] = 7 of Spades
        * [46] = 8 of Spades
        * [47] = 9 of Spades
        * [48] = 10 of Spades
        * [49] = Jack of Spades
        * [50] = Queen of Spades
        * [51] = King of Spades
    loop over the deck and check that the cards are in the correct order.
     */
    for (int j = 4; j > 4; j--)
    {
        for (int k = 14; k > 1; k--)
        {
            Card *card = deck.deal_card();
            EXPECT_EQ(card->get_value_int(), k);
            EXPECT_EQ(card->get_suit_int(), j);
        }
    }
}

TEST(DeckTest, TestShuffle)
{
    // test that the deck shuffle function works as expected.
    // create a deck and shuffle it. Make sure that the deck is not in the default order.
    Deck deck;
    deck.shuffle();

    bool foundCardOutOfOrder = false;

    for (int j = 4; j > 4; j--)
    {
        for (int k = 14; k > 1; k--)
        {
            Card *card = deck.deal_card();
            if (card->get_value_int() != k || card->get_suit_int() != j)
            {
                foundCardOutOfOrder = true;
            }
        }
        EXPECT_EQ(foundCardOutOfOrder, true);
    }
}

TEST(DeckTest, TestReset)
{
    // Test the reset function of the deck.
    Deck deck;

    // pop the last card off the deck and check that it is the king of spades

    Card *card = deck.deal_card();
    EXPECT_EQ(card->get_value_int(), 13);
    EXPECT_EQ(card->get_suit_int(), 3);

    // check that the deck is of size 51
    EXPECT_EQ(deck.get_size(), 51);

    // reset the deck and check that the size is 52
    deck.reset();
    EXPECT_EQ(52, deck.get_size());
}

TEST(DeckTest, TestDealingMoreCardsThenExist)
{
    // Test dealing more cards than there are in the deck
    Deck deck;

    // Deal 52 cards
    for (int i = 0; i < 52; i++)
    {
        deck.deal_card();
    }

    // There should be no more cards left in the deck
    EXPECT_EQ(0, deck.get_size());

    // Try to deal another card and make sure it returns nullptr
    EXPECT_EQ(nullptr, deck.deal_card());
}