#include <iostream>
#include "Point.h"
using namespace std;

int main() {
    Point p(1, 2);

    cout << "Initial: ";
    p.display();

    // Chainable calls
    p.move(2, 3).move(-1, 4);

    cout << "After chaining: ";
    p.display();

    // Pass-by-reference using pointer
    updatePoint(&p, 5, -2);

    cout << "After pointer update: ";
    p.display();

    return 0;
}


