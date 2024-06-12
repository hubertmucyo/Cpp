//multiply of the matrix
#include<iostream>
using namespace std;

int main(){
    int r1, c1, r2, c2;
    cout << "Enter number of rows of the first matrix:\n";
    cin >> r1;
    cout << "Enter number of columns of first matrix:\n";
    cin >> c1;
    cout << "Enter number of rows of the second matrix:\n";
    cin >> r2;
    cout << "Enter number of columns of second matrix:\n";
    cin >> c2;

    if (c1 != r2) {
        cout << "Matrix multiplication is not possible. Number of columns of first matrix must be equal to number of rows of second matrix.\n";
        return 0;
    }

    int mat1[r1][c1], mat2[r2][c2], mult[r1][c2];

    cout << "Enter values of the first matrix:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cin >> mat1[i][j];
        }
    }

    cout << "Enter values of the second matrix:\n";
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cin >> mat2[i][j];
        }
    }

    // Initialize the product matrix to zero
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            mult[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) { // or k < r2 since c1 == r2
                mult[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    cout << "The first matrix is:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cout << mat1[i][j] << " ";
        }
        cout << endl;
    }

    cout << "The second matrix is:\n";
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cout << mat2[i][j] << " ";
        }
        cout << endl;
    }

    cout << "The multiplication result is:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << mult[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

