#pragma once

#include <memory>
#include <string>

#include "piece.hpp"

class Tile
{
    private:
        bool occupied = false;
<<<<<<< HEAD
        std::unique_ptr<Piece> piece = std::make_unique<Piece>(NULL);
=======
        std::unique_ptr<Piece> piece = std::make_unique<Piece>(Category::None, Color::None, 0, 0, 0);
>>>>>>> 0ce9fc0 (adding Player and sub class, LICENCE, Main and separating color and category)

    public:
        Tile(bool occupied, std::unique_ptr<Piece> piece) : occupied(occupied), piece(std::move(piece)){}
        Tile(){}

<<<<<<< HEAD
=======
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

>>>>>>> 0ce9fc0 (adding Player and sub class, LICENCE, Main and separating color and category)
};