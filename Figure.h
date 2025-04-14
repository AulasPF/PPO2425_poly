#ifndef FIGURE_H
#define FIGURE_H

#include "Point.h"
#include <string>

class Figure {
protected:
    Point center;

public:
    Figure(const Point& center);
    virtual ~Figure() = default;

    virtual std::string info() const = 0;
};

#endif // FIGURE_H
