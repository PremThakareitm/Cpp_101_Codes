// "Write a C++ program to display the following pattern:


// 1
// 121
// 12321
// 1234321"

#include <iostream>
using namespace std;

int main() {
    int n;

    std::cout << "Enter the number of rows: ";
    std::cin >> n;

    for (int i = 1; i <= n; ++i) {
        // Print spaces
        for (int j = 1; j <= n - i; ++j) {
            std::cout << " ";
        }

        // Print increasing numbers
        for (int j = 1; j <= i; ++j) {
            std::cout << j;
        }

        // Print decreasing numbers
        for (int j = i - 1; j >= 1; --j) {
            std::cout << j;
        }

        std::cout << std::endl;
    }

    return 0;
}