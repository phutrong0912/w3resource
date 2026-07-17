/*Write a C++ program to capitalize the first letter of each word in a given string. Words must be separated by only one space.
Example:
Sample Input: cpp string exercises
Sample Output: Cpp String Exercises*/

#include <iostream>
#include <string>
using namespace std;

string capitalizeWords(string str)
{
    for (int i = 0; i < str.length(); i++)
    {

        if (i == 0 || str[i - 1] == ' ')
        {
            str[i] = toupper(str[i]);
        }
    }
    return str;
}
int main(int argc, char const *argv[])
{
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    cout << capitalizeWords(s) << endl;
    return 0;
}
