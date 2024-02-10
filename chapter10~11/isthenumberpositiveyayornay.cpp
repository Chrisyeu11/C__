#include <iostream>

bool isPositive(double num) {
    return num >= 0;
}

int main() {
    double input;
    std::cout << "Enter a real number: ";
    std::cin >> input;
    std::cout << "Is positive: " << std::boolalpha << isPositive(input) << std::endl;
    return 0;
}