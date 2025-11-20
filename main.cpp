#include <iostream>
#include "ui/homepage.hpp"
 
using namespace std;
int main(){

    system("cls");
    typeWrite("                         Initializing system...\n");
    homePage();

    // Initialize menu and order manager
    MenuManager menu;
    OrderManager orders;

    // Add some products
    menu.addItem(MenuItem("Fried Rice", 3.5, 20));
    menu.addItem(MenuItem("Noodles", 2.5, 15));
    menu.addItem(MenuItem("Chicken Soup", 4.0, 10));
    menu.addItem(MenuItem("Spring Roll", 2.0, 25));

    int role;
    std::cout << "Select role:\n1. Customer\n2. Staff\nChoice: ";
    std::cin >> role;

    if(role == 1) {
        // Customer workflow
        Customer customer(1, "customer1", "pass123");
        customer.displayMenu(menu, orders);
    } 
    else if(role == 2) {
        // Staff workflow
        Staff staff(100, "staff1", "staffpass", "Manager", 1500.0);
        staff.displayMenu(menu, orders);
    } 
    else {
        std::cout << "Invalid selection!\n";
    }

    std::cout << "Exiting program...\n";
    return 0;
}

    
