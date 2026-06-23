/*Write a C++ program that takes at least 3 characters from the middle of a given string
that would be used to create a string.
Sample Input:
"Hello"
"Python"
"abc"
Sample Output:
ell
yth
abc*/

#include <iostream>
#include <string>
using namespace std;

string test(string str)
{
    if (str.length() < 3)
        return str;
    int start = (str.length()/ 2-1);
    return str.substr(start, 3);
}

int main()
{
    string s;
    cout << "Input string: ";
    getline(cin, s);
    cout << test(s) << endl;
    return 0;
}