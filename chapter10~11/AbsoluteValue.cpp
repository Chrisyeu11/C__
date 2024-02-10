#include <iostream>

double findAbsoluteValue(double num) {
    return (num < 0) ? -num : num;
}

int main() {
    double input;
    std::cout << "Enter a real number: ";
    std::cin >> input;
    std::cout << "Absolute value: " << findAbsoluteValue(input) << std::endl;
    return 0;
}