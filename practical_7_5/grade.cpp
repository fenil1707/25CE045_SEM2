#include "grade.h"

Grading::Grading(){marks=0;}
Grading::Grading(float m){marks=m;}

Undergraduate::Undergraduate():Grading(){}
Undergraduate::Undergraduate(float m):Grading(m){}
char Undergraduate::computeGrade(){
    if(marks>=75) return 'A';
    else if(marks>=60) return 'B';
    else if(marks>=50) return 'C';
    else return 'F';
}

Postgraduate::Postgraduate():Grading(){}
Postgraduate::Postgraduate(float m):Grading(m){}
char Postgraduate::computeGrade(){
    if(marks>=80) return 'A';
    else if(marks>=65) return 'B';
    else if(marks>=55) return 'C';
    else return 'F';
}

