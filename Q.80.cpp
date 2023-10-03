#include <iostream>
using namespace std;
int countWaysToClimbStairs(int n, int stepSizes[], int numStepSizes) {
    if (n == 0)
        return 1;
    if (n < 0)
        return 0;

    int totalWays = 0;

    for (int i = 0; i < numStepSizes; ++i) {
        totalWays += countWaysToClimbStairs(n - stepSizes[i], stepSizes, numStepSizes);
    }

    return totalWays;
}

int main() {
    int n;
    cout << "Enter the number of stairs: ";
    cin >> n;

    int numStepSizes;
    cout << "Enter the number of step sizes: ";
    cin >> numStepSizes;

    int stepSizes[numStepSizes];
    cout << "Enter the step sizes: ";
    for (int i = 0; i < numStepSizes; ++i) {
        cin >> stepSizes[i];
    }

    int ways = countWaysToClimbStairs(n, stepSizes, numStepSizes);
    cout << "Number of ways to climb stairs: " << ways << endl;

    return 0;
}
