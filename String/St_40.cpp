/*For two given strings, str1 and str2, write a C++ program to select only the characters that are lowercase in the other string at the same position. Return characters as a single string.
Test Data:
("Java", "Jscript") -> "scr"
("jScript", "Java") -> "Jva"
("cpp", "c++") -> "c++"*/

#include <iostream>
#include <string>
using namespace std;

string selectCharacters(string s1, string s2)
{
    string result;
    int len = min(s1.length(), s2.length());
    for (int i = 0; i < len; i++)
    {
        if (s1[i] >= 'a' && s1[i] <= 'z')
            result += s2[i];
        else if (s2[i] >= 'a' && s2[i] <= 'z')
            result += s1[i];
    }
    return result;
}
int main(int argc, char const *argv[])
{
    string s1, s2;
    cout << "Input first string: ";
    getline(cin, s1);
    cout << "Input second string: ";
    getline(cin, s2);
    cout << selectCharacters(s1, s2) << endl;
    return 0;
}