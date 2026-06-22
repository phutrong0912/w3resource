/*Write a C++ program to create the string which is n (non-negative integer) copies of a given string.
Sample Input:
"JS", 2
"JS", 3
"JS", 1
Sample Output:
JSJS
JSJSJS
JS*/

#include<iostream>
#include<string>
using namespace std;

string stringCopies(string str, int n)
{
    string result = "";
    for (int i = 0; i < n; i++)
    {
        result += str;
    }
    return result;
}

int main()
{
    string s;
    int n;
    cout << "Input string: ";
    getline(cin, s);
    cout << "Input number of copies: ";
    cin >> n;
    cout << stringCopies(s, n) << endl;
    return 0;
}