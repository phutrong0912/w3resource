/*Write a C++ program to check if a given string is a title-cased string or not. When the string is title cased, return "True", otherwise return "False".
Example:
Original String:
The Quick Brown Fox.
Check the said string is a title cased string or not!
True*/
#include <iostream>
#include <string>
using namespace std;

bool isTitleCase(string s)
{
    bool word = true;
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] >= 'A' && s[i] <= 'Z') ||
            (s[i] >= 'a' && s[i] <= 'z'))
        {
            if (word)
            {
                if (!(s[i] >= 'A' && s[i] <= 'Z'))
                    return false;
                word = false;
            }
            else
            {
                if (!(s[i] >= 'a' && s[i] <= 'z'))
                    return false;
            }
        }
        else
        {
            if (s[i] == ' ')
                word = true;
        }
    }
    return true;
}
int main(int argc, char const *argv[])
{
    string s;
    cout << "Input a string: ";
    getline(cin, s);
    if (isTitleCase(s))
        cout << "True";
    else
        cout << "False";
    return 0;
}
