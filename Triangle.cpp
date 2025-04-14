#include "Triangle.h"
#include <sstream>

Triangle::Triangle(const Point& center, double base, double height)
    : Figure(center), base(base), height(height) {}

std::string Triangle::info() const {
    std::ostringstream oss;
    oss << "Triangle(center=(" << center.x << ", " << center.y << "), base=" << base << ", height=" << height << ")";
    return oss.str();
}
