#pragma once

#include <memory>
#include <iostream>

#include "piece.hpp"
#include "tile.hpp"
#include "player.hpp"
#include "human.hpp"
#include "alphaBeta.hpp"

class Board
{
    private:
        Tile board[8][8];
        Player blackPlayer;
        Player whitePlayer;

    public:
        Board(Player blackPlayer, Player whitePlayer) : blackPlayer(blackPlayer), whitePlayer(whitePlayer)
        {
            for(int i = 0; i < 8; i++)
            {
                for(int j = 0; j < 8; j++)
                {
                    if(j == 1)
                    {
                        board[i][j] = Tile(true, std::make_unique<Piece>(Piece(Category::Pawn, Color::White, i, j, 1)));
                    }
                    else if(j == 6)
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
            board[1][0] = Tile(true, std::make_unique<Piece>(Piece(Category::Knight, Color::White, 1, 0, 3)));
            board[2][0] = Tile(true, std::make_unique<Piece>(Piece(Category::Bishop, Color::White, 2, 0, 3)));
            board[3][0] = Tile(true, std::make_unique<Piece>(Piece(Category::Queen, Color::White, 3, 0, 9)));
            board[4][0] = Tile(true, std::make_unique<Piece>(Piece(Category::King, Color::White, 4, 0, 100)));
            board[5][0] = Tile(true, std::make_unique<Piece>(Piece(Category::Bishop, Color::White, 5, 0, 3)));
            board[6][0] = Tile(true, std::make_unique<Piece>(Piece(Category::Knight, Color::White, 6, 0, 3)));
            board[7][0] = Tile(true, std::make_unique<Piece>(Piece(Category::Rook, Color::White, 7, 0, 6)));
            board[0][7] = Tile(true, std::make_unique<Piece>(Piece(Category::Rook, Color::Black, 0, 7, 6)));
            board[1][7] = Tile(true, std::make_unique<Piece>(Piece(Category::Knight, Color::Black, 1, 7, 3)));
            board[2][7] = Tile(true, std::make_unique<Piece>(Piece(Category::Bishop, Color::Black, 2, 7, 3)));
            board[3][7] = Tile(true, std::make_unique<Piece>(Piece(Category::Queen, Color::Black, 3, 7, 9)));
            board[4][7] = Tile(true, std::make_unique<Piece>(Piece(Category::King, Color::Black, 4, 7, 100)));
            board[5][7] = Tile(true, std::make_unique<Piece>(Piece(Category::Bishop, Color::Black, 5, 7, 3)));
            board[6][7] = Tile(true, std::make_unique<Piece>(Piece(Category::Knight, Color::Black, 6, 7, 3)));
            board[7][7] = Tile(true, std::make_unique<Piece>(Piece(Category::Rook, Color::Black, 7, 7, 6)));
        }

        std::string icon(const Tile &t)
        {
            if(!t.isOccupied())
            {
                return "__";
            }
            switch (t.occupiedBy())
            {
                case Category::Rook:   return "Ro";
                case Category::Queen:  return "Qu";
                case Category::Pawn:   return "Pa";
                case Category::Knight: return "Kn";
                case Category::King:   return "Ki";
                case Category::Bishop: return "Bi";
                default: return "??";
            }
        }

        void display()
        {
            for(int i = 0; i < 8; i++)
            {
                for(int j = 0; j < 8; j++)
                {
                    std::cout<<icon(board[j][i]) << " ";
                }
                std::cout<<std::endl;
            }
        }
};