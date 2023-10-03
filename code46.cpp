// Implement a program to find the largest and smallest elements in an array.

#include<iostream>
using namespace std;

int main() 
{
    int n;
    
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    if (n <= 0)
    {
        cout << "Invalid array size. Please enter a positive integer." << endl;
        return 1; // Exit with an error code
    }
    int arr[n];

    // Input elements into the array
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Display the elements of the array
    cout << "Elements in the array: |";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<"|";
    cout << endl;

    // Initialize variables to store the largest and smallest elements(with first element of the array)
    int largest = arr[0];
    int smallest = arr[0];

    // Iterate through the array to find the largest and smallest elements(as first elememt is already initialized with largest and smallest, we ignore it)
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    // Display the largest and smallest elements
    cout << "Largest element: " << largest << endl;
    cout << "Smallest element: " << smallest << endl;

    return 0;
}