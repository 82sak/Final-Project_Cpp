#include "models/customer.hpp"
#include <iostream>

Customer::Customer(int id, const std::string& name)
    : customerId(id), customerName(name) {}

void Customer::displayMenu() const {
    int choice = -1;

    do {
        std::cout << "\n========== CUSTOMER MENU ==========\n";
        std::cout << "Welcome, " << customerName << " (ID: " << customerId << ")\n";
        std::cout << "-----------------------------------\n";
        std::cout << "1. View Menu Items\n";
        std::cout << "2. Add Item to Cart\n";
        std::cout << "3. View Cart\n";
        std::cout << "4. Checkout\n";
        std::cout << "5. View Best Seller\n";
        std::cout << "0. Exit\n";
        std::cout << "-----------------------------------\n";
        std::cout << "Choose option: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            std::cout << "[CUSTOMER] Displaying menu items...\n";
            break;
        case 2:
            std::cout << "[CUSTOMER] Adding item to cart...\n";
            break;
        case 3:
            std::cout << "[CUSTOMER] Viewing cart...\n";
            break;
        case 4:
            std::cout << "[CUSTOMER] Checking out...\n";
            break;
        case 5:
            std::cout << "[CUSTOMER] Showing best seller...\n";
            break;
        case 0:
            std::cout << "Goodbye!\n";
            break;
        default:
            std::cout << "Invalid option. Try again.\n";
        }

    } while (choice != 0);
}
