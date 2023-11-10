//write a c++ program to read a student's name, ID, and number of courses, store them in an object called student1. declare an object called student2. use copy constructor to copy the data of object. student1 into object student2. print the data of student2
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

    // Copy constructor
    Student(const Student &student) {
        name = student.name;
        id = student.id;
        numCourses = student.numCourses;
    }

    void readData() {
        cout << "Enter Student's Name: ";
        cin >> name;
        cout << "Enter ID: ";
        cin >> id;
        cout << "Number of Courses: ";
        cin >> numCourses;
    }

    void displayData() {
        cout << "Student's Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Number of Courses: " << numCourses << endl;
    }
};

int main() {
    Student student1; // Create student1 object
    student1.readData();
    student1.displayData();

    Student student2 = student1; // Use copy constructor to copy student1 to student2
    student2.displayData();

    return 0;
}
