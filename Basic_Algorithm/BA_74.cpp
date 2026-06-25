/*Write a C++ program to check if a given string begins with 'abc' or 'xyz'.
If the string begins with 'abc' or 'xyz' return 'abc' or 'xyz' otherwise return the empty string.
Sample Input:
"abc"
"abcdef"
"C"
"xyz"
"xyzsder"
Sample Output:
abc
abc

xyz
xyz*/

#include <iostream>
#include <string>
using namespace std;

string checkString(string str)
{
    if (str.length() < 3)
    {
        return "";
    }
    else
    {
        string pos = str.substr(0, 3);
        if (pos == "abc" || pos == "xyz")
        {
            return pos;
        }
    }
}

int main(int argc, char const *argv[])
{
    string s;
    cout << "Input string: ";
    getline(cin, s);
    cout << checkString(s) << endl;
    return 0;
}
