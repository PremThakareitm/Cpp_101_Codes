#include <iostream>
using namespace std;
bool isDivisibleBy5And11(int num) {
    return (num % 5 == 0) && (num % 11 == 0);
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (isDivisibleBy5And11(number)) {
        cout << number << " is divisible by both 5 and 11." << endl;
    } else {
        cout << number << " is not divisible by both 5 and 11." << endl;
    }

    return 0;
}
