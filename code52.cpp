// Write a program to concatenate two strings without using the strcat function.
#include<iostream>
using namespace std;

int main() {
    string str1, str2;

    cout << "Enter the first string: ";
    getline(cin, str1);//input

    cout << "Enter the second string: ";
    getline(cin, str2);//input

    // Concatenate strings
    str1 =str1+str2;

    // Display the concatenated string
    cout << "Concatenated String: " << str1 << endl;

    return 0;
}