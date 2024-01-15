#include <iostream>
using namespace std;
int main() {
    int n = 5;  // Number of rows

    for (int i = n; i >= 1; i--) {
        char ch = 'A' + i - 1;

        for (int j = 1; j <= i; j++) {
            std::cout << ch;
        }

        cout << endl;
    }

    return 0;
}
