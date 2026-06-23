/*Write a C++ program to create a string taking the first 3 characters of a given string. Then, return the string with the 3 characters added to both the front and back. If the given string length is less than 3, use whatever characters are there.
Sample Input:
"Python"
"JS"
"Code"
Sample Output:
PytPythonPyt
JSJSJS
CodCodeCod*/

#include <iostream>
#include <string>
using namespace std;

string addFString(const string &str)
{
    string firstThree = str.substr(0, 3);
    return firstThree + str + firstThree;
}

int main(int argc, char const *argv[])
{
    string s;
    cout << "Input string: ";
    cin >> s;
    cout << addFString(s) << endl;
    return 0;
}