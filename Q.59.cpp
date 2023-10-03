#include <iostream>
using namespace std;

int findSecondLargest(int arr[], int size) {
    // Initialize the largest and second largest variables
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    // Iterate through the array to find the largest and second largest elements
    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int main() {
    const int maxSize = 100; // Maximum size of the array
    int arr[maxSize];
    int size;

    // Ask the user for input
    cout << "Enter the size of the array: ";
    cin >> size;

    // Validate input
    if (size <= 0 || size > maxSize) {
        cout << "Invalid array size." << endl;
        return 1; // Exit with an error code
    }

    // Ask the user to enter the array elements
    cout << "Enter the array elements:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Find the second largest element in the array
    int secondLargest = findSecondLargest(arr, size);

    // Print the result
    if (secondLargest != INT_MIN) {
        cout << "The second largest element in the array is: " << secondLargest << endl;
    } else {
        cout << "There is no second largest element in the array." << endl;
    }

    return 0;
}
