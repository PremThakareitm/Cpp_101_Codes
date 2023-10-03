#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of rows: ";
    cin >> n;

    // Print the upper half of the pattern
    for (int i = 1; i <= n; i++) {
        // Print spaces before numbers
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Print numbers in increasing order
        for (int k = i; k <= 2 * i - 1; k++) {
            cout << k;
        }

        // Print numbers in decreasing order (excluding the last number)
        for (int l = 2 * i - 2; l >= i; l--) {
            cout << l;
        }

        // Move to the next line
        cout << endl;
    }

    // Print the lower half of the pattern
    for (int i = n - 1; i >= 1; i--) {
        // Print spaces before numbers
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Print numbers in increasing order
        for (int k = i; k <= 2 * i - 1; k++) {
            cout << k;
        }

        // Print numbers in decreasing order (excluding the last number)
        for (int l = 2 * i - 2; l >= i; l--) {
            cout << l;
        }

        // Move to the next line
        cout << endl;
    }

    return 0;
}
