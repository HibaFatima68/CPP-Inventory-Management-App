#ifndef INVENTORY_H
#define INVENTORY_H


class Inventory
{
private:
    /* data */
    int inventory_id;
    std::string inventory_type;
    int inventory_quantity;
    std::string inventory_description;
    float price;

public:
     Inventory();
    ~ Inventory();
    void checkMethod();
    void getDetails();
    void saveToFile();
    void loadFromFile();
};

#endif