/*Write a C++ program that alternates the case of each letter in a given string of letters.
Pattern: First lowercase letter then uppercase letter and so on.
Test Data:
("JavaScript") -> "jAvAsCrIpT"
("Python") -> "pYtHoN"
("C++") -> "c++"*/

#include <iostream>
#include <string>
using namespace std;

string alternateCase(string s)
{
    bool lower = true;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            if (lower)
                s[i] += 32;
            lower = !lower;
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            if (!lower)
                s[i] -= 32;
            lower = !lower;
        }
    }

    return s;
}

int main(int argc, char const *argv[])
{
    string s;
    cout << "Input a string: ";
    getline(cin, s);
    cout << alternateCase(s) << endl;
    return 0;
}