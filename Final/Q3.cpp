//write a c++ program to read a student name and ID and store them in object1. use copy constructor to store data in object1 into object2. use constructor to initialize each object
#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int id;

    // 생성자
    Student(string name, int id) {
        this->name = name;
        this->id = id;
    }

    // 복사 생성자
    Student(const Student &s) {
        name = s.name;
        id = s.id;
    }

    void display() {
        cout << "이름: " << name << ", ID: " << id << endl;
    }
};

int main() {
    string name;
    int id;
    cout << "학생의 이름과 ID를 입력하세요: ";
    cin >> name >> id;

    // object1을 생성하고 초기화
    Student object1(name, id);

    //  복사 생성자를 사용하여 object1의 데이터를 object2로 복사
    Student object2 = object1;

    // 각 객체의 데이터 출력
    cout << "Object1의 데이터: ";
    object1.display();
    cout << "Object2의 데이터: ";
    object2.display();

    return 0;
}
