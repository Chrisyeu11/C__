#include <iostream>
#include <string>
#include <algorithm>

std::string toBinary(int num) {
    return std::bitset<8>(num).to_string();
}

std::string toOctal(int num) {
    return std::bitset<12>(num).to_string();
}

std::string toHexadecimal(int num) {
    std::stringstream ss;
    ss << std::hex << num;
    std::string result = ss.str();
    return result;
}

int main() {
    int numbers[5];

    // Read 5 integer numbers
    for (int i = 0; i < 5; ++i) {
        std::cout << "Enter integer number " << i+1 << ": ";
        std::cin >> numbers[i];
    }

    // Convert to binary, octal, and hexadecimal
    for (int i = 0; i < 5; ++i) {
        std::cout << "Binary:     " << toBinary(numbers[i]) << std::endl;
        std::cout << "Octal:      " << toOctal(numbers[i]) << std::endl;
        std::cout << "Hexadecimal: " << toHexadecimal(numbers[i]) << std::endl;
    }

    return 0;
}