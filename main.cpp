#include <iostream>
#include <vector>
#include "Circle.h"
#include "Figure.h"
#include "Rectangle.h"
#include "Triangle.h"


using namespace std;

int main() {

    vector <Figure*> figuras; 

    // Figure f({4.0, 4.0});
    Circle c({1.0, 2.0}, 5.0);
    Rectangle r({0.0, 0.0}, 4.0, 6.0);
    Triangle t({2.0, 3.0}, 3.0, 4.0);


    // cout << f.info() << endl; 
    cout << c.info() << endl;
    cout << r.info() << endl;
    cout << t.info() << endl;

    // figuras.push_back(&f); 
    figuras.push_back(&c); 
    figuras.push_back(&r); 
    figuras.push_back(&t); 
    
    for( auto fig: figuras){
        cout << fig->info() << endl; 
    }

    return 0;
}
