#ifndef LOAN_H
#define LOAN_H

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Loan
{
private:
    int loanID;
    string applicantName;
    double loanAmount;
    double annualInterestRate;
    int Months;

public:
    Loan();
    Loan(int, string, double, double, int);

    double calculateEMI();
    void display();
};

#endif

