#include "shape.h"

void Shape::setRadius(float r){
    radius=r;
}

float Shape::getRadius(){
    return radius;
}

float Circle::area(){
    return 3.14f*radius*radius;
}

