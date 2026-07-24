/*Write a C++ program that removes a specific character from a given string. Return the updated string.
Test Data:
("Filename", "e") -> "Filnam"
("Compilation Time", "i") -> "Complaton Tme"*/

#include <iostream>
#include <string>
using namespace std;

string removeCharacter(string s, char c)
{
    string result;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != c)
            result += s[i];
    }
    return result;
}

int main(int argc, char const *argv[])
{
    string s;
    char c;
    cout << "Input a string: ";
    getline(cin, s);
    cout << "Input a character: ";
    cin >> c;
    cout << removeCharacter(s, c) << endl;
    return 0;
}
