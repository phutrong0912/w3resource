/*Write a C++ program to find the longest sequence of consecutive ones in a given binary string.
Example:
Original Binary String:
1100110001
Longest sequence of consecutive ones of the said binary string:
11*/
#include <iostream>
#include <string>
using namespace std;

int longest1(string s)
{
    int current = 0,maxLen = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
        {
            current++;
            if (current > maxLen)
                maxLen = current;
        }
        else
        {
            current = 0;
        }
    }
    return maxLen;
}

int main(int argc, char const *argv[])
{
    string s;
    cout << "Input a binary string: ";
    cin >> s;
    int len = longest1(s);
    cout << "Longest sequence of consecutive ones of the said binary string:\n";
    for (int i = 0; i < len; i++)
        cout << '1';
    cout << endl;
    return 0;
}
