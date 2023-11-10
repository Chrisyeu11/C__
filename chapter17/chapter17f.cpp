#include<iostream>
using namespace std;

class Matrix {
public:
    int mat[3][3];

    void getMatrix() {
        cout << "Enter elements: ";
        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++)
                cin >> mat[i][j];
    }

    void displayMatrix() {
        for(int i=0; i<3; i++) {
            for(int j=0; j<3; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }

    Matrix operator + (Matrix m2) {
        Matrix m3;
        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++)
                m3.mat[i][j] = mat[i][j] + m2.mat[i][j];
        return m3;
    }

    Matrix operator * (Matrix m2) {
        Matrix m3;
        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++) {
                m3.mat[i][j] = 0;
                for(int k=0; k<3; k++)
                    m3.mat[i][j] += mat[i][k] * m2.mat[k][j];
            }
        return m3;
    }
};

int main() {
    Matrix m1, m2, m3, m4;
    cout << "Enter elements for first matrix:\n";
    m1.getMatrix();
    cout << "Enter elements for second matrix:\n";
    m2.getMatrix();

    m3 = m1 + m2;
    m4 = m1 * m2;

    cout << "\nFirst Matrix:\n";
    m1.displayMatrix();
    cout << "\nSecond Matrix:\n";
    m2.displayMatrix();
    cout << "\nSum of Matrices:\n";
    m3.displayMatrix();
    cout << "\nProduct of Matrices:\n";
    m4.displayMatrix();

    return 0;
}
