#include <iostream>
using namespace std;
void printMultiplicationTable(int num) {
    cout << "Multiplication table for " << num << ":\n";
    for (int i = 1; i <= 10; i++) {
        cout << num << " * " << i << " = " << (num * i) << "\n";
    }
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    printMultiplicationTable(number);

    return 0;
}
