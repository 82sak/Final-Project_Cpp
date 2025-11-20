#include  "models/staff.hpp" 
#include <iostream>

Staff::Staff(int id, const std::string& name)
    : staffId(id), staffName(name) {}

void Staff::displayMenu() const {
    int choice = -1;

    do {
        std::cout << "\n========== STAFF DASHBOARD ==========\n";
        std::cout << "Logged in as: " << staffName << " (ID: " << staffId << ")\n";
        std::cout << "--------------------------------------\n";
        std::cout << "1. View All Products\n";
        std::cout << "2. View Stock Information\n";
        std::cout << "3. View Customer Receipt by Order ID\n";
        std::cout << "0. Logout\n";
        std::cout << "--------------------------------------\n";
        std::cout << "Enter option: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            std::cout << "[STAFF] Displaying all products...\n";
            break;
        case 2:
            std::cout << "[STAFF] Displaying stock information...\n";
            break;
        case 3:
            std::cout << "[STAFF] Viewing receipt...\n";
            break;
        case 0:
            std::cout << "Logging out...\n";
            break;
        default:
            std::cout << "Invalid option. Please try again.\n";
        }

    } while (choice != 0);
}
