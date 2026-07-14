/*Write a C++ program to find the length of the longest palindrome in a given string (uppercase or lowercase letters).
Original string: adcdcdy
Length of the longest palindrome of the said string: 5
Original string: aaa
Length of the longest palindrome of the said string: 3
Original string: aa
Length of the longest palindrome of the said string: 2
Original string: abddddeeff
Length of the longest palindrome of the said string: 4
Original string: PYTHON
Length of the longest palindrome of the said string: 1*/

#include <iostream>
#include <string>
using namespace std;

int expand(string s, int left, int right)
{
    while (left >= 0 && right < s.length() && s[left] == s[right])
    {
        left--;
        right++;
    }

    return right - left - 1;
}

int longestPalindrome(string s)
{
    int maxLength = 0;

    for (int i = 0; i < s.length(); i++)
    {
        int len1 = expand(s, i, i);       // Palindrome có độ dài lẻ
        int len2 = expand(s, i, i + 1);   // Palindrome có độ dài chẵn

        maxLength = max(maxLength, max(len1, len2));
    }

    return maxLength;
}

int main()
{
    string s;

    cout << "Input a string: ";
    cin >> s;

    cout << "Length of the longest palindrome: "
         << longestPalindrome(s) << endl;

    return 0;
}