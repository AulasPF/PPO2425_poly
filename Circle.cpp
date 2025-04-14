#include "Circle.h"
#include <sstream>

Circle::Circle(const Point& center, double radius)
    : Figure(center), radius(radius) {}

string Circle::info() const {
    ostringstream oss;
    oss << "Circle(center=(" << center.x << ", " << center.y << "), radius=" << radius << ")";
    return oss.str();
}
