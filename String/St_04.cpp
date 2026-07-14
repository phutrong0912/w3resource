/*Write a C++ program to find the largest word in a given string.
Example:
Sample Input: C++ is a general-purpose programming language.
Sample Output: programming*/

#include <iostream>
#include <string>
using namespace std;

string largestWord(const string &str)
{
    string longest, current;
    for (int i = 0; i <= str.length(); i++)
    {
        if (i == str.length() || !isalpha(str[i]))
        {
            if (current.length() > longest.length())
                longest = current;
            current.clear();
        }
        else
        {
            current += str[i];
        }
    }
    return longest;
}

int main(int argc, char const *argv[])
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "The largest word is: " << largestWord(str) << endl;
    return 0;
}
