/*Write a C++ program to add two given strings. If the given strings have different lengths,
 remove the characters from the longer string.
Sample Input:
"abc", "abcd"
"Python", "Python"
"JS", "Python"
Sample Output:
abcbcd
PythonPython
JSon*/

#include <iostream>
#include <string>
using namespace std;

string addString(string s1, string s2)
{
    if (s1.length() < s2.length())
    {
        return s1 + s2.substr(s2.length() - s1.length());
    }
    else if (s1.length() > s2.length())
    {
        return s1.substr(s1.length() - s2.length()) + s2;
    }
        return s1 + s2;
}

int main(int argc, char const *argv[])
{
    string s1, s2;
    cout << "Input string 1: ";
    getline(cin, s1);
    cout << "Input string 2: ";
    getline(cin, s2);
    cout << addString(s1, s2) << endl;
    return 0;
}