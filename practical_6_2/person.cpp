#include "person.h"

Person::Person(){name="";age=0;}
Person::Person(string n,int a):name(n),age(a){}
void Person::displayPerson(){
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
}

Employee::Employee():Person(){empId=0;}
Employee::Employee(string n,int a,int id):Person(n,a),empId(id){}
int Employee::getId(){
    return empId;
}
void Employee::displayEmployee(){
    displayPerson();
    cout<<"Employee ID: "<<empId<<endl;
}

Manager::Manager():Employee(){department="";}
Manager::Manager(string n,int a,int id,string d):Employee(n,a,id),department(d){}
void Manager::displayManager(){
    displayEmployee();
    cout<<"Department: "<<department<<endl;
}


