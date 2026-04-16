#include <iostream>
#include "DynamicArray.h"
using namespace std;

void run() {
    int size = 0;
    int* arr = NULL;
    int choice, value;

    do {
        cin >> choice;

        if (choice == 1) {
            cin >> value;

            int* temp = new int[size + 1];

            for (int i = 0; i < size; i++)
                temp[i] = arr[i];

            temp[size] = value;

            delete[] arr;
            arr = temp;
            size++;
        }
        else if (choice == 2) {
            for (int i = 0; i < size; i++)
                cout << arr[i] << " ";
            cout << endl;
        }
    } while (choice != 3);

    delete[] arr;
}


