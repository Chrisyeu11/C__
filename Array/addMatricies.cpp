#include <iostream>
using namespace std;

const int N = 3;
const int M = 3;

void readMatrix(int matrix[N][M]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> matrix[i][j];
        }
    }
}

void addMatrices(int matrix1[N][M], int matrix2[N][M], int result[N][M]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

int main() {
    int matrix1[N][M], matrix2[N][M], result[N][M];
    
    cout << "Enter elements of the first matrix:" << endl;
    readMatrix(matrix1);

    cout << "Enter elements of the second matrix:" << endl;
    readMatrix(matrix2);

    addMatrices(matrix1, matrix2, result);

    cout << "Resultant Matrix:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}