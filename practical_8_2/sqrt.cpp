#include <iostream>
#include <cmath>
#include "sqrt.h"
using namespace std;

class NegativeNumberException{};

void calculateSqrt(){
    float x;
    cout<<"Enter number: ";
    try{
        if(!(cin>>x)) throw "Invalid input";
        if(x<0) throw NegativeNumberException();
        cout<<"Square Root: "<<sqrt(x)<<endl;
    }catch(NegativeNumberException){
        cout<<"Negative number not allowed"<<endl;
    }catch(const char* e){
        cout<<e<<endl;
    }
}

