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
    for (int i = 0; i < s.length(); i++)
    {
        if (i % 2 == 0)
            s[i] = tolower(s[i]);
        else
            s[i] = toupper(s[i]);
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