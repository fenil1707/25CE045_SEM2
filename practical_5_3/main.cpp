#include <iostream>
#include "inventory.h"
using namespace std;

int main() {
    int choice;

    do {
        cout << "\n1. Add Item\n2. View Items\n3. Search Item\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addItem(); break;
            case 2: viewItems(); break;
            case 3: searchItem(); break;
            case 4: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}
