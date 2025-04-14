#ifndef FIGURE_H
#define FIGURE_H

#include "Point.h"
#include <string>

using namespace std;

class Figure {
protected:
    Point center;

public:
    Figure(const Point& center);

    virtual string info() const = 0;
};

#endif // FIGURE_H
