// Define a program that calculates the sum of digits of a number using recursion.

#include <iostream>
using namespace std;
 
// Function to check sum of digit using recursion
int sum_of_digit(int n)
{
    //if number is 0, return value of 0
    if (n == 0)
    return 0;
    //add last digit of the number to the second last digit of the number and so on
    return (n % 10 + sum_of_digit(n / 10));
}
int main()
{
    int num;
    cout<<"Enter a number ";
    cin>>num;
    //storing sum of digits in result variable and printing it
    int result = sum_of_digit(num);
    cout << "Sum of digits in "<< num
       <<" is "<<result << endl;
    return 0;
}
