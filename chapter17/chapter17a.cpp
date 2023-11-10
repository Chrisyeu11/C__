//write a c++ program to read an ID and display it. use class
#include<iostream>
using namespace std;

class Person {
private:
    int id;

public:
    void readID() {
        cout << "Enter ID: ";
        cin >> id;
    }

    void displayID() {
        cout << "ID is " << id << endl;
    }
};

int main() {
    Person person;
    person.readID();
    person.displayID();

    return 0;
}