

#include "Employee.h"


Employee::Employee()
{
    name = "Not Assigned";
    basicSalary = 0.0;
    bonus = 5000.0;
    next = nullptr;
}

Employee::Employee(string empName, double bSalary, double empBonus)
{
    name = empName;
    basicSalary = bSalary;
    bonus = empBonus;
    next = nullptr;
}

double Employee::computeTotalSalary()
{
    return basicSalary + bonus;
}

void Employee::inputData()
{
    cout << "Enter Employee Name: ";
    cin >> ws;
    getline(cin, name);

    cout << "Enter Basic Salary: ";
    cin >> basicSalary;
}

void Employee::displayData()
{
    cout << "Name: " << name << endl;
    cout << "Basic Salary: " << basicSalary << endl;
    cout << "Bonus: " << bonus << endl;
    cout << "Total Salary: " << computeTotalSalary() << endl << endl;
}

