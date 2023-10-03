#include <iostream>

// Function to partition the array and return the index of the pivot
int partition(int arr[], int left, int right) {
    int pivot = arr[right];  // Choosing the last element as the pivot
    
    int i = left - 1;  // Index of smaller element
    
    for (int j = left; j < right; ++j) {
        // If the current element is smaller than or equal to the pivot
        if (arr[j] <= pivot) {
            i++;  // Increment index of smaller element
            std::swap(arr[i], arr[j]);
        }
    }
    
    std::swap(arr[i + 1], arr[right]);
    
    return i + 1;
}

// Function to find the Kth smallest element using quickselect
int quickSelect(int arr[], int left, int right, int k) {
    if (k >= 0 && k < right - left + 1) {
        int pivotIndex = partition(arr, left, right);
        
        if (pivotIndex - left == k)
            return arr[pivotIndex];
        else if (pivotIndex - left < k)
            return quickSelect(arr, pivotIndex + 1, right, k - (pivotIndex - left + 1));
        else
            return quickSelect(arr, left, pivotIndex - 1, k);
    }
    
    return -1;  // Return -1 for invalid value of K
}

int main() {
    int arr[] = {12, 3, 5, 7, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;  // Kth smallest element (0-based index)
    
    int kthSmallest = quickSelect(arr, 0, n - 1, k);
    
    if (kthSmallest != -1)
        std::cout << "Kth smallest element is: " << kthSmallest << std::endl;
    else
        std::cout << "Invalid value of K." << std::endl;
    
    return 0;
}
