#pragma once

#include <memory>

#include "piece.hpp"
#include "tile.hpp"

class Board
{
    private:
        Tile board[8][8];

    public:
        Board()
        {
            for(int i = 0; i < 8; i++)
            {
                for(int j = 0; j < 8; j++)
                {
                    if(j == 1)
                    {
                        board[i][j] = Tile(true, std::make_unique<Piece>(Piece(Category::Pawn, Color::White, i, j, 1)));
                    }
                    if(j == 6)
                    {
                        board[i][j] = Tile(true, std::make_unique<Piece>(Piece(Category::Pawn, Color::Black, i, j, 1)));
                    }
                    else
                    {
                        board[i][j] = Tile();
                    }
                }
            }
            board[0][0] = Tile(true, std::make_unique<Piece>(Piece(Category::Rook, Color::White, 0, 0, 6)));
            board[1][0] = Tile(true, std::make_unique<Piece>(Piece(Category::Knight, Color::White, 1, 0, 6)));
            board[2][0] = Tile(true, std::make_unique<Piece>(Piece(Category::Bishop, Color::White, 2, 0, 6)));
            board[3][0] = Tile(true, std::make_unique<Piece>(Piece(Category::Queen, Color::White, 3, 0, 6)));
            board[4][0] = Tile(true, std::make_unique<Piece>(Piece(Category::King, Color::White, 4, 0, 6)));
            board[5][0] = Tile(true, std::make_unique<Piece>(Piece(Category::Bishop, Color::White, 5, 0, 6)));
            board[6][0] = Tile(true, std::make_unique<Piece>(Piece(Category::Knight, Color::White, 6, 0, 6)));
            board[7][0] = Tile(true, std::make_unique<Piece>(Piece(Category::Rook, Color::White, 7, 0, 6)));
            board[0][7] = Tile(true, std::make_unique<Piece>(Piece(Category::Rook, Color::Black, 0, 7, 6)));
            board[1][7] = Tile(true, std::make_unique<Piece>(Piece(Category::Knight, Color::Black, 1, 7, 6)));
            board[2][7] = Tile(true, std::make_unique<Piece>(Piece(Category::Bishop, Color::Black, 2, 7, 6)));
            board[3][7] = Tile(true, std::make_unique<Piece>(Piece(Category::Queen, Color::Black, 3, 7, 6)));
            board[4][7] = Tile(true, std::make_unique<Piece>(Piece(Category::King, Color::Black, 4, 7, 6)));
            board[5][7] = Tile(true, std::make_unique<Piece>(Piece(Category::Bishop, Color::Black, 5, 7, 6)));
            board[6][7] = Tile(true, std::make_unique<Piece>(Piece(Category::Knight, Color::Black, 6, 7, 6)));
            board[7][7] = Tile(true, std::make_unique<Piece>(Piece(Category::Rook, Color::Black, 7, 7, 6)));
        }

};