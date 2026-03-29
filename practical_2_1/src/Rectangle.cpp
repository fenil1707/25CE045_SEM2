#include "Rectangle.h"
#include "Rectangle.h"

void Rectangle::adddata()
{
    cout << "enter rectangle number: ";
    cin >> index;
    cout << "enter length and width: ";
    cin >> length >> width;
}

void Rectangle::area()
{
    cout << "area is: ";
    cout << length * width << endl;
}

void Rectangle::parameter()
{
    cout << "parameter is: ";
    cout << 2 * (length + width) << endl;
}

int Rectangle::update(int x)
{
    if (index == x)
    {
        cout << "enter new length and width: ";
        cin >> length >> width;
        return 1;
    }
    return 0;
}



