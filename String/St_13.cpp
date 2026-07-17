/*Write a C++ program to change the case (lower to upper and upper to lower cases) of each character in a given string.
Example:
Sample Input: Pythpn
Sample Output: pYTHON*/

#include <iostream>
#include <string>
using namespace std;

void changeCase(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 32;
        else if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    }

    cout << s << endl;
}
int main(int argc, char const *argv[])
{
    string s;
    cout << "Input a string: ";
    cin >> s;
    changeCase(s);
    return 0;
}
