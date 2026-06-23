/*Write a C++ program to insert a given string into middle of the another given string of length 4.
Sample Input:
"[[]]","Hello"
"(())", "Hi"
Sample Output:
[[Hello]]
((Hi))*/

#include <iostream>
#include <string>
using namespace std;

string test(string s1, string s2)
{
    if (s1.length() != 4)
        return s1;
    return s1.substr(0, 2) + s2 + s1.substr(2, 2);
}

int main()
{
    string s1, s2;
    cout << "Input string: ";
    getline(cin,s1);
    cout << "Input string insert: ";
    getline(cin,s2);
    cout << test(s1, s2) << endl;
    return 0;
}