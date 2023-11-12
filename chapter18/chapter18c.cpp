//implementation of overloaded operator using two-dimensional array
#include <iostream>
using namespace std;

class Matrix {
private:
    int arr[2][2];

public:
    void readData() {
        cout << "행렬의 원소를 입력하세요: ";
        for (int i=0; i<2; i++)
            for (int j=0; j<2; j++)
                cin >> arr[i][j];
    }

    void displayData() {
        for (int i=0; i<2; i++) {
            for (int j=0; j<2; j++)
                cout << arr[i][j] << " ";
            cout << endl;
        }
    }

    Matrix operator+(Matrix m2) {
        Matrix m3;
        for (int i=0; i<2; i++)
            for (int j=0; j<2; j++)
                m3.arr[i][j] = arr[i][j] + m2.arr[i][j];
        return m3;
    }
};

int main() {
    Matrix m1, m2, m3;

    m1.readData();
    m2.readData();

    m3 = m1 + m2;

    m3.displayData();

    return 0;
}
