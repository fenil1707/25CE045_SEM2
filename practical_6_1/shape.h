#ifndef SHAPE_H
#define SHAPE_H

class Shape{
protected:
    float radius;
public:
    void setRadius(float r);
    float getRadius();
};

class Circle:public Shape{
public:
    float area();
};

#endif

