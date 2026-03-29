#include "Item.h"

Item::Item()
{
    itemID = 0;
    itemName = "Unknown";
    price = 0.0;
    quantity = 0;
}

Item::Item(int id, string name, double p, int qty)
{
    itemID = id;
    itemName = name;
    price = p;
    quantity = qty;
}

void Item::setItem(int id, string name, double p, int qty)
{
    itemID = id;
    itemName = name;
    price = p;
    quantity = qty;
}

int Item::getID()
{
    return itemID;
}

void Item::increaseStock(int qty)
{
    quantity += qty;
    cout << "Stock added successfully.\n";
}

void Item::decreaseStock(int qty)
{
    if (qty <= quantity)
    {
        quantity -= qty;
        cout << "Stock sold.\n";
    }
    else
    {
        cout << "Insufficient stock! Sale failed.\n";
    }
}

void Item::display()
{
    cout << "\nItem ID: " << itemID;
    cout << "\nItem Name: " << itemName;
    cout << "\nPrice: " << price;
    cout << "\nQuantity in Stock: " << quantity << endl;
}

