#pragma once
#include <string>

class Customer {
private:
    int customerId;
    std::string customerName;

public:
    Customer(int id, const std::string& name);

    void displayMenu() const;
};
