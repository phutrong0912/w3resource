/*Write a C++ program to create a string of length 2 starting at the given index of a given string.
Sample Input:
"Hello", 1
"Python", 2
"on", 1
Sample Output:
el
th
on*/

#include <iostream>
#include <string>
using namespace std;

string test(string str, int index)
{
    if (index + 2 > str.length())
        return str.substr(0, 2);
    return str.substr(index, 2);
}

int main()
{
    string s;
    int index;
    cout << "Input string: ";
    getline(cin, s);
    cout << "Input index: ";
    cin >> index;
    cout << test(s, index) << endl;
    return 0;
}