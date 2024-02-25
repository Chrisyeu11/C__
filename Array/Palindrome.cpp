#include <iostream>
#include <string>
#include <algorithm>

bool isPalindrome(const std::string& str) {
    std::string reversed = str;
    std::reverse(reversed.begin(), reversed.end());
    return str == reversed;
}

int main() {
    std::string strings[10];

    // Read 10 strings
    for (int i = 0; i < 10; ++i) {
        std::cout << "Enter string " << i+1 << ": ";
        std::cin >> strings[i];
    }

    // Find palindromes
    for (int i = 0; i < 10; ++i) {
        if (isPalindrome(strings[i])) {
            std::cout << strings[i] << " is a palindrome." << std::endl;
        }
    }

    return 0;
}