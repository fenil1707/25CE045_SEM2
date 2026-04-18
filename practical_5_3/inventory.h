#ifndef INVENTORY_H
#define INVENTORY_H

struct Item {
    char name[50];
    int quantity;
    float price;
};

void addItem();
void viewItems();
void searchItem();

#endif

