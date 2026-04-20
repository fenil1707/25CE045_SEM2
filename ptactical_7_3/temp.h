#ifndef TEMP_H
#define TEMP_H
#include <iostream>
using namespace std;

class Fahrenheit;

class Celsius{
    float c;
public:
    Celsius();
    Celsius(float x);
    operator Fahrenheit();
    bool operator==(Celsius t);
    float get();
};

class Fahrenheit{
    float f;
public:
    Fahrenheit();
    Fahrenheit(float x);
    operator Celsius();
    bool operator==(Fahrenheit t);
    float get();
};

#endif

