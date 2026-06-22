/*Write a C++ program to create another string which is n (non-negative integer) 
copies of the first 3 characters of a given string. 
If the length of the given string is less than 3 then return n copies of the string.
Sample Input:
"Python", 2
"Python", 3
"JS", 3
Sample Output:
PytPyt
PytPytPyt
JSJSJS*/

#include<iostream>
#include<string>
using namespace std;

string stringCopies(string str, int n)
{
    string result = "";
    for (int i = 0; i < n; i++)
    {
        result += str.substr(0, 3);
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