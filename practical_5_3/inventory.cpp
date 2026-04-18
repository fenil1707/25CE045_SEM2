#include <iostream>
#include <fstream>
#include <cstring>
#include "inventory.h"
using namespace std;

void addItem() {
    ofstream file("inventory.txt", ios::app);
    Item item;

    cout << "Enter item name: ";
    cin >> item.name;
    cout << "Enter quantity: ";
    cin >> item.quantity;
    cout << "Enter price: ";
    cin >> item.price;

    file << item.name << " " << item.quantity << " " << item.price << endl;
    file.close();

    cout << "Item added successfully!\n";
}

void viewItems() {
    ifstream file("inventory.txt");
    Item item;

    cout << "\n--- Inventory List ---\n";
    while (file >> item.name >> item.quantity >> item.price) {
        cout << "Name: " << item.name
             << ", Quantity: " << item.quantity
             << ", Price: " << item.price << endl;
    }

    file.close();
}

void searchItem() {
    ifstream file("inventory.txt");
    Item item;
    char searchName[50];
    bool found = false;

    cout << "Enter item name to search: ";
    cin >> searchName;

    while (file >> item.name >> item.quantity >> item.price) {
        if (strcmp(item.name, searchName) == 0) {
            cout << "Item Found!\n";
            cout << "Name: " << item.name
                 << ", Quantity: " << item.quantity
                 << ", Price: " << item.price << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Item not found!\n";
    }

    file.close();
}

