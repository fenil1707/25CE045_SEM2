#include "temp.h"

Celsius::Celsius(){c=0;}
Celsius::Celsius(float x){c=x;}
float Celsius::get(){return c;}

Fahrenheit::Fahrenheit(){f=0;}
Fahrenheit::Fahrenheit(float x){f=x;}
float Fahrenheit::get(){return f;}

Celsius::operator Fahrenheit(){
    return Fahrenheit((c*9/5)+32);
}

Fahrenheit::operator Celsius(){
    return Celsius((f-32)*5/9);
}

bool Celsius::operator==(Celsius t){
    return c==t.c;
}

bool Fahrenheit::operator==(Fahrenheit t){
    return f==t.f;
}

