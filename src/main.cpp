#include <iostream>
#include "Inventory.h"
#include "Stock.h"
#include "Customer.h"
#include "Supplier.h"
#include "Payment.h"
#include "InventoryManager.h"
#include "ElectronicsInventory.h"
#include "GroceryInventory.h"
#include "ClothingInventory.h"

using namespace std;

void displayMenu() {
    cout << "HIBA'S INVENTORY MANAGEMENT SYSTEM" << endl;
    cout << "==================================" << endl;
    cout << "1. Add Inventory" << endl;
    cout << "2. Add Customer" << endl;
    cout << "3. Add Stock" << endl;
    cout << "4. Add Supplier" << endl;
    cout << "5. Add Payment" << endl;
    cout << "6. Display All Inventories" << endl;
    cout << "7. Search Inventory" << endl;
    cout << "8. Exit" << endl;
    cout << "Please enter your choice: ";
}

int main(){
    Inventory inventory;

    int input;

    int choice;
    bool running = true;

        while (running) {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                // Call function to add inventory
                cout << "Adding Inventory..." << endl;
                inventory.checkMethod();
                break;
            case 2:
                // Call function to add customer
                cout << "Adding Customer..." << endl;
                break;
            case 3:
                // Call function to add stock
                cout << "Adding Stock..." << endl;
                break;
            case 4:
                // Call function to add supplier
                cout << "Adding Supplier..." << endl;
                break;
            case 5:
                // Call function to add payment
                cout << "Adding Payment..." << endl;
                break;
            case 6:
                // Call function to display all inventories
                cout << "Displaying All Inventories..." << endl;
                break;
            case 7:
                // Call function to search inventory
                cout << "Searching Inventory..." << endl;
                break;
            case 8:
                running = false;
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    // while (true) { // Loop to keep the program running until the user chooses to exit
    //     cout << "HIBA'S INVENTORY MANAGEMENT SYSTEM" << endl;
    //     cout << "==================================" << endl;
    //     cout << "1. Add Inventory" << endl;
    //     cout << "2. Add Customer" << endl;
    //     cout << "3. Add Stock" << endl;
    //     cout << "4. Add Payment" << endl;
    //     cout << "5. Add Supplier" << endl;
    //     cout << "6. Exit" << endl; // Option to exit the program

    //     cout << "Please enter your choice: ";
    //     cin >> input;

    //     // Logic for the execution of the menu
    //     if (input == 1) {
    //         inventory.addInventory();
    //     } else if (input == 2) {
    //         //customer.addCustomer();
    //         cout << "You entered 2" << endl;
    //     } else if (input == 3) {
    //         //stock.addStock();
    //         cout << "You entered 3" << endl;
    //     } else if (input == 4) {
    //         //payment.addPayment();
    //         cout << "You entered 4" << endl;
    //     } else if (input == 5) {
    //         //supplier.addSupplier();
    //         cout << "You entered 5" << endl;
    //     } else if (input == 6) {
    //         cout << "Exiting the program. Thank you!" << endl;
    //         break; // Exit the loop
    //     } else {
    //         cout << "\033[1;31m" << "Error: Invalid input!" << "\033[0m" << endl;
    //     }

    //     
    // }

    return 0;
}
