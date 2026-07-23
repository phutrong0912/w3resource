/*Write a C++ program to check whether there are two consecutive (following each other continuously), identical letters in a given string.
Test Data:
("Exercises") -> 0
("Yellow") -> 1*/
#include <iostream>
#include <string>
using namespace std;

int checkConsecutive(string s)
{
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == s[i - 1])
            return 1;
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    string s;
    cout << "Input a string: ";
    getline(cin,s);
    cout << checkConsecutive(s) << endl;

    return 0;
}
