#include "Loan.h"


int main()
{
    Loan L;

    int id, tenure;
    string name;
    double amount, rate;

    cout << "Enter Loan Details:\n";

    cout << "Enter Loan ID: ";
    cin >> id;

    cout << "Enter Applicant Name: ";
    cin >> name;

    cout << "Enter Loan Amount: ";
    cin >> amount;

    cout << "Enter Annual Interest Rate (%): ";
    cin >> rate;

    cout << "Enter Tenure (Months): ";
    cin >> tenure;

    L = Loan(id, name, amount, rate, tenure);

    cout << "\nLoan Details:";
    L.display();

    return 0;
}

