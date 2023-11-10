//write a c++ program to read a student's name, ID, and number of courses he/she is taking. use default constructor
#include<iostream>
#include<string>
using namespace std;

class Student {
private:
    string name;
    int id;
    int numCourses;

public:
    // Default constructor
    Student() {
        name = "";
        id = 0;
        numCourses = 0;
    }

    void readData() {
        cout << "Enter student's name: ";
        getline(cin, name);
        cout << "Enter ID: ";
        cin >> id;
        cout << "enter number of courses: ";
        cin >> numCourses;
    }

    void displayData() {
        cout << "student's name is : " << name << endl;
        cout << "ID: " << id << endl;
        cout << "number of courses: " << numCourses << endl;
    }
};

int main() {
    Student student;
    student.readData();
    student.displayData();

    return 0;
}
