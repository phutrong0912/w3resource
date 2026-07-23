/*Write a C++ program that counts the number of instances of a certain character in a given string.
Test Data:
("Exercises", "e") -> 2
("Compilation Time", "i") -> 3*/

#include <iostream>
#include <string>
using namespace std;

int countCharacter(string s, char c)
{
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == c)
            count++;
    }
    return count;
}

int main(int argc, char const *argv[])
{
    string s;
    char c;
    cout << "Input a string: ";
    getline(cin, s);
    cout << "Input a character: ";
    cin >> c;
    cout << countCharacter(s, c) << endl;
    return 0;
}
