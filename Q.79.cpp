#include <iostream>
#include <string>
using namespace std;

// Recursive function to find the longest common subsequence (LCS)
string longestCommonSubsequence(const string& str1, const string& str2, int m, int n) {
    // Base case1: if either string is empty, return an empty string
    if (m == 0 || n == 0)
        return ""; //blank print and code stops 
    // If the characters match, include the character in the LCS
    else if (str1[m - 1] == str2[n - 1])
        return longestCommonSubsequence(str1, str2, m - 1, n - 1) + str1[m - 1];
    // If the characters don't match, backtrack to find the longer LCS that is it will start from first char in string 
    else {
        string lcs1 = longestCommonSubsequence(str1, str2, m, n - 1);
        string lcs2 = longestCommonSubsequence(str1, str2, m - 1, n);
        return (lcs1.length() > lcs2.length()) ? lcs1 : lcs2;
    }
}

// Function to initiate the recursive LCS calculation 
string findLongestCommonSubsequence(const string& str1, const string& str2) {
    return longestCommonSubsequence(str1, str2, str1.length(), str2.length());
}

int main() {
    string str1, str2;
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;

    // Find the longest common subsequence
    string lcs = findLongestCommonSubsequence(str1, str2);

    // Display the longest common subsequence
    cout << "The Longest Common Subsequence is: " << lcs << endl;

    return 0;
}
