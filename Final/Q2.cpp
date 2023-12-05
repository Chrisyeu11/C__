//write c++ program to read 20 students name and id and store them in a queue implementing linked list using pointers
#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int id;
    Student* next;
};

Student* front = NULL;
Student* rear = NULL;

void enqueue(string name, int id) {
    Student* newNode = new Student();
    newNode->name = name;
    newNode->id = id;
    newNode->next = NULL;
    if (rear == NULL) {
        front = rear = newNode;
        return;
    }
    rear->next = newNode;
    rear = newNode;
}

void dequeue() {
    if (front == NULL) {
        return;
    }
    Student* tempNode = front;
    front = front->next;
    if (front == NULL) {
        rear = NULL;
    }
    delete tempNode;
}

void display() {
    if (front == NULL) {
        cout << "큐가 비어 있습니다." << endl;
        return;
    }
    Student* tempNode = front;
    while (tempNode != NULL) {
        cout << "이름: " << tempNode->name << ", ID: " << tempNode->id << endl;
        tempNode = tempNode->next;
    }
}

int main() {
    for (int i = 0; i < 20; i++) {
        string name;
        int id;
        cout << "학생의 이름과 ID를 입력하세요: ";
        cin >> name >> id;
        enqueue(name, id);
    }
    cout << "큐에 저장된 학생 정보는 다음과 같습니다:" << endl;
    display();
    return 0;
}
