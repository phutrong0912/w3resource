/*Write a C++ program to create another string using three copies of the last two characters
of a given string of length at least two.
Sample Input:
"Hello"
"Hi"
Sample Output:
lololo
HiHiHi*/

#include <iostream>
#include <string>
using namespace std;

string test(string str)
{
    if (str.length() < 2)
        return str;

    string last2 = str.substr(str.length() - 2);
    return last2 + last2 + last2;
}

int main()
{
    string s;
    cout << "Input string: ";
    getline(cin,s);
    cout << test(s) << endl;
    return 0;
}