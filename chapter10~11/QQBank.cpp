#include <iostream>
#include <string>
using namespace std;

class BankCustomer {
private:
    string name;
    double checkingBalance;
    double savingBalance;

public:
    BankCustomer(string n, double cb, double sb) {
        name = n;
        checkingBalance = cb;
        savingBalance = sb;
    }

    void deposit(double amount, string account) {
        if (account == "checking") {
            checkingBalance += amount;
        } else if (account == "saving") {
            savingBalance += amount;
        }
    }

    void withdraw(double amount, string account) {
        if (account == "checking") {
            if (checkingBalance - amount < 0) {
                checkingBalance -= (amount + 25); // Apply overdraft charge
            } else {
                checkingBalance -= amount;
            }
        } else if (account == "saving") {
            if (savingBalance - amount < 0) {
                savingBalance -= (amount + 25); // Apply overdraft charge
            } else {
                savingBalance -= amount;
            }
        }
    }
};

int main() {
    BankCustomer customers[10] = {
        BankCustomer("Customer 1", 1000, 1500),
        BankCustomer("Customer 2", 2000, 2500),
        BankCustomer("Customer 3", 3000, 3500),
        BankCustomer("Customer 4", 4000, 4500),
        BankCustomer("Customer 5", 5000, 5500),
        BankCustomer("Customer 6", 6000, 6500),
        BankCustomer("Customer 7", 7000, 7500),
        BankCustomer("Customer 8", 8000, 8500),
        BankCustomer("Customer 9", 9000, 9500),
        BankCustomer("Customer 10", 10000, 10500)
    };

    // Read input and perform transactions
    // Add your code here

    return 0;
}