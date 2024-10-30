#ifndef INVENTORY_H
#define INVENTORY_H


class Inventory
{
private:
    /* data */
    int inventory_id;
public:
     Inventory();
    ~ Inventory();
    void addInventory();
    void updateInventory();
    void deleteInventory();
    void searchInventory();
};

#endif