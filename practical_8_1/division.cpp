#include <iostream>
#include "division.h"
using namespace std;

void performDivision(){
    int a,b;
    cout<<"Enter numerator and denominator: ";
    try{
        if(!(cin>>a>>b)) throw "Invalid input";
        if(b==0) throw "Division by zero";
        cout<<"Result: "<<(float)a/b<<endl;
    }catch(const char* e){
        cout<<e<<endl;
    }
}

