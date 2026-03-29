#include "Item.h"

int main()
{
    Item inventory[10];
    int count = 0;
    int choice;

N:
    cout << "1. Add New Item\n";
    cout << "2. Increase Stock\n";
    cout << "3. Sell Item\n";
    cout << "4. Display All Items\n";
    cout << "5. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        int id, qty;
        string name;
        double price;

        cout << "Enter Item ID: ";
        cin >> id;
        cout << "Enter Item Name: ";
        cin >> name;
        cout << "Enter Price: ";
        cin >> price;
        cout << "Enter Quantity: ";
        cin >> qty;

        inventory[count].setItem(id, name, price, qty);
        count++;
        cout << "Item added successfully.\n";
        goto N;
    }

    case 2:
    {
        int id, qty;
        cout << "Enter Item ID: ";
        cin >> id;

        for (int i = 0; i < count; i++)
        {
            if (inventory[i].getID() == id)
            {
                cout << "Enter quantity to add: ";
                cin >> qty;
                inventory[i].increaseStock(qty);
            }
        }
        goto N;
    }

    case 3:
    {
        int id, qty;
        cout << "Enter Item ID: ";
        cin >> id;

        for (int i = 0; i < count; i++)
        {
            if (inventory[i].getID() == id)
            {
                cout << "Enter quantity to sell: ";
                cin >> qty;
                inventory[i].decreaseStock(qty);
            }
        }
        goto N;
    }

    case 4:
        for (int i = 0; i < count; i++)
        {
            inventory[i].display();
        }
        goto N;

    case 5:
        cout << "Exiting program...\n";
        break;

    default:
        cout << "Invalid choice! Try again.\n";
        goto N;
    }

    return 0;
}

