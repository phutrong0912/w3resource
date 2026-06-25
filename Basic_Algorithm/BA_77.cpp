/*Write a C++ program to create a new string using 3 copies of the first 2 characters of a given string.
If the length of the given string is less than 2 use the whole string.
Sample Input:
"abc"
"Python"
"J"
Sample Output:
ababab
PyPyPy
JJJ*/

#include <iostream>
#include <string>
using namespace std;

string test(string str)
{
    if (str.length() < 2)
        return str + str + str;
    string front = str.substr(0, 2);
    return front + front + front;
}
int main(int argc, char const *argv[])
{
    string s;
    cout<<"Input string: ";
    getline(cin,s);
    cout<<test(s)<<endl;
    return 0;
}
