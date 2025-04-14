#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Figure.h"

using namespace std;

class Rectangle : public Figure {
private:
    double width;
    double height;

public:
    Rectangle(const Point& center, double width, double height);
    string info() const override;
};

#endif // RECTANGLE_H
