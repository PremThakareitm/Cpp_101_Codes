#include <iostream>
using namespace std;

int main() {
    int n;
    int currentNumber = 1;

    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << currentNumber << " ";
            currentNumber++;
        }
        cout << endl;
    }

    return 0;
}
