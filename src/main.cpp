#include <iostream>
#include "Inventory.h"
#include "Stock.h"
#include "Customer.h"
#include "Supplier.h"
#include "Payment.h"
#include "InventoryManager.h"
#include "MistsInventory.h"
#include "ScrunchiesInventory.h"
#include "BowsInventory.h"
#include "TeddyBearsInventory.h"

using namespace std;

void displayMenu() {
    cout << "Welcome to Hibs Blues - The Cutest Stop for All Your Aesthetic Essentials!" << endl;
    cout << "==================================" << endl;
    cout << "1. Add Mists Inventory" << endl;
    cout << "2. Add Scrunchies Inventory" << endl;
    cout << "3. Add Bows Inventory" << endl;
    cout << "4. Add Teddy Bears Inventory" << endl;
    cout << "5. Display All Inventories" << endl;
    cout << "6. Search Inventory" << endl;
    cout << "7. Exit" << endl;
    cout << "Please enter your choice: ";
}

int main() {
    InventoryManager inventoryManager;
    int choice;
    bool running = true;

    while (running) {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1: {
                // Add Mists Inventory
                MistsInventory mists;
                cout << "Adding Mists Inventory..." << endl;
                mists.displayMistDetails();
                break;
            }
            case 2: {
                // Add Scrunchies Inventory
                ScrunchiesInventory scrunchies;
                cout << "Adding Scrunchies Inventory..." << endl;
                scrunchies.displayScrunchieDetails();
                break;
            }
            case 3: {
                // Add Bows Inventory
                BowsInventory bows;
                cout << "Adding Bows Inventory..." << endl;
                bows.displayBowDetails();
                break;
            }
            case 4: {
                // Add Teddy Bears Inventory
                TeddyBearsInventory teddyBears;
                cout << "Adding Teddy Bears Inventory..." << endl;
                teddyBears.displayTeddyDetails();
                break;
            }
            case 5:
                // Display all inventories
                cout << "Displaying All Inventories..." << endl;
                inventoryManager.displayAllInventories();
                break;
            case 6:
                // Search inventory
                cout << "Searching Inventory..." << endl;
                inventoryManager.searchInventory();
                break;
            case 7:
                running = false;
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
