#include "Card.h"

using namespace std;

Card::Card(rank r, suit s, bool ifu)
    : m_rank(r), m_suit(s), m_isFaceUp(ifu) {
}

int Card::getValue() const
{
    int value = 0;
    if (m_isFaceUp)
    {
        value = m_rank;
        if (value > 10)
        {
            value = 10;
        }
    }
    return value;
}


ostream& operator << (ostream& out, const Card& card)
{
    const string RANKS[] = { "", "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K" };
    // символы псевдографики:
    // \x3 - черви (hearts)
    // \x4 - буби (diamonds)
    // \x5 - крести (clubs)
    // \x6 - пики (spades)
    const string SUITS[] = { "\x5", "\x6", "\x4", "\x3" };
    if (card.m_isFaceUp)
        out << RANKS[card.m_rank] << SUITS[card.m_suit];
    else
        out << "XX" << endl;
    return out;
}