/*Write a C++ program to check whether two characters appear equally in a given string.
Eiample:
Sample Input: aabcdeef
Sample Output: True*/

#include <iostream>
#include <string>
using namespace std;

bool checkEqual(string s, char c1, char c2)
{
    int count1 = 0, count2 = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == c1)
            count1++;
        if (s[i] == c2)
            count2++;
    }

    return count1 == count2;
}
int main(int argc, char const *argv[])
{
    string s;
    char c1, c2;
    cout << "Input a string: ";
    cin >> s;
    cout << "Input two characters: ";
    cin >> c1 >> c2;
    if (checkEqual(s, c1, c2))
        cout << "True";
    else
        cout << "False";
    return 0;
}
