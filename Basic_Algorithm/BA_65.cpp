/*Write a C++ program to move the first two characters to the end of a given string of length at least two.
Sample Input:
"Hello"
"JS"
Sample Output:
lloHe
JS*/

#include <iostream>
#include <string>
using namespace std;

string test(string str)
{
    if (str.length() < 2)
        return str;
    return str.substr(2) + str.substr(0, 2);
}

int main()
{
    string s;
    cout << "Input string: ";
    getline(cin,s);
    cout << test(s) << endl;
    return 0;
}