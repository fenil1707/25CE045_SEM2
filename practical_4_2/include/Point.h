#ifndef POINT_H
#define POINT_H

class Point {
private:
    int x, y;

public:

    Point(int x_val = 0, int y_val = 0);

    Point& move(int dx, int dy);


    void display();
};


void updatePoint(Point* p, int dx, int dy);

#endif

