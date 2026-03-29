#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int roll_no;
    string name;
    float m1, m2, m3;
    float avg;

public:
    void getdata();
    void display();
    int perstu(int);
};

#endif

