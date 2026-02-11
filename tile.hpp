#pragma once

#include <memory>
#include <string>

#include "piece.hpp"

class Tile
{
    private:
        bool occupied = false;
        std::unique_ptr<Piece> piece = std::make_unique<Piece>(NULL);

    public:
        Tile(bool occupied, std::unique_ptr<Piece> piece) : occupied(occupied), piece(std::move(piece)){}
        Tile(){}

};