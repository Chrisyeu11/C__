#include <iostream>
#include <string>

void readMatrix(int matrix[][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            std::cin >> matrix[i][j];
        }
    }
}

void displayMatrix(int matrix[][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int matrixA[4][4];
    int matrixB[4][4];

    std::cout << "Enter elements for matrix A:" << std::endl;
    readMatrix(matrixA);

    std::cout << "Enter elements for matrix B:" << std::endl;
    readMatrix(matrixB);

    std::cout << "Matrix A is:" << std::endl;
    displayMatrix(matrixA);

    std::cout << "Matrix B is:" << std::endl;
    displayMatrix(matrixB);

    return 0;
}