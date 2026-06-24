/*Write a C++ program to check whether the first two characters and the last two characters of a given string are the same.
Sample Input:
"abab"
"abcdef"
"xyzsderxy"
Sample Output:
1
0
1*/

#include <iostream>
#include <string>
using namespace std;

bool checkString(string str)
{
    int len = str.length();
    if (len < 4)
    {
        return false;
    }
    return str.substr(0, 2) == str.substr(len - 2, 2);
}
int main(int argc, char const *argv[])
{
    string s;
    cout << "Input string: ";
    getline(cin, s);
    cout << checkString(s)<<endl;
    return 0;
}
