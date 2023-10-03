#include <iostream>

const int MAX_NUM = 1000;
long long factorialCache[MAX_NUM];

void initializeCache() {
    for (int i = 0; i < MAX_NUM; ++i)
        factorialCache[i] = -1;
}

long long factorial(int n) {
    if (n <= 1)
        return 1;

    if (factorialCache[n] != -1)
        return factorialCache[n];

    long long result = n * factorial(n - 1);
    factorialCache[n] = result;
    return result;
}

int main() {
    initializeCache();

    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    long long result = factorial(num);

    std::cout << "Factorial of " << num << " is: " << result << std::endl;

    return 0;
}
