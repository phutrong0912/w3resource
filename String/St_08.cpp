/*Write a C++ program to count all the words in a given string.
Example:
Sample Input: Python
Sample Output: number of words -> 1*/

#include <iostream>
#include <string>
using namespace std;

int countWords(string s)
{
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != ' ' && (i == 0 || s[i - 1] == ' '))
        {
            count++;
        }
    }

    return count;
}

int main(int argc, char const *argv[])
{
    string s;
    cout << "Input a string: ";
    getline(cin, s);
    cout << "Number of words -> " << countWords(s) << endl;
    return 0;
}
