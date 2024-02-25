
    #include<iostream>
    using namespace std;

    void calculateGrossSalary(string names[], int hours[], int rates[], int grossSalaries[], int n) {
        for (int i = 0; i < n; i++) {
            grossSalaries[i] = hours[i] * rates[i];
        }
    }

    void displayEmployeeDetails(string names[], int hours[], int rates[], int grossSalaries[], int n) {
        cout << "Name\tWeekly Hours\tRate/hr\tGross Salary" << endl;
        for (int i = 0; i < n; i++) {
            cout << names[i] << "\t" << hours[i] << "\t\t" << rates[i] << "\t$" << grossSalaries[i] << endl;
        }
    }

    int main() {
        string names[15];
        int weeklyHours[15];
        int ratePerHour[15];
        int grossSalaries[15];

        // Reading data for 15 employees
        cout << "Enter details for 15 employees:" << endl;
        for (int i = 0; i < 15; i++) {
            cout << "Employee " << i + 1 << ":" << endl;
            cout << "Name: ";
            cin >> names[i];
            cout << "Weekly Hours: ";
            cin >> weeklyHours[i];
            cout << "Rate per hour: ";
            cin >> ratePerHour[i];
        }

        calculateGrossSalary(names, weeklyHours, ratePerHour, grossSalaries, 15);

        // Displaying details
        displayEmployeeDetails(names, weeklyHours, ratePerHour, grossSalaries, 15);

        return 0;
    }