/*Write a C++ program to change every letter in a given string with the letter following it in the alphabet (i.e. a becomes b, p becomes q, z becomes a).
Example:
Sample Input: w3resource
Sample Output: x3sftpvsdf*/

#include <iostream>
#include <string>
using namespace std;

string nextLetter(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'z')
            str[i] = 'a';
        else if (str[i] == 'Z')
            str[i] = 'A';
        else if ((str[i] >= 'A' && str[i] <= 'Y') ||
                 (str[i] >= 'a' && str[i] <= 'y'))
            str[i]++;
    }
    return str;
}

int main(int argc, char const *argv[])
{
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    cout << "The new string is: " << nextLetter(s) << endl;
    return 0;
}
