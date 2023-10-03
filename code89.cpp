// "Create a C++ program to print the following pattern:

// 1
// 212
// 32123
// 4321234"

#include <iostream>
using namespace std;
int main() {
    int rows;

    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; ++i) {
        // Print spaces
        for (int j = 1; j <= rows - i; ++j) {
            cout << " ";
        }

        // Print increasing numbers
        for (int j = i; j >= 1; --j) {
            cout << j;
        }

        // Print decreasing numbers
        for (int j = 2; j <= i; ++j) {
            cout << j;
        }

        cout << "\n";
    }

    return 0;
}