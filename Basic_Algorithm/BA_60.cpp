/*Write a C++ program to create a new string using the first two characters of a given string. If the string length is less than 2, return the original string.
Sample Input:
"Hello"
"Hi"
"H"
" "
Sample Output:
He
Hi
H*/

#include <iostream>
#include <string>
using namespace std;

string test(string str)
{
    if (str.length() <= 2)
        return str;
    return str.substr(0, 2);
}

int main()
{
    string s;
    cout << "Input string: ";
    getline(cin,s);
    cout << test(s) << endl;
    return 0;
}