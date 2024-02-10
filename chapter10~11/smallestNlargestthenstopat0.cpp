#include <iostream>
#include <climits>

void findMinAndMax() {
    int num, min = INT_MAX, max = INT_MIN;
    std::cout << "Enter numbers: ";
    while (true) {
        std::cin >> num;
        if (num == 0) {
            break;
        }
        if (num < min) {
            min = num;
        }
        if (num > max) {
            max = num;
        }
    }
    std::cout << "Smallest number: " << min << std::endl;
    std::cout << "Largest number: " << max << std::endl;
}

int main() {
    findMinAndMax();
    return 0;
}