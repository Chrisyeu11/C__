#include <iostream>
#include <string>

int main() {
    std::string name;
    char character;

    std::cout << "Enter your name: ";
    std::cin >> name;

    std::cout << "Enter a character: ";
    std::cin >> character;
    std::cout << "Hello, " << name << "! Your name is: " << name << std::endl;
    std::cout << "Hello, " << name << "! Your character is: " << character << std::endl;
    return 0;
}