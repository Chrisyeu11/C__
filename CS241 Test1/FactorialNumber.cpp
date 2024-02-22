#include <iostream>
using namespace std;

int calculateFactorial(int num) {
    if(num == 0 || num == 1) {
        return 1;
    } else {
        return num * calculateFactorial(num-1);
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int factorial = calculateFactorial(num);

    cout << "Number: " << num << endl;
    cout << "Factorial: " << factorial << endl;

    return 0;
}