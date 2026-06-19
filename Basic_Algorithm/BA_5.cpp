/*Write a C++ program to create a string where 'if' is added to the front of a given string. If the string already begins with 'if', return the string unchanged.
Sample Input:
"if else"
"else"
Sample Output:
if else
if else*/

#include <iostream>
#include <string>
using namespace std;
string addIf(string str)
{
    if (str.substr(0, 2) == "if")
        return str;
    else
        return "if " + str;
}
int main(int argc, char const *argv[])
{
    string str;
    cout << "Input string: ";
    getline(cin, str);
    cout << addIf(str) << endl;
    return 0;
}
