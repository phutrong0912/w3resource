/* Write a C++ program to remove the character at a given position in the string. The given position will be in the range 0..string length -1 inclusive.
Sample Input:
"Python", 1
"Python", 0
"Python", 4
Sample Output:
Pthon
ython
Pythn*/

#include <iostream>
#include <string>
using namespace std;

string removeChar(string str, int pos)
{
    if (pos < 0 || pos >= str.length())
        return str;
    return str.substr(0, pos) + str.substr(pos + 1);
}

int main(int argc, char const *argv[])
{
    string s;
    int pos;
    cout << "Input string: ";
    getline(cin, s);
    cout << "Input position: ";
    cin >> pos;
    cout << removeChar(s, pos) << endl;
    return 0;
}