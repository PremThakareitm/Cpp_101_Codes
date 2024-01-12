#include <iostream>
using namespace std;
int main() {
    int n = 5;  // Number of rows

    for (int i = 0; i < n; i++) {
        char ch = 'A' + n - 1 - i;

        for (int j = 0; j <= i; j++) {
            cout << ch++;
        }

        cout << endl;
    }

    return 0;
}
