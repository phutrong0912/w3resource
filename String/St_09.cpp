/*Write a C++ program to check whether two characters appear equally in a given string.
Eiample:
Sample Input: aabcdeef
Sample Output: True*/

#include <iostream>
#include <string>
using namespace std;

bool checkEqual(string s)
{
    int freq[256] = {0};

    for (int i = 0; i < s.length(); i++)
        freq[(unsigned char)s[i]]++;

    for (int i = 0; i < 256; i++)
    {
        if (freq[i] == 0)
            continue;

        for (int j = i + 1; j < 256; j++)
        {
            if (freq[i] == freq[j] && freq[j] != 0)
                return true;
        }
    }

    return false;
}
int main(int argc, char const *argv[])
{
    string s;
    cout << "Input a string: ";
    cin >> s;
    if (checkEqual(s))
        cout << "True";
    else
        cout << "False";

    return 0;
}
