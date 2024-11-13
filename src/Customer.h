#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

class Customer {
public:
    Customer();
    ~Customer();
    void addCustomer();
    void editCustomer();
    void deleteCustomer();
    void searchCustomer();

private:
    int customer_id;
    std::string customer_name;
    std::string customer_mobile;
    std::string customer_email;
};

#endif
