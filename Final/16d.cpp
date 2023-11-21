#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Queue {
private:
    Node *front, *rear;

public:
    Queue() {
        front = rear = NULL;
    }

    void enqueue(int num) {
        Node* newNode = new Node;
        if (newNode == NULL) {
            cout << "큐가 가득 찼습니다." << endl;
            return;
        }
        newNode->data = num;
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
            cout << "큐가 비었습니다." << endl;
            return;
        }

        Node* temp = front;
        front = front->next;

        if (front == NULL) 
            rear = NULL;

        delete temp;
    }

    void display() {
        Node* ptr;
        if (front == NULL) {
            cout << "큐가 비었습니다." << endl;
            return;
        }
        ptr = front;
        while (ptr != NULL) {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
        cout << endl;
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();

    q.dequeue();
    q.display();

    return 0;
}
