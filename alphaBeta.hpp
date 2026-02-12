#pragma once

#include "player.hpp"

class AlphaBeta : public Player
{
    private:


    public:
        AlphaBeta(Color col)
        {
            color = col;
        }

        void play() override
        {
            // AlphaBeta on the tree
        }
};