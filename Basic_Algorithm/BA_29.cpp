/*Write a C++ program to create a string like "aababcabcd" from a given string "abcd".
Sample Input:
"abcd"
"abc"
"a"
Sample Output:
aababcabcd
aababc
a*/

#include<iostream>
#include<string>
using namespace std;

string createString(string str)
{
    string result = "";
    for (int i = 0; i < str.length(); i++)
    {
        result += str.substr(0, i + 1);
    }
    return result;
}
int main()
{
    string s;
    cout << "Input string: ";
    getline(cin, s);
    cout << createString(s) << endl;
    return 0;
}