#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;

class Person{
protected:
    string name;
    int age;
public:
    Person();
    Person(string n,int a);
    void displayPerson();
};

class Employee:public Person{
protected:
    int empId;
public:
    Employee();
    Employee(string n,int a,int id);
    int getId();
    void displayEmployee();
};

class Manager:public Employee{
    string department;
public:
    Manager();
    Manager(string n,int a,int id,string d);
    void displayManager();
};

#endif

