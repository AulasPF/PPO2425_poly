#include "Rectangle.h"
#include <sstream>

Rectangle::Rectangle(const Point& center, double width, double height)
    : Figure(center), width(width), height(height) {}

std::string Rectangle::info() const {
    std::ostringstream oss;
    oss << "Rectangle(center=(" << center.x << ", " << center.y << "), width=" << width << ", height=" << height << ")";
    return oss.str();
}
