/*Write a C++ program to create a new string without the first and last characters of a given string of any length.
Sample Input:
"Hello"
"JS"
""
Sample Output:
ell
*/

#include <iostream>
#include <string>
using namespace std;

string test(string str)
{
    if (str.length() <= 2)
        return "";
    return str.substr(1, str.length() - 2);
}

int main(int argc, char const *argv[])
{
    string s;
    cout << "Input string: ";
    getline(cin,s);
    cout << test(s) << endl;
    return 0;
}


