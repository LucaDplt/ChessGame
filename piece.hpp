#pragma once

#include <string>

<<<<<<< HEAD
enum class Category {King, Queen, Rook, Bishop, Knight, Pawn};

enum class Color {Black, White};
=======
#include "color.hpp"
#include "category.hpp"
>>>>>>> 0ce9fc0 (adding Player and sub class, LICENCE, Main and separating color and category)

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
<<<<<<< HEAD

=======
        Category getCategory()
        {
            return category;
        }
>>>>>>> 0ce9fc0 (adding Player and sub class, LICENCE, Main and separating color and category)
};