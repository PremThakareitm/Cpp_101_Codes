#include <iostream>
using namespace std;

int calculateSum(int n) {
    int sum = 0;

    // Calculate the sum of natural numbers up to N
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    return sum;
}

int main() {
    int N;

    // Ask the user for input
    cout << "Enter a positive integer N: ";
    cin >> N;

    // Validate input
    if (N <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1; // Exit with an error code
    }

    // Calculate the sum of natural numbers up to N
    int sum = calculateSum(N);

    // Print the sum
    cout << "Sum of natural numbers up to " << N << " is: " << sum << endl;

    return 0;
}
