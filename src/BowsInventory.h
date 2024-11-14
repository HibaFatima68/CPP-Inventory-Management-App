#ifndef BOWSINVENTORY_H
#define BOWSINVENTORY_H

#include "Inventory.h"
#include <string>

class BowsInventory : public Inventory {
public:
    BowsInventory();
    ~BowsInventory();
    void displayBowDetails();

private:
    std::string material;
    std::string color;
};

#endif
