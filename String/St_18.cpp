/*Write a C++ program to find the length of the longest valid (correct-formed) parentheses substring of a given string.
Example:
Original Parentheses string: [[]
Length of longest parentheses: 2
Original Parentheses string: [[]]]
Length of longest parentheses: 4
Original Parentheses string: ]]]][[[[
Length of longest parentheses: 0*/

#include <iostream>
#include <string>
using namespace std;

int longestValidParentheses(const string &s)
{
    int maxLength = 0;
    int left = 0, right = 0;
    // Left to right scan
    for (char c : s)
    {
        if (c == '[')
            left++;
        else if (c == ']')
            right++;

        if (left == right)
            maxLength = max(maxLength, 2 * right);
        else if (right > left)
            left = right = 0;
    }
    left = right = 0;

    // Right to left scan
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] == '[')
            left++;
        else if (s[i] == ']')
            right++;

        if (left == right)
            maxLength = max(maxLength, 2 * left);
        else if (left > right)
            left = right = 0;
    }
    return maxLength;
}

int main(int argc, char const *argv[])
{
    string s;
    cout << "Input a string of parentheses: ";
    cin >> s;
    cout << "Length of longest valid parentheses substring: " << longestValidParentheses(s) << endl;
    return 0;
}