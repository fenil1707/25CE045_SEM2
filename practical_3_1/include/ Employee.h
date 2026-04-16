#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<iostream>
#include <string>
using namespace std;

class Employee
{
private:
    string name;
    double basicSalary;
    double bonus;

public:
    Employee* next;

    Employee();
    Employee(string, double, double);

    double computeTotalSalary();   // declaration only
    void inputData();
    void displayData();
};

#endif

