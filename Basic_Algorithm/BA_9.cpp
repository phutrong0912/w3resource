/*Write a C++ program to create a string with the last character added at the front and back of a given string of length 1 or more
Sample Input:
"Red"
"Green"
"1"
Sample Output:
dRedd
nGreenn
111*/

#include <iostream>
#include <string>
using namespace std;

string addLastChar(string str)
{
    char lastChar = str[str.length() - 1];
    return lastChar + str + lastChar;
}

int main(int argc, char const *argv[])
{
    string s;
    cout << "Input string: ";
    getline(cin, s);
    cout << addLastChar(s) << endl;
    return 0;
}