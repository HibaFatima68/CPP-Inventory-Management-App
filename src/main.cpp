#include<iostream>
#include "Customer.h"
#include "Stock.h"
#include "Inventory.h"
#include "Supplier.h"
#include "Payment.h"

using namespace std;

int main(){
    Inventory inventory;
    //Customer customer;
    //Stock stock;
    //Payment payment;
    //Supplier supplier;
    int input;

    while (true) { // Loop to keep the program running until the user chooses to exit
        cout << "HIBA'S INVENTORY MANAGEMENT SYSTEM" << endl;
        cout << "==================================" << endl;
        cout << "1. Add Inventory" << endl;
        cout << "2. Add Customer" << endl;
        cout << "3. Add Stock" << endl;
        cout << "4. Add Payment" << endl;
        cout << "5. Add Supplier" << endl;
        cout << "6. Exit" << endl; // Option to exit the program

        cout << "Please enter your choice: ";
        cin >> input;

        // Logic for the execution of the menu
        if (input == 1) {
            inventory.addInventory();
        } else if (input == 2) {
            //customer.addCustomer();
            cout << "You entered 2" << endl;
        } else if (input == 3) {
            //stock.addStock();
            cout << "You entered 3" << endl;
        } else if (input == 4) {
            //payment.addPayment();
            cout << "You entered 4" << endl;
        } else if (input == 5) {
            //supplier.addSupplier();
            cout << "You entered 5" << endl;
        } else if (input == 6) {
            cout << "Exiting the program. Thank you!" << endl;
            break; // Exit the loop
        } else {
            cout << "\033[1;31m" << "Error: Invalid input!" << "\033[0m" << endl;
        }

        cout << endl; // Add a blank line for readability
    }

    return 0;
}
