#include "Student.h"

void Student::getdata()
{
    cout << "enter roll no: ";
    cin >> roll_no;
    cout << "enter name: ";
    cin >> name;
    cout << "enter marks in 3 subjects: ";
    cin >> m1 >> m2 >> m3;
    avg = (m1 + m2 + m3) / 3;
}

void Student::display()
{
    cout << "roll no: " << roll_no << endl;
    cout << "name: " << name << endl;
    cout << "marks in 3 subjects: " << m1 << " " << m2 << " " << m3 << endl;
    cout << "average: " << avg << endl;
}

int Student::perstu(int x)
{
    if (roll_no == x)
    {
        cout << "roll no: " << roll_no << endl;
        cout << "name: " << name << endl;
        cout << "marks in 3 subjects: " << m1 << " " << m2 << " " << m3 << endl;
        cout << "average: " << avg << endl;
        return 1;
    }
    return 0;
}

