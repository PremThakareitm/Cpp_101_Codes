// Implement a program to find the GCD of two numbers using a for loop.

#include <iostream>

using namespace std;

// function to find the GCD of a given 2 numbers
int gcd(int x, int y) {
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}

int main() {

    // input 2 numbers for which we need to find GCD
    int num1, num2;

    cout << "Enter the 1st number: ";
    cin >> num1;

    cout << "Enter the 2nd number: ";
    cin >> num2;

    // displaying the GCD of a given 2 numbers
    cout << "The GCD of " << num1 << " and " << num2 << " is: " << gcd(num1, num2) << endl;

    return 0;
}