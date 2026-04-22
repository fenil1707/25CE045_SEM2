#ifndef GRADE_H
#define GRADE_H
#include <iostream>
using namespace std;

class Grading{
protected:
    float marks;
public:
    Grading();
    Grading(float m);
    virtual char computeGrade()=0;
};

class Undergraduate:public Grading{
public:
    Undergraduate();
    Undergraduate(float m);
    char computeGrade();
};

class Postgraduate:public Grading{
public:
    Postgraduate();
    Postgraduate(float m);
    char computeGrade();
};

#endif

