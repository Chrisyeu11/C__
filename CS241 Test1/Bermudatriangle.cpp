#include <iostream>
using namespace std;

float calculateArea(float length, float width) {
	return (length * width)/2;
}

int main() {
	float length, width;
	cout << "Enter length of triangle: ";
	cin >> length;
	cout << "Enter width of triangle: ";
	cin >> width;

	float area = calculateArea(length, width);

	cout << "Length: " << length << endl;
	cout << "Width: " << width << endl;
	cout << "Area: " << area << endl;

	return 0;
}