#include <iostream>
#include "Inventory.h"
#include "Stock.h"
#include "Customer.h"

#include "Supplier.h"

#include "Payment.h"
#include "InventoryManager.h"

#include"BowsInventory.h"

#include "MistsInventory.h"

#include "ScrunchiesInventory.h"

#include"TeddyBearsInventory.h"


using namespace std;

void displayMenu() {
    cout << "Welcome to Hibs Blues - The Cutest Stop for All Your Aesthetic Essentials!" << endl;
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
    return 0;
        }

    // while (true) { // Loop to keep the program running until the user chooses to exit
    //     cout << "HIBA'S INVENTORY MANAGEMENT SYSTEM" << endl;
    //     cout << "=================