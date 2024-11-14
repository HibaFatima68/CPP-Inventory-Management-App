#ifndef SCRUNCHIESINVENTORY_H
#define SCRUNCHIESINVENTORY_H

#include "Inventory.h"
#include <string>

class ScrunchiesInventory : public Inventory {
public:
    ScrunchiesInventory();
    ~ScrunchiesInventory();
    void displayScrunchieDetails();

private:
    std::string material;
    std::string color;
};

#endif
