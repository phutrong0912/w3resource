/*Write a C++ program to create a string from a given string without the first and last character.
This is possible if the first or last characters are 'a' otherwise return the original given string.
Sample Input:
"abcab"
"python"
"abcda"
"jython"
Sample Output:
bcab
python
bcd
jython*/

#include <iostream>
#include <string>
using namespace std;

string test(string str)
{
    if (str.length() > 0 && str.substr(str.length() - 1) == "a")
    {
        str = str.erase(str.length() - 1);
    }
    if (str.length() > 0 && str.substr(0, 1) == "a")
    {
        str = str.erase(0, 1);
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