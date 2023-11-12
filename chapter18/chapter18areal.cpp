//write a c++ program to read a name, a real number, and a integer number. Display all of them. use overloaded functions
#include<iostream>
#include<string>
using namespace std;

// Overloaded function to display string
void display(string str) {
    cout << "입력하신 이름은 " << str << "입니다." << endl;
}

// Overloaded function to display float
void display(float num) {
    cout << "입력하신 실수는 " << num << "입니다." << endl;
}

// Overloaded function to display integer
void display(int num) {
    cout << "입력하신 정수는 " << num << "입니다." << endl;
}

int main() {
    string name;
    float realNum;
    int intNum;

    cout << "이름을 입력하세요: ";
    cin >> name;
    display(name);

    cout << "실수를 입력하세요: ";
    cin >> realNum;
    display(realNum);

    cout << "정수를 입력하세요: ";
    cin >> intNum;
    display(intNum);

    return 0;
}
