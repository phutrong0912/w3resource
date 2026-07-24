/*Write a C++ program to identify the missing letter in a given string (list of alphabets). The method returns, "There is no missing letter!" if no letters are missing from the string.
Example:
Original string: abcdef
Identify the missing letter in the said string:
There is no missing letter!*/
#include <iostream>
#include <string>
using namespace std;

void findMissingLetter(string s)
{
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i + 1] - s[i] > 1)
        {
            cout << "Missing letter: " << char(s[i] + 1) << endl;
            return;
        }
    }
    cout << "There is no missing letter!" << endl;
}

int main(int argc, char const *argv[])
{
    string s;
    cout << "Input a string: ";
    getline(cin,s);
    cout << "Identify the missing letter in the said string:"<<endl;
    findMissingLetter(s);
    return 0;
}
