#include "Library.h"

int main()
{
    Library L[20];
    int ch, bookid;
    int i, count = 0;

N:
    cout << "1:add book 2:display 3:add copies 4:issue book 5:return book 6:exit";
    cin >> ch;

    switch (ch)
    {
    case 1:
        L[count].getdata();
        count++;
        goto N;

    case 2:
        for (i = 0; i < count; i++)
        {
            L[i].display();
        }
        goto N;

    case 3:
        cout << "enter book id:";
        cin >> bookid;
        for (i = 0; i < count; i++)
        {
            if (L[i].addcopies(bookid) == 1)
                break;
        }
        if (i == count)
            cout << "book does not exist" << endl;
        goto N;

    case 4:
        cout << "enter book id: ";
        cin >> bookid;
        for (i = 0; i < count; i++)
        {
            if (L[i].issuebook(bookid) == 1)
                break;
        }
        if (i == count)
            cout << "book does not exist" << endl;
        goto N;

    case 5:
        cout << "enter book id: ";
        cin >> bookid;
        for (i = 0; i < count; i++)
        {
            if (L[i].returnbook(bookid) == 1)
                break;
        }
        if (i == count)
            cout << "book does not exist" << endl;
        goto N;

    case 6:
        break;
    }
}


