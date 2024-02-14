#include <iostream>
#include <cmath>
using namespace std;

double evaluatePolynomial(int N, double coefficients[], double x) {
    double result = 0;
    for (int i = 0; i <= N; i++) {
        result += coefficients[i] * pow(x, i);
    }
    return result;
}

int main() {
    int N;
    cout << "Enter the degree of the polynomial: ";
    cin >> N;

    double coefficients[N + 1];
    cout << "Enter the coefficients of the polynomial:\n";
    for (int i = 0; i <= N; i++) {
        cin >> coefficients[i];
    }

    double x;
    cout << "Enter the value of x to evaluate the polynomial: ";
    cin >> x;

    double result = evaluatePolynomial(N, coefficients, x);
    cout << "Result of the polynomial evaluation: " << result << endl;

    return 0;
}