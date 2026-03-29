#include "Library.h"

void Library::getdata()
{
    cout << "enter book name:";
    cin >> book_name;
    cout << "enter author name:";
    cin >> author_name;
    cout << "enter book id:";
    cin >> book_id;
    cout << "enter number of copies:";
    cin >> copies;
}

void Library::display()
{
    cout << "book name:" << book_name << endl;
    cout << "author name:" << author_name << endl;
    cout << "book id:" << book_id << endl;
    cout << "number of copies:" << copies << endl;
}

int Library::addcopies(int x)
{
    if (book_id == x)
    {
        int c;
        cout << "enter number of copies to add:";
        cin >> c;
        copies += c;
        return 1;
    }
    return 0;
}

int Library::issuebook(int x)
{
    if (book_id == x)
    {
        if (copies > 0)
        {
            copies--;
        }
        else
        {
            cout << "book not available" << endl;
        }
        return 1;
    }
    return 0;
}

int Library::returnbook(int x)
{
    if (book_id == x)
    {
        copies++;
        cout << "book returned " << endl;
        return 1;
    }
    return 0;
}

