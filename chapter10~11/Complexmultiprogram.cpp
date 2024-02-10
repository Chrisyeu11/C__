#include <iostream>
using namespace std;

bool acceptData(int num) {
    return (num >= 0);
}

int getAbsoluteValue(int num) {
    return (num >= 0) ? num : -num;
}

void displayInput(int num) {
    cout << "The input value is: " << num << endl;
}

int main() {
    int data;
    cout << "Enter a number: ";
    cin >> data;
    if (acceptData(data)) {
        int absoluteValue = getAbsoluteValue(data);
        displayInput(absoluteValue);
    } else {
        cout << "Invalid input" << endl;
    }
    return 0;
}