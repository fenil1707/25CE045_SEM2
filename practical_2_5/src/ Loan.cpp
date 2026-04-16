#include "Loan.h"

Loan::Loan()
{
    loanID = 0;
    applicantName = "";
    loanAmount = 0;
    annualInterestRate = 0;
    Months = 0;
}

Loan::Loan(int id, string name, double amount, double rate, int tenure)
{
    loanID = id;
    applicantName = name;
    loanAmount = amount;
    annualInterestRate = rate;
    Months = tenure;
}

double Loan::calculateEMI()
{
    double r = annualInterestRate / (12 * 100);
    double n = Months;

    return (loanAmount * r * pow(1 + r, n)) /
           (pow(1 + r, n) - 1);
}

void Loan::display()
{
    cout << "\nLoan ID: " << loanID << endl;
    cout << "Applicant Name: " << applicantName << endl;
    cout << "Loan Amount: " << loanAmount << endl;
    cout << "Annual Interest Rate: " << annualInterestRate << "%" << endl;
    cout << "Tenure (Months): " << Months << endl;
    cout << "Monthly EMI: " << calculateEMI() << endl;
}

