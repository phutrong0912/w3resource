/*Write a C++ program to exchange the first and last characters in a given string and return the result string.
Sample Input:
"abcd"
"a"
"xy"
Sample output:
dbca
a
yx*/

#include <iostream>
#include <string>
using namespace std;

string exchange(string str)
{
    if (str.length() <= 1)
        return str;
    swap(str[0], str[str.length() - 1]);
    return str;
}

int main(int argc, char const *argv[])
{
    string s;
    cout << "Input string: ";
    getline(cin, s);
    cout << exchange(s) << endl;
    return 0;
}