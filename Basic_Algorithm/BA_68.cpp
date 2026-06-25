/*Write a C++ program to create a new string using the first and
last n characters from a given string of length at least n.
Sample Input:
"Hello", 1
"Python", 2
"on", 1
"o", 1
Sample Output:
Ho
Pyon
on
oo*/

#include <iostream>
#include <string>
using namespace std;

string test(string str, int n)
{
    return str.substr(0, n) + str.substr(str.length() - n, n);
}

int main()
{
    string s;
    int n;
    cout << "Input string: ";
    getline(cin, s);
    cout << "Input numbers: ";
    cin >> n;
    cout << test(s, n) << endl;
    return 0;
}