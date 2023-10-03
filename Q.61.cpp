#include <iostream>

int findMajorityElement(int arr[], int size) {
    int majorityElement = arr[0];
    int count = 1;

    for (int i = 1; i < size; ++i) {
        if (count == 0) {
            majorityElement = arr[i];
            count = 1;
        } else if (arr[i] == majorityElement) {
            ++count;
        } else {
            --count;
        }
    }

    return majorityElement;
}

int main() {
    int arr[] = {2, 2, 1, 1, 1, 2, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int majorityElement = findMajorityElement(arr, size);

    std::cout << "Majority Element: " << majorityElement << std::endl;

    return 0;
}
