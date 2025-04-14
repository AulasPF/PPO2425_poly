#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"

int main() {
    Circle c({1.0, 2.0}, 5.0);
    Rectangle r({0.0, 0.0}, 4.0, 6.0);
    Triangle t({2.0, 3.0}, 3.0, 4.0);

    std::cout << c.info() << std::endl;
    std::cout << r.info() << std::endl;
    std::cout << t.info() << std::endl;

    return 0;
}
