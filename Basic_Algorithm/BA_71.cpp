/*Write a C++ program to create a new string of length 2, using the first two characters of a given string.
If the given string length is less than 2 use '#' as missing characters.
Sample Input:
"Hello"
"Python"
"a"
""
Sample Output:
He
Py
a#
##*/

#include <iostream>
#include <string>
using namespace std;

string createString(string str)
{
    if (str.length() >= 2)
    {
        return str.substr(0, 2);
    }
    else if (str.length() > 0)
    {
        return str += "#";
    }
    return "##";
}

int main(int argc, char const *argv[])
{
    string s;
    cout << "Input string: ";
    getline(cin, s);
    cout << createString(s)<<endl;
    return 0;
}
