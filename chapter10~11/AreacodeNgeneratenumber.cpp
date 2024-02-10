#include <iostream>
#include <cstdlib>
#include <ctime>

int generateRandomNumber(int areaCode) {
    srand(time(0));
    return rand() % 20;
}

int main() {
    int areaCode;
    std::cout << "Enter the area code: ";
    std::cin >> areaCode;
    std::cout << "Generated number: " << generateRandomNumber(areaCode) << std::endl;

    return 0;
}