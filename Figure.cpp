#include <sstream>
#include "Figure.h"

using namespace std;

Figure::Figure(const Point& center) : center(center) {}

string Figure::info() const {
    ostringstream oss;
    oss << "Figure(center=(" << center.x << ", " << center.y << ")" << ")";
    return oss.str();
}