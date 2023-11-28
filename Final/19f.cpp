//write a c++ program to implementing abstract base class using toyota as base with 2 children, corolla and avalon



#include <iostream>

// Abstract base class
class Toyota {
public:
    // Pure virtual function
    virtual void displayModel() const = 0;
};

// Derived class
class Corolla : public Toyota {
public:
    // Implementation of pure virtual function
    void displayModel() const override {
        std::cout << "This is a Toyota Corolla." << std::endl;
    }
};

// Derived class
class Avalon : public Toyota {
public:
    // Implementation of pure virtual function
    void displayModel() const override {
        std::cout << "This is a Toyota Avalon." << std::endl;
    }
};

int main() {
    // Toyota myCar;  // Error: Cannot declare variable 'myCar' to be of abstract type 'Toyota'

    Corolla myCorolla;
    myCorolla.displayModel();  // This is a Toyota Corolla.

    Avalon myAvalon;
    myAvalon.displayModel();  // This is a Toyota Avalon.

    return 0;
}
