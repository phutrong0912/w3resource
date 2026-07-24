/*Write a C++ program to check if a given string contains only uppercase or only lowercase letters. Return "True" if the string is uppercase or lowercase, otherwise "False".
Example:
Original string: ABCDEF
Check whether the said string is uppercase or lowercase: True*/

#include <iostream>
#include <string>
using namespace std;

bool checkCase(string s)
{
    bool Upper = false;
    bool Lower = false;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            Upper = true;
        else if (s[i] >= 'a' && s[i] <= 'z')
            Lower = true;

        if (Upper && Lower)
            return false;
    }
    return true;
}
int main(int argc, char const *argv[])
{
    string s;
    cout << "Input a string: ";
    getline(cin, s);
    cout << "Check whether the said string is uppercase or lowercase: ";
    if (checkCase(s))
        cout << "True";
    else
        cout << "False";

    return 0;
}
