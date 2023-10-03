#include <iostream>
using namespace std;
int reverseNumber(int num) {
    int reversedNumber = 0;

    while (num != 0) {
        int remainder = num % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        num /= 10;
    }

    return reversedNumber;
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    int reversedNumber = reverseNumber(number);

    cout << "Reversed number: " << reversedNumber << endl;

    return 0;
}
