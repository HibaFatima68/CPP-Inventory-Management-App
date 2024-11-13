#ifndef INVENTORYMANAGER_H
#define INVENTORYMANAGER_H

#include <vector>
#include "Inventory.h"

class InventoryManager {
public:
    InventoryManager();
    ~InventoryManager();
    void addInventory();
    void deleteInventory();
    void updateInventory();
    void searchInventory();
    void displayAllInventories();
    void saveAllToFile();
    void loadAllFromFile();

private:
    std::vector<Inventory*> inventories;
};

#endif
