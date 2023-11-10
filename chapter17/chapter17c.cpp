//write a c++ program to read a student's name, ID, and number of courses. Use overloaded constructor with one default parameter
#include<iostream>
#include<string>
using namespace std;

class Student {
private:
    string name;
    int id;
    int numCourses;

public:
    // Overloaded constructor with one default parameter 
    Student(string name = "", int id = 0, int numCourses = 0) {
        this->name = name;
        this->id = id;
        this->numCourses = numCourses;
    }

    void readData() {
        cout << "Enter student's name: ";
        cin >> name;
        cout << "Enter ID: ";
        cin >> id;
        cout << "Number of courses: ";
        cin >> numCourses;
    }

    void displayData() {
        cout << "Student's name is: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "number of courses: " << numCourses << endl;
    }
};

int main() {
    Student student; // Create student object with default values
    student.readData();
    student.displayData();

    return 0;
}

