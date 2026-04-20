#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
using namespace std;

class Complex{
    float real,imag;
public:
    Complex();
    Complex(float r,float i);
    Complex operator+(Complex c);
    Complex operator-(Complex c);
    void display();
};

#endif

