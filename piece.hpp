#pragma once

#include <string>

enum class Category {King, Queen, Rook, Bishop, Knight, Pawn};

enum class Color {Black, White};

class Piece
{
    private:
        Category category;
        Color color;
        int x;
        int y;
        int value;

    public:
        Piece(Category category, Color color, int x, int y, int value) : category(category), color(color), x(x), y(y), value(value){}

};