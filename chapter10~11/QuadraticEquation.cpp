#include <iostream>
#include <cmath>
using namespace std;

void read_quadratic_equation(double &a, double &b, double &c) {
    cout << "Enter coefficients of the quadratic equation (a, b, c): ";
    cin >> a >> b >> c;
}

void find_roots(double a, double b, double c) {
    double discriminant = b*b - 4*a*c;
    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2*a);
        double root2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    } else if (discriminant == 0) {
        double root = -b / (2*a);
        cout << "Roots are real and same." << endl;
        cout << "Root = " << root << endl;
    } else {
        double realPart = -b / (2*a);
        double imaginaryPart = sqrt(-discriminant) / (2*a);
        cout << "Roots are complex and different." << endl;
        cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }
}

int main() {
    double a, b, c;
    read_quadratic_equation(a, b, c);
    find_roots(a, b, c);
    
    return 0;
}