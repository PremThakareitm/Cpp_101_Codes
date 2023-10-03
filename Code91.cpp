#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = 0; i < rows; i++) {
        // Print spaces before asterisks
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        // Print asterisks
        for (int k = 0; k < (2 * (rows - i)) - 1; k++) {
            cout << "*";
        }

        // Move to the next line
        cout << endl;
    }

    return 0;
}
