#include <iostream>
#include <cmath>

double x1, y1, x2, y2;
double m, c;

void read_coordinate_of_each_point() {
    std::cout << "Enter the coordinates of the first point (x1 y1): ";
    std::cin >> x1 >> y1;
    
    std::cout << "Enter the coordinates of the second point (x2 y2): ";
    std::cin >> x2 >> y2;
}

void find_slope() {
    m = (y2 - y1) / (x2 - x1);
}

void display_equation() {
    c = y1 - m * x1;
    std::cout << "Equation of the line: y = " << m << "x + " << c << std::endl;
}

void display_roots() {
    double root = -c / m;
    std::cout << "Root of the equation: " << root << std::endl;
}

int main() {
    read_coordinate_of_each_point();
    find_slope();
    display_equation();
    display_roots();

    return 0;
}