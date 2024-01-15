#include <iostream>
using namespace std;
double calculatePower(double base, int exponent) {
    if (exponent < 0) {
        cerr << "Exponent should be a non-negative integer." << endl;
        return -1;  // Return -1 to indicate an error
    }

    double result = 1.0;

    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    return result;
}

int main() {
    double base;
    int exponent;

    cout << "Enter the base: ";
    cin >> base;

    cout << "Enter the exponent (a non-negative integer): ";
    cin >> exponent;

    double result = calculatePower(base, exponent);

    if (result != -1) {
        cout << base << " raised to the power " << exponent << " is: " << result <<endl;
    }

    return 0;
}
