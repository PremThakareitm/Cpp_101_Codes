// Create a program to find the transpose of a matrix.

#include <iostream>
using namespace std;

// main function
int main() {
    // input rows, columns, elements of the matrix from the user
    int rows, cols;

    cout << "Enter the number of rows in the matrix: ";
    cin >> rows;

    cout << "Enter the number of columns in the matrix: ";
    cin >> cols;

    int matrix[rows][cols], transpose[cols][rows];

    cout << "Enter the elements of the matrix " <<  endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter " << i+1 << "th row & " << j+1 << "th column element: ";
            cin >> matrix[i][j];
        }
    }

    // calculating and diplaying the transponse of the matrix
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            transpose[j][i] = matrix[i][j];
        }
    }

    cout << "Transpose of the matrix:" <<  endl;

    for (int i = 0; i < cols; ++i) {
        cout << "| ";
        for (int j = 0; j < rows; ++j) {
            if (j < rows - 1) {
                cout << transpose[i][j] << ", ";
            } else {
                cout << transpose[i][j] << " |" << endl;
            }
        }
    }

    return 0;
}