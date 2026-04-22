#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
using namespace std;

class Shape{
public:
    virtual float area()=0;
};

class Rectangle:public Shape{
    float l,w;
public:
    Rectangle();
    Rectangle(float a,float b);
    float area();
};

class Circle:public Shape{
    float r;
public:
    Circle();
    Circle(float x);
    float area();
};

#endif

