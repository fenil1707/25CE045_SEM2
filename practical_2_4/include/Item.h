#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <string>
using namespace std;

class Item
{
private:
    int itemID;
    string itemName;
    double price;
    int quantity;

public:
    Item();
    Item(int, string, double, int);

    void setItem(int, string, double, int);
    int getID();

    void increaseStock(int);
    void decreaseStock(int);
    void display();
};

#endif

