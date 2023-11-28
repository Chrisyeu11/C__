//write a c++ program to read 2 numbers and divides the 1st number by the 2nd, thus implement using class exception
#include <iostream>
#include <exception>

// Exception class
class DivisionByZeroException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Error: Division by zero is not allowed.";
    }
};

// Function to perform division
double divide(double num1, double num2) {
    if (num2 == 0) {
        throw DivisionByZeroException();
    }
    return num1 / num2;
}

int main() {
    double num1, num2;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    try {
        double result = divide(num1, num2);
        std::cout << "The result is: " << result << std::endl;
    } catch (const DivisionByZeroException& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
