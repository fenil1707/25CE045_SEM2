#include "online_payment.h"

void online_payment::cw()
{
    cout << "enter wallet number: ";
    cin >> wallet_num;

    cout << "enter wallet user name: ";
    cin >> wallet_name;

    cout << "enter balance: ";
    cin >> wallet_balance;
}

int online_payment::w(online_payment &receive, long int x)
{
    int amt;
    if (wallet_num == x)
    {
        cout << "enter amount to transfer: ";
        cin >> amt;

        if (wallet_balance >= amt)
        {
            wallet_balance -= amt;
            receive.wallet_balance += amt;
            cout << "transfer successful" << endl;
        }
        else
        {
            cout << "insufficient balance" << endl;
        }
        return 1;
    }
    return 0;
}

int online_payment::d(long int x)
{
    int amt;
    if (wallet_num == x)
    {
        cout << "enter amount to withdraw: ";
        cin >> amt;

        if (wallet_balance >= amt)
        {
            wallet_balance -= amt;
        }
        else
        {
            cout << "insufficient balance" << endl;
        }
        return 1;
    }
    return 0;
}

int online_payment::cb(long int x)
{
    if (wallet_num == x)
    {
        cout << "balance: " << wallet_balance << endl;
        return 1;
    }
    return 0;
}

int online_payment::wd(long int x)
{
    if (wallet_num == x)
    {
        cout << "wallet user name: " << wallet_name << endl;
        cout << "wallet number: " << wallet_num << endl;
        cout << "wallet balance: " << wallet_balance << endl;
        return 1;
    }
    return 0;
}

