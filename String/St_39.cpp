/*Write a C++ program that checks whether a given string contains unique characters or not. Return true if the string contains unique characters otherwise false.
Test Data:
("Filename") -> 0
("abc") -> 1*/

#include <iostream>
#include <string>
using namespace std;

int uniqueCharacters(string s)
{
    bool index[256] = {false};
    for (int i = 0; i < s.length(); i++)
    {
        if (index[(unsigned char)s[i]])
            return 0;

        index[(unsigned char)s[i]] = true;
    }
    return 1;
}

int main(int argc, char const *argv[])
{
    string s;
    cout << "Input a string: ";
    getline(cin, s);
    cout << uniqueCharacters(s) << endl;
    return 0;
}
