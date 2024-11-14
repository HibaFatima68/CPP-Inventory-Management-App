#ifndef TEDDYBEARSINVENTORY_H
#define TEDDYBEARSINVENTORY_H

#include "Inventory.h"
#include <string>

class TeddyBearsInventory : public Inventory {
public:
    TeddyBearsInventory();
    ~TeddyBearsInventory();
    void displayTeddyDetails();

private:
    std::string size;
    std::string material;
    std::string color;
};

#endif
