#ifndef MISTSINVENTORY_H
#define MISTSINVENTORY_H

#include "Inventory.h"
#include <string>

class MistsInventory : public Inventory {
public:
    MistsInventory();
    ~MistsInventory();
    void displayMistDetails();
    void checkExpiration();

private:
    std::string fragrance_type;
    std::string expiration_date;
};

#endif
