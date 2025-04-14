#ifndef CIRCLE_H
#define CIRCLE_H

#include "Figure.h"

class Circle : public Figure {
private:
    double radius;

public:
    Circle(const Point& center, double radius);
    std::string info() const override;
};

#endif // CIRCLE_H
