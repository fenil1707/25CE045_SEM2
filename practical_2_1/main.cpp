#include "Rectangle.h"

int main()
{
    Rectangle r[20];
    int ch, Index;
    int i, count = 0;

N:
    cout << "1.add data 2.area 3.parameter 4.update 5.exit:";
    cin >> ch;

    switch (ch)
    {
    case 1:
        r[count].adddata();
        count++;
        goto N;

    case 2:
        for (i = 0; i < count; i++)
        {
            r[i].area();
        }
        goto N;

    case 3:
        for (i = 0; i < count; i++)
        {
            r[i].parameter();
        }
        goto N;

    case 4:
        cout << "enter rectangle number: ";
        cin >> Index;
        for (i = 0; i < count; i++)
        {
            if (r[i].update(Index) == 1)
                break;
        }
        if (i == count)
        {
            cout << "rectangle does not exist" << endl;
        }
        goto N;

    case 5:
        break;

    default:
        cout << "invalid choice" << endl;
        goto N;
    }
}

