//write a c++ program to read 20 students name and ID and store them in a stack implementing linked list using pointers
#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int id;
    Student* next;
};

Student* top = NULL;

void push(string name, int id) {
    Student* newNode = new Student();
    newNode->name = name;
    newNode->id = id;
    newNode->next = top;
    top = newNode;
}

void pop() {
    if (top == NULL) {
        cout << "스택이 비어있습니다.\n";
        return;
    }
    Student* tempNode = top;
    top = top->next;
    delete tempNode;
}

void display() {
    if (top == NULL) {
        cout << "스택이 비어있습니다.\n";
        return;
    }
    Student* tempNode = top;
    while (tempNode != NULL) {
        cout << "이름: " << tempNode->name << ", ID: " << tempNode->id << "\n";
        tempNode = tempNode->next;
    }
}

int main() {
    for (int i = 0; i < 20; i++) {
        string name;
        int id;
        cout << "학생의 이름과 ID를 입력하세요: ";
        cin >> name >> id;
        push(name, id);
    }
    cout << "스택에 저장된 학생 정보는 다음과 같습니다.\n";
    display();
    return 0;
}
