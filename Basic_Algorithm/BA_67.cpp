/*Write a C++ program to create a string using the two middle characters of a given string of even length (at least 2).
Sample Input:
"Hell"
"JS"
Sample Output:
el
JS*/

#include <iostream>
#include <string>
using namespace std;

string test(string str)
{
       return str.substr(str.length() / 2 - 1, 2);
}

int main(int argc, char const *argv[])
{
    string s;
    cout << "Input string: ";
    getline(cin,s);
    cout << test(s) << endl;
    return 0;
}
