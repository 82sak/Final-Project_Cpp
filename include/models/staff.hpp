#pragma once
#include <string>

class Staff {
private:
    int staffId;
    std::string staffName;

public:
    Staff(int id, const std::string& name);

    void displayMenu() const;
};
