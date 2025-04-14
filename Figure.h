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

    virtual string info() const;
};

#endif // FIGURE_H
