// Create a program to compute the intersection of two arrays.

#include <iostream>
using namespace std;

// function to find and display intersection between 2 strings
void findIntersection(int arr1[], int size1, int arr2[], int size2) {
    int i = 0, j = 0;

    cout << endl << "Intersection of the two arrays: " << endl << "[ ";

    for (int i = 0; i < size1; ++i) {
        for (int j = 0; j < size2; ++j) {
            if (arr1[i] == arr2[j]) {
                if (i < size1-1) {
                    cout << arr1[i] << ", "; 
                } else {
                    cout << arr1[i] << " ]" << endl;
                }
                break;
            }
        }
    }
}

// main function
int main() {

    // input size and elements of 2 array from the user
    int size1, size2;

    cout << "Enter the size of the first array: ";
    cin >> size1;
    int arr1[size1];

    cout << "Enter " << size1 << " elements for the first array " << endl;
    for (int i = 0; i < size1; i++) {
        cout << "Enter " << i << "th element of the first array: ";
        cin >> arr1[i];
    }

    cout << endl << "Enter the size of the second array: ";
    cin >> size2;
    int arr2[size2];

    cout << "Enter " << size2 << " elements for the second array " << endl;
    for (int j = 0; j < size2; j++) {
        cout << "Enter " << j << "th element of the second array: ";
        cin >> arr2[j];
    }

    // calling the function to find intersection of 2 strings
    findIntersection(arr1, size1, arr2, size2);

    return 0;
}