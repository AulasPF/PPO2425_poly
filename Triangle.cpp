#include "Triangle.h"
#include <sstream>

using namespace std; 

Triangle::Triangle(const Point& center, double base, double height)
    : Figure(center), base(base), height(height) {}

string Triangle::info() const {
    ostringstream oss;
    oss << "Triangle(center=(" << center.x << ", " << center.y << "), base=" << base << ", height=" << height << ")";
    return oss.str();
}
