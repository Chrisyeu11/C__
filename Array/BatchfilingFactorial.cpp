#include <iostream>
#include <fstream>
#include <array>
#include <cmath>

int main() {
    std::ifstream inputFile("batchfile.txt");
    int outOfRangeCount = 0;

    if (inputFile.is_open()) {
        std::array<int, 50> numbers;

        for (int i = 0; i < 50; ++i) {
            inputFile >> numbers[i];

            if (numbers[i] > 4 && numbers[i] < 11) {
                int factorial = 1;
                for (int j = 1; j <= numbers[i]; ++j) {
                    factorial *= j;
                }
                std::cout << "Factorial of " << numbers[i] << " is: " << factorial << std::endl;
            } else {
                outOfRangeCount++;
            }
        }

        std::cout << "Numbers out of range: " << outOfRangeCount << std::endl;

        inputFile.close();
    } else {
        std::cout << "Error opening file." << std::endl;
    }

    return 0;
}