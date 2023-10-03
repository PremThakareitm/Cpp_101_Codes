// Calculate the sum of elements in the main diagonal of a 2D array.
#include <iostream>
using namespace std;

int main() {
    int r, c;

    do{
        cout << "Enter the number of rows: ";
        cin >> r;

        cout << "Enter the number of columns: ";
        cin >> c;
        if (r != c) 
        {
        cout << "The matrix must be square (rows should equal columns)." << endl;
        }
        
    }while(r!=c);

    int matrix[r][c];
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < r; i++) 
    {
        for (int j = 0; j < c; j++) 
        {
            cin >> matrix[i][j];
        }
    }

    int sum = 0;

    // Calculate the sum of main diagonal elements
    for (int i = 0; i < r; i++) 
    {
        sum += matrix[i][i];
    }

    cout << "Sum of main diagonal elements: " << sum << endl;

    return 0;
}