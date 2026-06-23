/*Write a C++ program to create another string made of every other character starting with the first from a given string.
Sample Input:
"Python"
"PHP"
"JS"
Sample Output:
Pto
PP
J*/

#include <iostream>
#include <string>
using namespace std;

string check(string str)
{
    string result = "";
    for (int i = 0; i < str.length(); i += 2)
    {
        result += str[i];
    }
    return result;
}
int main(int argc, char const *argv[])
{
    string s;
    cout << "Input string: ";
    getline(cin, s);
    cout << check(s) << endl;
    return 0;
}
