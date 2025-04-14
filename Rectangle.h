#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Figure.h"

class Rectangle : public Figure {
private:
    double width;
    double height;

public:
    Rectangle(const Point& center, double width, double height);
    std::string info() const override;
};

#endif // RECTANGLE_H
