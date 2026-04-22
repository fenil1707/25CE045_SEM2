#include "shape.h"

Rectangle::Rectangle(){l=0;w=0;}
Rectangle::Rectangle(float a,float b){l=a;w=b;}
float Rectangle::area(){
    return l*w;
}

Circle::Circle(){r=0;}
Circle::Circle(float x){r=x;}
float Circle::area(){
    return 3.14*r*r;
}

