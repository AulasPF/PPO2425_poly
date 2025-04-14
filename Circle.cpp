#include "Circle.h"
#include <sstream>

Circle::Circle(const Point& center, double radius)
    : Figure(center), radius(radius) {}

std::string Circle::info() const {
    std::ostringstream oss;
    oss << "Circle(center=(" << center.x << ", " << center.y << "), radius=" << radius << ")";
    return oss.str();
}
