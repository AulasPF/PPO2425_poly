#ifndef CIRCLE_H
#define CIRCLE_H

#include "Figure.h"

using namespace std;

class Circle : public Figure {
private:
    double radius;

public:
    Circle(const Point& center, double radius);
    string info() const;
};

#endif // CIRCLE_H
