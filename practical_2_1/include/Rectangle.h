#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
using namespace std;

class Rectangle
{
private:
    int index;
    float length;
    float width;

public:
    void adddata();
    void area();
    void parameter();
    int update(int);
};

#endif

