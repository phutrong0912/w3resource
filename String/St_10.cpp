/*Write a C++ program to check if a given string is a Palindrome or not.
A palindrome is a word, number, phrase, or other sequence of characters which reads the same backward as forward, such as madam, racecar.
Example:
Sample Input: madam
Sample Output: True*/

#include <iostream>
#include <string>
using namespace std;

bool Palindrome( string str)
{
    int left = 0;
    int right = str.length() - 1;

    while (left < right)
    {
        if (str[left] != str[right])
            return false;
        left++;
        right--;
    }
    return true;
}
int main(int argc, char const *argv[])
{
    string s;
    cout << "Input a string: ";
    cin >> s;
    if (Palindrome(s))
        cout << "True";
    else
        cout << "False";
    return 0;
}