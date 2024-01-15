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
    const int maxBufferSize = 100; // Maximum length of input string
    char input[maxBufferSize];

    // Ask the user for input
    cout << "Enter a string: ";

    // Read the input into a character array
    cin.getline(input, maxBufferSize);

    // Calculate the length of the input string
    int length = stringLength(input);

    // Print the length of the input string
    cout << "Length of the string: " << length << endl;

    return 0;
}
