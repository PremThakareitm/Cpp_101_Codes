#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Print spaces before numbers
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Print numbers in increasing order
        for (int k = 1; k <= i; k++) {
            cout << k;
        }

        // Print numbers in decreasing order (excluding 1)
        for (int l = i - 1; l >= 1; l--) {
            cout << l;
        }

        // Move to the next line
        cout << endl;
    }

    return 0;
}
