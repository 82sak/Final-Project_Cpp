#include "ui/homepage.hpp"
#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

#define RED    "\033[31m"
#define GREEN  "\033[32m"
#define BLUE   "\033[34m"
#define RESET  "\033[0m"
#define YELLOW "\033[33m"

void homePage(){

    cout << GREEN << "WELCOME TO SERVE ENGINE\n" << RESET;
    cout << BLUE << "1. Admin Panel\n" << RESET;
    cout << BLUE << "2. Staff Panel\n" << RESET;
    cout << BLUE << "3. Menu\n" << RESET;
    cout << RED  << "0. Exit\n" << RESET;
}

void typeWrite(string text) {
    for (char c : text) {
        cout << YELLOW << c << flush;
        this_thread::sleep_for(chrono::milliseconds(50));
    }
    system("cls");
}





