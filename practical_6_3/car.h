#ifndef CAR_H
#define CAR_H
#include <string>

class Fuel{
protected:
    std::string fuelType;
public:
    Fuel();
    Fuel(std::string f);
    void setFuel(std::string f);
    void displayFuel();
};

class Brand{
protected:
    std::string brandName;
public:
    Brand();
    Brand(std::string b);
    void setBrand(std::string b);
    void displayBrand();
};

class Car:public Fuel,public Brand{
public:
    Car();
    Car(std::string f,std::string b);
    void displayCar();
};

#endif

