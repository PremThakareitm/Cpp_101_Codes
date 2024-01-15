#include <iostream>
using namespace std;
int stringLength(const char* str) {
    int length = 0;

    // Iterate through the string until the null terminator is encountered
    while (str[length] != '\0') {
        length++;
    }

    return length;
}

int main() {
    // Define an array of characters representing a string
    char str[] = "Hello, World!";
    
    // Calculate the length of the string
    int length = stringLength(str);

    cout << "The string is: " << str << endl;
    cout << "Length of the string: " << length << endl;

    return 0;
}

