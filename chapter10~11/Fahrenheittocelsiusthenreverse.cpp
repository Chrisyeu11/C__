#include <iostream>

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    double fahrenheit, celsius;
    std::cout << "Enter today's temperature in Fahrenheit: ";
    std::cin >> fahrenheit;
    std::cout << "Temperature in Celsius: " << fahrenheitToCelsius(fahrenheit) << std::endl;

    std::cout << "Enter today's temperature in Celsius: ";
    std::cin >> celsius;
    std::cout << "Temperature in Fahrenheit: " << celsiusToFahrenheit(celsius) << std::endl;

    return 0;
}