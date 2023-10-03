// Create a program to check if a number is prime using recursion.
#include <iostream>
using namespace std;

// Function to check if a number is prime or not
bool isPrime(int num, int divisor = 2) {
    // Base cases
    if (num <= 2) {
        return (num == 2) ? true : false;
    }
    if (num % divisor == 0) {
        return false;
    }
    if (divisor * divisor > num) {
        return true;
    }
    
    // Recursively check for divisibility
    return isPrime(num, divisor + 1);
}

int main() {
    int number;
cout << "Enter a positive integer: ";
cin >> number;

    if (number <= 0) {
        cout << "Please enter a positive integer." <<endl;
    } else {
        if (isPrime(number)) {
        cout << number << " is a prime number." <<endl;
        } else {
        cout << number << " is not a prime number." <<endl;
        }
    }

    return 0;
}
