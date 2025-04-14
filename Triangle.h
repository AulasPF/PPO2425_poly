#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Figure.h"

class Triangle : public Figure {
private:
    double base;
    double height;

public:
    Triangle(const Point& center, double base, double height);
    std::string info() const override;
};

#endif // TRIANGLE_H
