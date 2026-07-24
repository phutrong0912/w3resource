/*Write a C++ program that takes a string and reverses the words of three or more lengths in a string. Return the updated string. As input characters, only spaces and letters are permitted.
Example:
Original string: The quick brown fox jumps over the lazy dog
Reverse the words of three or more lengths of the said string:
ehT kciuq nworb xof spmuj revo eht yzal god*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string reverseWords(string s)
{
    string result;
    string word;
    for (int i = 0; i <= s.length(); i++)
    {
        if (i == s.length() || s[i] == ' ')
        {
            if (word.length() >= 3)
                reverse(word.begin(), word.end());

            result += word;

            if (i != s.length())
                result += ' ';

            word.clear();
        }
        else
        {
            word += s[i];
        }
    }
    return result;
}

int main(int argc, char const *argv[])
{
    string s;
    cout << "Input a string: ";
    getline(cin, s);
    cout << "Reverse the words of three or more lengths of the said string:\n";
    cout << reverseWords(s) << endl;
    return 0;
}
