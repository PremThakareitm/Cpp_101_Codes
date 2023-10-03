//Define a program to calculate the power of a number using recursion.

#include <iostream>
using namespace std;

// Function to calculate the power of a number using recursion
double power(double base, int exponent) {
    if (exponent == 0) {
        return 1.0; // Anything raised to the power of 0 is 1
    } else if (exponent < 0) {
        // If the exponent is negative, calculate the reciprocal of the base
        return 1.0 / (base * power(base, -exponent - 1));
    } else {
        // If the exponent is positive, recursively calculate the power
        return base * power(base, exponent - 1);
    }
}

int main() {
    double base;
    int exponent;

    cout << "Enter the base: ";
    cin >> base;

    cout << "Enter the exponent: ";
    cin >> exponent;

    double result = power(base, exponent);

    cout << base << " raised to the power " << exponent << " is: " << result << endl;

    return 0;
}
