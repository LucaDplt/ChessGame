#pragma once

#include <string>

#include "color.hpp"
#include "category.hpp"

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
        Category getCategory()
        {
            return category;
        }
};