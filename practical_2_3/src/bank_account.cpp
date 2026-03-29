#include "bank_account.h"

void bank_account::ca()
{
    cout << "enter account number: ";
    cin >> account_num;

    cout << "enter account holder name: ";
    cin >> account_name;

    cout << "enter balance: ";
    cin >> account_balance;
}

int bank_account::w(long int x)
{
    int amt;
    if (account_num == x)
    {
        cout << "enter amount to withdrawal: ";
        cin >> amt;

        if (account_balance >= amt)
        {
            account_balance -= amt;
        }
        else
        {
            cout << "insufficient balance" << endl;
        }
        return 1;
    }
    return 0;
}

int bank_account::d(long int x)
{
    int amt;
    if (account_num == x)
    {
        cout << "enter amount to deposit: ";
        cin >> amt;

        account_balance += amt;
        return 1;
    }
    return 0;
}

int bank_account::cb(long int x)
{
    if (account_num == x)
    {
        cout << "balance: " << account_balance << endl;
        return 1;
    }
    return 0;
}

