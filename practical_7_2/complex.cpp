#include "complex.h"

Complex::Complex(){real=0;imag=0;}
Complex::Complex(float r,float i){real=r;imag=i;}

Complex Complex::operator+(Complex c){
    return Complex(real+c.real,imag+c.imag);
}

Complex Complex::operator-(Complex c){
    return Complex(real-c.real,imag-c.imag);
}

void Complex::display(){
    cout<<real<<" + "<<imag<<"i"<<endl;
}

