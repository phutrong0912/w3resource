/*Write a C++ program to create a string that is 4 copies of the 2 front characters of a given string. If the given string length is less than 2 return the original string.
Sample Input:
"C Sharp"
"JS"
"a"
Sample Output:
C C C C
JSJSJSJS
a*/

#include <iostream>
#include <string>
using namespace std;

string Copy(string str)
{
    if (str.length() < 2)
        return str;
    string front = str.substr(0, 2);
    return front + front + front + front;
}

int main(int argc, char const *argv[])
{
    string s;
    cout << "Input string: ";
    getline(cin, s);
    cout << Copy(s) << endl;
    return 0;
}