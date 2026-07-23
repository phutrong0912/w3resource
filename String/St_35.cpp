/*Write a C++ program to reverse all words that have odd lengths in a string.
Test Data:
("Exercises Practice Solution" ) -> "sesicrexE Practice Solution"
("The quick brown fox jumps over the lazy dog") -> "ehT kciuq nworb xof spmuj over eht lazy dog."*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string reverseOddWords(string s)
{
    string result;
    string word;
    for (int i = 0; i <= s.length(); i++)
    {
        if (i == s.length() || s[i] == ' ')
        {
            if (word.length() % 2 == 1)
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
    cout << reverseOddWords(s) << endl;
    return 0;
}
