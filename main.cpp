#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;

int main() {
    Figure f({4.0, 4.0});
    Circle c({1.0, 2.0}, 5.0);
    Rectangle r({0.0, 0.0}, 4.0, 6.0);
    Triangle t({2.0, 3.0}, 3.0, 4.0);


    cout << f.info() << endl; 
    cout << c.info() << endl;
    cout << r.info() << endl;
    cout << t.info() << endl;

    return 0;
}
