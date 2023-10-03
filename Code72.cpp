//Implement a program to find the sum of natural numbers using recursion.

#include <iostream>
using namespace std;

// Function to find the sum of natural numbers from 1 to n using recursion
int sumOfNaturalNumbers(int n) {
    if (n == 0) {
        return 0; // Base case: When n becomes 0, return 0
    } else {
        return n + sumOfNaturalNumbers(n - 1); // Recursive case: Add n to the sum of (n-1) natural numbers
    }
}

int main() {
    int n;

    cout << "Enter a positive integer (n): ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
    } else {
        int result = sumOfNaturalNumbers(n);
        cout << "Sum of natural numbers from 1 to " << n << " is: " << result << endl;
    }

    return 0;
}
