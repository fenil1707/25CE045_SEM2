#ifndef CALC_H
#define CALC_H
#include <iostream>
using namespace std;

class Calculator{
public:
    int add(int a,int b);
    float add(float a,float b);
    float add(int a,float b);
    float add(float a,int b);
};

#endif

