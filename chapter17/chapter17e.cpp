//To illustrate destructor, this program reads a student's name, ID, number of courses
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

    // Destructor
    ~Student() {
        cout << "Destructor is called for student: " << name << endl;
    }

    void readData() {
        cout << "Enter Student's Name: ";
        cin >> name;
        cout << "Enter ID: ";
        cin >> id;
        cout << "number of courses: ";
        cin >> numCourses;
    }

    void displayData() {
        cout << "Student's name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "number of courses: " << numCourses << endl;
    }
};

int main() {
    Student student; // Create student object
    student.readData();
    student.displayData();

    return 0;
}
