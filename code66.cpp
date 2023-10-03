// Create a program to find the largest element in each row of a matrix.
#include <iostream>
using namespace std;

int main() {
    // Define the dimensions of the matrix
    int r, c;
    cout << "Enter the number of rows: ";
    cin >> r;
    cout << "Enter the number of columns: ";
    cin >> c;

    // Declare a 2D matrix
    int matrix[r][c];

    // Input the matrix elements
    cout << "Enter the elements of the matrix: " << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> matrix[i][j];
        }
    }

    // Find the largest element in each row
    for (int i = 0; i < r; i++) {
        int maxElement = matrix[i][0];  // Assume the first element in the row is the maximum
        for (int j = 1; j < c; j++) {
            if (matrix[i][j] > maxElement) {
                maxElement = matrix[i][j];
            }
        }
        cout << "The largest element in row " << (i + 1) << " is: " << maxElement << endl;
    }

    return 0;
}
