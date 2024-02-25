    #include<iostream>
    using namespace std;

    int main() {
        int matrix1[4][4], matrix2[4][4], sum[4][4], transpose[4][4];

        // Read input for matrix1
        cout << "Enter elements of first 4x4 matrix: ";
        for(int i = 0; i < 4; i++) {
            for(int j = 0; j < 4; j++) {
                cin >> matrix1[i][j];
            }
        }

        // Read input for matrix2
        cout << "Enter elements of second 4x4 matrix: ";
        for(int i = 0; i < 4; i++) {
            for(int j = 0; j < 4; j++) {
                cin >> matrix2[i][j];
            }
        }

        // Add the two matrices
        for(int i = 0; i < 4; i++) {
            for(int j = 0; j < 4; j++) {
                sum[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }

        // Find transpose of the sum matrix
        for(int i = 0; i < 4; i++) {
            for(int j = 0; j < 4; j++) {
                transpose[j][i] = sum[i][j];
            }
        }

        // Print transpose matrix
        cout << "Transpose of the sum matrix: " << endl;
        for(int i = 0; i < 4; i++) {
            for(int j = 0; j < 4; j++) {
                cout << transpose[i][j] << " ";
            }
            cout << endl;
        }

        return 0;
    }