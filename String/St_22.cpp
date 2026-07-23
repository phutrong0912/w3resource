/*Write a C++ program to remove all special characters from a given string.
Example:
Original string: abcd $ js# @acde$
New string after removing the special characters from the said string:
abcd js acde*/
#include <iostream>
#include <string>
using namespace std;

string removeSpecial(string s)
{
    string result;
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] >= 'A' && s[i] <= 'Z') ||(s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9') || s[i] == ' ')
        {
            result += s[i];
        }
    }

    return result;
}

int main(int argc, char const *argv[])
{
    string s;
    cout << "Input a string: ";
    getline(cin, s);
    cout << "New string after removing the special characters:\n";
    cout << removeSpecial(s) << endl;
    return 0;
}
