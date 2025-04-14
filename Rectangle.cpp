#include "Rectangle.h"
#include <sstream>

using namespace std;

Rectangle::Rectangle(const Point& center, double width, double height)
    : Figure(center), width(width), height(height) {}

// string Rectangle::info() const {
//     ostringstream oss;
//     oss << "Rectangle(center=(" << center.x << ", " << center.y << "), width=" << width << ", height=" << height << ")";
//     return oss.str();
// }
