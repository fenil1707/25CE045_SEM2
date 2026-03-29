#include "Student.h"

int main()
{
    Student s[10];
    int ch, id;
    int i, count = 0;

N:
    cout << "1:add data 2: display 3:search 4:exit:";
    cin >> ch;

    switch (ch)
    {
    case 1:
        s[count].getdata();
        count++;
        goto N;

    case 2:
        for (i = 0; i < count; i++)
        {
            s[i].display();
        }
        goto N;

    case 3:
        cout << "enter roll no to be searched: ";
        cin >> id;
        for (i = 0; i < count; i++)
        {
            if (s[i].perstu(id))
                break;
        }
        if (i == count)
        {
            cout << "student not found" << endl;
        }
        goto N;

    case 4:
        break;

    default:
        cout << "invalid choice" << endl;
        goto N;
    }
}

