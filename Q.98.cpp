#include <iostream>
using namespace std;
int main() {
    int n = 5;  // Number of rows

    for (int i = n; i >= 1; i--) {
        for (int j = n; j >= i; j--) {
            std::cout << j;
        }

        cout << endl;
    }

    return 0;
}
