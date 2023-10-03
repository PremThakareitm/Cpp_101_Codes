// Create a program to check if a number is Armstrong using a while loop.

#include <iostream>
using namespace std;

// main function
int main() {

    // input a number and initializing variables
    int num, tempNum, remainder, digits = 0, result = 0, tempDigits = 0;

    cout << "Enter an integer: ";
    cin >> num;

    tempNum = num;

    // couting the digits of a number
    while (tempNum != 0) {
        tempNum /= 10;
        digits++;
    }

    tempNum = num;

    cout << endl << "since, " << endl;

    // calculating the result of a number
    while (tempNum != 0) {
        remainder = tempNum % 10;
        if (tempDigits < 2) {
            cout << remainder << "^" << digits <<" + ";
        } else {
            cout << remainder << "^" << digits << " ";
        }
        result += pow(remainder, digits);
        tempNum /= 10;
        tempDigits++;
    }

    // checking weather a given number is Armstrong number or not
    if (result == num) {

        cout << "= " << num << endl;
        cout << num << " is an Armstrong number." << endl;
    } else {

        cout << "!= " << num << endl;
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}