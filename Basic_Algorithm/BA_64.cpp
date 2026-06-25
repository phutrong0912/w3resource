/*Write a C++ program to combine two strings of length at least 1, after removing their first character.
Sample Input:
"Hello", "Hi"
"JS", "Python"
Sample Output:
elloi
Sython*/

#include <iostream>
#include <string>
using namespace std;

string sumString(string s1, string s2) {
    return s1.substr(1) + s2.substr(1);
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