#pragma once

#include "player.hpp"

class Human : public Player
{
    private:


    public:
        Human(Color col)
        {
            color = col;
        }
        
        void play() override
        {
            // human make a move
        }
};