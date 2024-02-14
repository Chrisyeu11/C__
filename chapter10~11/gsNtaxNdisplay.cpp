#include <iostream>
#include <string>
using namespace std;

double calculateGrossSalary(double hours, double rate) {
    return hours * rate;
}

double calculateTax(double grossSalary) {
    if (grossSalary <= 1150) {
        return 0.14 * grossSalary;
    } else if (grossSalary > 1150 && grossSalary <= 2550) {
        return 0.28 * grossSalary;
    } else {
        return 0.33 * grossSalary;
    }
}

void displayEmployeeInfo(string name, int ID, double hours, double rate) {
    double grossSalary = calculateGrossSalary(hours, rate);
    double tax = calculateTax(grossSalary);

    cout << "Name: " << name << endl;
    cout << "ID: " << ID << endl;
    cout << "Gross Salary: $" << grossSalary << endl;
    cout << "Tax: $" << tax << endl;
}

int main() {
    int N;
    cout << "Enter the number of employees: ";
    cin >> N;

    string name;
    int ID;
    double hours;
    double rate;

    for (int i = 0; i < N; i++) {
        cout << "Enter employee's name: ";
        cin >> name;
        cout << "Enter employee's ID: ";
        cin >> ID;
        cout << "Enter employee's weekly hours and rate per hour: ";
        cin >> hours >> rate;

        displayEmployeeInfo(name, ID, hours, rate);
    }

    return 0;
}