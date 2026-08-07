/*Write a C++ program to verify that all of the letters in the second string appear in the first string as well. Return true otherwise false.
Example:
Original String elements: Python Py
Check - First string contains all letters from the second string :true*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool containsAllLetters(const string str1, const string &str2)
{
    for (char c : str2)
    {
        if (str1.find(c) == string::npos)
            return false;
    }
    return true;
}
int main(int argc, char const *argv[])
{
    string s1, s2;
    cout << "Input first string: ";
    cin >> s1;
    cout << "Input second string: ";
    cin >> s2;
    cout << "Check - First string contains all letters from the second string :";
    if (containsAllLetters(s1, s2))
        cout << "true";
    else
        cout << "false";
    return 0;
}


