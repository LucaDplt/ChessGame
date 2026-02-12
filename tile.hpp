#pragma once

#include <memory>
#include <string>

#include "piece.hpp"

class Tile
{
    private:
        bool occupied = false;
        std::unique_ptr<Piece> piece = std::make_unique<Piece>(Category::None, Color::None, 0, 0, 0);

    public:
        Tile(bool occupied, std::unique_ptr<Piece> piece) : occupied(occupied), piece(std::move(piece)){}
        Tile(){}

        bool isOccupied() const
        {
            return occupied;
        }

        Category occupiedBy() const
        {
            if(occupied)
            {
                return piece->getCategory();
            }
            return Category::None;
        }

};