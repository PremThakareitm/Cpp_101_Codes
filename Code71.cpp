//Write a C++ program to find the HCF (Highest Common Factor) of two numbers using recursion.

#include <iostream>
using namespace std;

// Function to calculate the HCF of two numbers using recursion
int hcf(int num1, int num2) {
    if (num2 != 0) {
        return hcf(num2, num1 % num2);
    }
    return num1;
}

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    int result = hcf(num1, num2);

    cout << "HCF of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}
