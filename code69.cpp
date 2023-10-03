// Implement a program to find the nth term of the Fibonacci series using recursion.

#include <iostream>
using namespace std;

// function to find fibonacii
int fib(int n)
{

    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }

    return fib(n - 1) + fib(n - 2);
}

// main function
int main()
{
    // input a number from user
    int num;
    cout << "Enter number (for which you wanna find fibonacci of): ";
    cin >> num;

    while (num < 0)
    {
        cout << "Invalid number, fibonacci of " << num << "can't be found (Fibonacci is not defined for nagitive numbers)" << endl;
        cout << "Enter number (for which you wanna find fibonacci of): ";
        cin >> num;
    }

    // calling the funciton to calculate and display fibonacci series of a number
    cout << "The fibonacci of " << num << " is " << fib(num) << endl;

    return 0;
}