/*Write a C++ program to create the string of the characters at indexes 0,1,4,5,8,9 ... from a given string.
Sample Input:
"Python"
"JavaScript"
"HTML"
Sample Output:
Pyon
JaScpt
HT*/

#include <iostream>
#include <string>
using namespace std;

string createString(string str)
{
    string result = "";
    for (size_t i = 0; i < str.length(); i++)
    {
        if (i % 4 == 0 || i % 4 == 1)
            result += str[i];
    }
    return result;
}

int main()
{
    string s;
    cout << "Input a string: ";
    getline(cin, s);
    cout << createString(s) << endl;
    return 0;
}