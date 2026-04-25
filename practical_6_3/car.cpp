#include <iostream>
#include "car.h"

Fuel::Fuel(){fuelType="";}
Fuel::Fuel(std::string f){fuelType=f;}
void Fuel::setFuel(std::string f){fuelType=f;}
void Fuel::displayFuel(){std::cout<<"Fuel: "<<fuelType<<std::endl;}

Brand::Brand(){brandName="";}
Brand::Brand(std::string b){brandName=b;}
void Brand::setBrand(std::string b){brandName=b;}
void Brand::displayBrand(){std::cout<<"Brand: "<<brandName<<std::endl;}

Car::Car():Fuel(),Brand(){}
Car::Car(std::string f,std::string b):Fuel(f),Brand(b){}
void Car::displayCar(){
    displayFuel();
    displayBrand();
}

