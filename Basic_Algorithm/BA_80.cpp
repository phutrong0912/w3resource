/*Write a C++ program to create a new string from a given string. If the first or first two characters are 'a', return the string without those 'a' characters, otherwise return the original string.
Sample Input:
"abcab"
"python"
"aacda"
"jython"
Sample Output:
bcab
python
cda
jython*/

#include <iostream>
#include <string>
using namespace std;

string test(string str)
{
    string result = "";

    if (str.length() > 0 && str[0] != 'a')
    {
        result += str[0];
    }
    if (str.length() > 1 && str[1] != 'a')
    {
        result += str[1];
    }
    if (str.length() > 2)
    {
        result += str.substr(2);
    }
    return result;
}

int main(int argc, char const *argv[])
{
    string s;
    cout << "Input string: ";
    getline(cin, s);
    cout << test(s) << endl;
    return 0;
}