#ifndef STOCK_H
#define STOCK_H

#include <string>

class Stock {
public:
    Stock();
    ~Stock();
    void addStock();
    void deleteStock();
    void updateStock();
    void searchStock();

private:
    int stock_id;
    std::string stock_item;
    int stock_number;
    std::string stock_type;
    std::string stock_description;
};

#endif
