/*Write a C++ program to insert a space when a lower character follows an upper character in a given string.
Example:
Original String:
TheQuickBrownFox.
Insert white spaces between lower and uppercase Letters in the said string:
The Quick Brown Fox.
*/

#include <iostream>
#include <string>
using namespace std;

string insertSpace(string s)
{
    string result;
    for (int i = 0; i < s.length(); i++)
    {
        result += s[i];
        if (i < s.length() - 1 && s[i] >= 'a' && s[i] <= 'z' && s[i + 1] >= 'A' && s[i + 1] <= 'Z')
        {
            result += ' ';
        }
    }
    return result;
}

int main(int argc, char const *argv[])
{
    string s;
    cout << "Input a string: ";
    getline(cin, s);
    cout << "Insert white spaces between lower and uppercase letters:\n";
    cout << insertSpace(s) << endl;
    return 0;
}
