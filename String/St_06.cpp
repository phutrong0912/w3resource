/*Write a C++ program to check whether the characters e and g are separated by exactly 2 places anywhere in a given string at least once.
+ Example:
Sample Input: eagerer
Sample Output: eagerer -> 1*/

#include <iostream>
#include <string>
using namespace std;

bool separatedBy2Places(const string &str)
{
    for (int i = 0; i + 3 < str.length(); i++)
    {
        if ((str[i] == 'e' && str[i + 3] == 'g') ||
            (str[i] == 'g' && str[i + 3] == 'e'))
        {
            return true;
        }
    }
    return false;
}

int main(int argc, char const *argv[])
{
    string s;
    cout << "Enter a string: ";
    cin >> s;
    cout << s << " -> "<< separatedBy2Places(s) << endl;
    return 0;
}
