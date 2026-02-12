#include "board.hpp"

#include <iostream>
#include <memory>


int main()
{
    Player p1 = Human(Color::White);
    Player p2 = AlphaBeta(Color::Black);
    Board b(p1, p2);

    b.display();

    return 0;
}