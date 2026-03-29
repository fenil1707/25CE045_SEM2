#include "bank_account.h"

int main()
{
    bank_account B[50];
    int ch, last = 0, i;
    long int an;

N:
    cout << "1: create account 2: withdraw 3: deposit 4: check balance 5: exit";
    cin >> ch;

    switch (ch)
    {
    case 1:
        B[last].ca();
        last++;
        goto N;

    case 2:
        cout << "enter account number: ";
        cin >> an;
        for (i = 0; i < last; i++)
        {
            if (B[i].w(an) == 1)
                break;
        }
        if (i == last)
            cout << "account does not exist" << endl;
        goto N;

    case 3:
        cout << "enter account number: ";
        cin >> an;
        for (i = 0; i < last; i++)
        {
            if (B[i].d(an) == 1)
                break;
        }
        if (i == last)
            cout << "account does not exist" << endl;
        goto N;

    case 4:
        cout << "enter account number: ";
        cin >> an;
        for (i = 0; i < last; i++)
        {
            if (B[i].cb(an) == 1)
                break;
        }
        if (i == last)
            cout << "account does not exist" << endl;
        goto N;

    case 5:
        break;

    default:
        cout << "invalid choice" << endl;
        goto N;
    }
}

