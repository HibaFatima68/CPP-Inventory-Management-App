#ifndef SUPPLIER_H
#define SUPPLIER_H

#include <string>

class Supplier {
public:
    Supplier();
    ~Supplier();
    void addSupplier();
    void editSupplier();
    void deleteSupplier();
    void searchSupplier();

private:
    int supplier_id;
    std::string supplier_name;
    std::string supplier_mobile;
    std::string supplier_email;
};

#endif
