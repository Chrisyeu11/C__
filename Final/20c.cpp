//write a c++ program uses template and uses one function to read and one function to display, as opposed to 3 function to read and 3 functions to display.

#include <iostream>

// Template function to read data
template <typename T>
void readData(T& data) {
    std::cout << "Enter data: ";
    std::cin >> data;
}

// Template function to display data
template <typename T>
void displayData(const T& data) {
    std::cout << "Data: " << data << std::endl;
}

int main() {
    int intData;
    double doubleData;
    std::string stringData;

    readData(intData);
    displayData(intData);

    readData(doubleData);
    displayData(doubleData);

    readData(stringData);
    displayData(stringData);

    return 0;
}
