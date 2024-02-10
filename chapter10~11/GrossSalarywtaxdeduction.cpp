#include <iostream>

double calculateGrossSalary(double hours, double rate) {
    double grossSalary = hours * rate;
    if (grossSalary > 1000 && grossSalary <= 2000) {
        return grossSalary * 0.7;
    } else if (grossSalary <= 1000) {
        return grossSalary * 0.85;
    } else {
        return grossSalary * 0.65;
    }
}

int main() {
    int numberOfEmployees;
    std::cout << "Enter the number of employees: ";
    std::cin >> numberOfEmployees;

    for (int i = 0; i < numberOfEmployees; i++) {
        double hours, rate;
        std::cout << "Enter the hours and rate for employee " << i + 1 << ": ";
        std::cin >> hours >> rate;
        double grossSalary = calculateGrossSalary(hours, rate);
        std::cout << "Information for employee " << i + 1 << ":\n";
        std::cout << "Gross Salary: " << grossSalary << std::endl;
    }
    return 0;
}