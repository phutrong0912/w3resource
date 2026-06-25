/*Write a C++ program to create the string of the first half of a given string of even length.
Sample Input:
"Hello"
"Hi"
Sample Output:
He
H*/

#include <iostream>
#include <string>
using namespace std;

string test(string str)
{
    return str.substr(0, str.length() / 2);
}

int main()
{
    string s;
    cout << "Input string: ";
    getline(cin,s);
    cout << test(s) << endl;
    return 0;
}