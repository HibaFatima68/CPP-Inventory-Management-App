#ifndef PAYMENT_H
#define PAYMENT_H

class Payment {
public:
    Payment();
    ~Payment();
    void addPayment();
    void deletePayment();
    void updatePayment();
    void searchPayment();

private:
    int payment_id;
    int payment_customer_id;
    std::string payment_date;
    double payment_amount;
};

#endif
