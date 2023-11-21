//implementation of overloaded operator+ using 2 dimensional array
#include <iostream>
using namespace std;

class Matrix {
private:
    int arr[2][2];

public:
    void set_data() {
        cout << "행렬의 원소를 입력하세요: ";
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                cin >> arr[i][j];
    }

    void display() {
        cout << "행렬: \n";
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++)
                cout << arr[i][j] << " ";
            cout << "\n";
        }
    }

    Matrix operator+(Matrix m2) {
        Matrix m3;
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                m3.arr[i][j] = this->arr[i][j] + m2.arr[i][j];
        return m3;
    }
};

int main() {
    Matrix m1, m2, m3;
    m1.set_data();
    m2.set_data();

    m3 = m1 + m2;

    m3.display();

    return 0;
}
