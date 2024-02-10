#include <iostream>
using namespace std;

bool isMachineOn(bool isOn) {
    return isOn;
}

void displayMenu() {
    cout << "1. Coke - $1.50" << endl;
    cout << "2. Pepsi - $1.50" << endl;
    cout << "3. Snickers - $1.00" << endl;
}

void purchaseItem(int option) {
    switch(option) {
        case 1:
        case 2:
            cout << "Please insert $1.50 to get your drink" << endl;
            break;
        case 3:
            cout << "Please insert $1.00 to get your Snickers" << endl;
            break;
        default:
            cout << "Invalid option" << endl;
    }
}

int main() {
    bool machineStatus = true;
    if (isMachineOn(machineStatus)) {
        int choice;
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;
        purchaseItem(choice);
    } else {
        cout << "The vending machine is currently off" << endl;
    }

    return 0;
}
