/*Write a C++ program to check if the first appearance of "a" in a given string is immediately followed by another "a"
Sample Input:
"caabb"
"babaaba"
"aaaaa"
Sample Output:
1
0
1*/

#include <iostream>
#include <string>
using namespace std;

bool check(string str)
{
    int index = str.find('a');
    if (index != string::npos && index < str.length() - 1)
    {
        return str[index + 1] == 'a';
    }
    return false;
}
int main(int argc, char const *argv[])
{
    string s;
    cout << "Input string: ";
    getline(cin, s);
    cout << check(s) << endl;
    return 0;
}