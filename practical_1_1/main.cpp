#include "online_payment.h"

int main()
{
    online_payment B[50];
    int ch, last = 0, i;
    long int wn, rwn;

N:
    cout << "\n1: create wallet\n2: transfer\n3: withdraw\n4: check balance\n5: wallet detail\n6: exit\n";
    cin >> ch;

    switch (ch)
    {
    case 1:
        B[last].cw();
        last++;
        goto N;

    case 2:
    {
        cout << "enter sender wallet number: ";
        cin >> wn;
        cout << "enter receiver wallet number: ";
        cin >> rwn;

        int s = -1, r = -1;

        for (i = 0; i < last; i++)
        {
            if (B[i].cb(wn) == 1) s = i;
            if (B[i].cb(rwn) == 1) r = i;
        }

        if (s != -1 && r != -1)
        {
            B[s].w(B[r], wn);
        }
        else
        {
            cout << "wallet does not exist" << endl;
        }
        goto N;
    }

    case 3:
        cout << "enter wallet number: ";
        cin >> wn;
        for (i = 0; i < last; i++)
        {
            if (B[i].d(wn) == 1)
                break;
        }
        if (i == last)
            cout << "wallet does not exist" << endl;
        goto N;

    case 4:
        cout << "enter wallet number: ";
        cin >> wn;
        for (i = 0; i < last; i++)
        {
            if (B[i].cb(wn) == 1)
                break;
        }
        if (i == last)
            cout << "wallet does not exist" << endl;
        goto N;

    case 5:
        cout << "enter wallet number: ";
        cin >> wn;
        for (i = 0; i < last; i++)
        {
            if (B[i].wd(wn) == 1)
                break;
        }
        if (i == last)
            cout << "wallet does not exist" << endl;
        goto N;

    case 6:
        break;

    default:
        cout << "invalid choice" << endl;
        goto N;
    }
}

