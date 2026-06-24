/*Write a C++ program to create a new string from a string. Return the given string without the first two characters
if the two characters at the beginning and end are the same. Otherwise, return the original string.
Sample Input:
"abcab"
"Python"
"abcabab"
Sample Output:
cab
Python
cabab*/

#include <iostream>
#include <string>
using namespace std;

string test(string str)
{
    int len = str.length();
    if (len >= 2 && str.substr(0, 2) == str.substr(len - 2, 2))
    {
        return str.substr(2);
    }

    return str;
}

int main(int argc, char const *argv[])
{
    string s;
    cout << "Input string: ";
    getline(cin, s);
    cout << test(s) << endl;
    return 0;
}
