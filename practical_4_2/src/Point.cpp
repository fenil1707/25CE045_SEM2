#include <iostream>
#include "Point.h"
using namespace std;


Point::Point(int x_val, int y_val) {
    x = x_val;
    y = y_val;
}

Point& Point::move(int dx, int dy) {
    x += dx;
    y += dy;
    return *this;
}


void Point::display() {
    cout << "Point(" << x << ", " << y << ")" << endl;
}


void updatePoint(Point* p, int dx, int dy) {
    p->move(dx, dy);
}
