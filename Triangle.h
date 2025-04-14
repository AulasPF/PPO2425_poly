#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Figure.h"

using namespace std;

class Triangle : public Figure {
private:
    double base;
    double height;

public:
    Triangle(const Point& center, double base, double height);
    string info() const override;
};

#endif // TRIANGLE_H
