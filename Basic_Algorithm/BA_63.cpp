/*Write a C++ program to create a new string from two given strings, 
one of which is shorter and the other is larger. The format of the updated string will be long string + short string + long string.
Sample Input:
"Hello", "Hi"
"JS", "Python"
Sample Output:
HelloHiHello
PythonJSPython*/

#include <iostream>
#include <string>
using namespace std;

string sumString(string s1, string s2) {
   return s1.length() < s2.length() ? s2 + s1 + s2 : s1 + s2 + s1;
}

int main() {
    string s1, s2;
    cout << "Input string 1: ";
    getline(cin,s1);
    cout << "Input string 2: ";
    getline(cin,s2);
    cout << sumString(s1, s2) << endl;
    return 0;
}