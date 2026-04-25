#include <iostream>
#include "car.h"

int main(){
    int n;
    std::cout<<"Enter number of cars (dynamic): ";
    std::cin>>n;

    Car* c=new Car[n];

    for(int i=0;i<n;i++){
        std::string f,b;
        std::cout<<"\nEnter details for car "<<i+1<<std::endl;
        std::cout<<"Enter fuel type: ";
        std::cin>>f;
        std::cout<<"Enter brand name: ";
        std::cin>>b;
        c[i]=Car(f,b);
    }

    std::cout<<"\n--- Dynamic Cars Data ---\n";
    for(int i=0;i<n;i++){
        std::cout<<"\nCar "<<i+1<<std::endl;
        c[i].displayCar();
    }

    int m;
    std::cout<<"\nEnter number of cars (static): ";
    std::cin>>m;

    Car arr[100];

    for(int i=0;i<m;i++){
        std::string f,b;
        std::cout<<"\nEnter details for car "<<i+1<<std::endl;
        std::cout<<"Enter fuel type: ";
        std::cin>>f;
        std::cout<<"Enter brand name: ";
        std::cin>>b;
        arr[i]=Car(f,b);
    }

    std::cout<<"\n--- Static Cars Data ---\n";
    for(int i=0;i<m;i++){
        std::cout<<"\nCar "<<i+1<<std::endl;
        arr[i].displayCar();
    }

    delete[] c;
    return 0;
}

