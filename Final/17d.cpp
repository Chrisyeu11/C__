//write a c++ program to read a student's name, ID, and number of courses; store them in an object called student1. declare an object called student2. use copy constructor to copy the data of object student1 into object student2.
#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    string ID;
    int numOfCourses;

    // Default constructor
    Student() {
        name = "";
        ID = "";
        numOfCourses = 0;
    }

    // Parameterized constructor
    Student(string n, string i, int num) {
        name = n;
        ID = i;
        numOfCourses = num;
    }

    // Copy constructor
    Student(const Student &s) {
        name = s.name;
        ID = s.ID;
        numOfCourses = s.numOfCourses;
    }

    void display() {
        cout << "이름: " << name << endl;
        cout << "ID: " << ID << endl;
        cout << "과목 수: " << numOfCourses << endl;
    }
};

int main() {
    string name;
    string ID;
    int numOfCourses;

    cout << "학생의 이름을 입력하세요: ";
    getline(cin, name);

    cout << "학생의 ID를 입력하세요: ";
    getline(cin, ID);

    cout << "과목 수를 입력하세요: ";
    cin >> numOfCourses;

    Student student1(name, ID, numOfCourses);

    Student student2 = student1; // Using copy constructor

    cout << "\n학생 1의 정보:" << endl;
    student1.display();

    cout << "\n학생 2의 정보:" << endl;
    student2.display();

    return 0;
}
