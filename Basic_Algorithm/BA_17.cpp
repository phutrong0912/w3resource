/*Write a C++ program to check if the string 'yt' appears at index 1 in a given string. If it appears return a string without 'yt' otherwise return the original string.
Sample Input:
"Python"
"ytade"
"jsues"
Sample Output:
Phon
ytade
jsues*/

#include <iostream>
#include <string>
using namespace std;

string check(string str)
{
    if (str.substr(1, 2) == "yt")
    {
        return str[0] + str.substr(3);
    }
    else
    {
        return str;
    }
}
int main(int argc, char const *argv[])
{
    string s;
    cout << "Input string: ";
    cin >> s;
    cout << check(s) << endl;
    return 0;
}
