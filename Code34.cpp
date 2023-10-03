//Calculate the sum of digits of a number using a do-while loop.

#include <iostream>
using namespace std;

int main() {
    int number, digit, sum = 0;

    cout << "Enter a number: ";
    cin >> number;

    if (number < 0) {
        cout << "Please enter a non-negative number." << endl;
        return 1;
    }

    do {
        digit = number % 10; 
        sum += digit;         
        number /= 10;      
    } while (number != 0);

    cout << "The sum of digits is: " << sum << endl;

    return 0;
}
