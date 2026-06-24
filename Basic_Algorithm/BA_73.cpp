/*Write a C++ program to create a new string from a given string after swapping the last two characters.
Sample Input:
"Hello"
"Python"
"PHP"
"JS"
"C"
Sample Output:
Helol
Pythno
PPH
SJ
C*/

#include <iostream>
#include <string>
using namespace std;

string swaplastChar(string str)
{
    int len = str.length();
    if (len < 2)
    {
        return str;
    }
    swap(str[len - 1], str[len - 2]);
    return str;
}
int main(int argc, char const *argv[])
{
    string s;
    cout<<"Input string: ";
    getline(cin,s);
    cout<<swaplastChar(s)<<endl;
    return 0;
}
