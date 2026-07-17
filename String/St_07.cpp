/*Write a C++ program to count all the vowels in a given string.
Example:
Sample Input: eagerer
Sample output: number of vowels -> 4*/

#include <iostream>
#include <string>
using namespace std;

int countVowels(string s)
{
    int count = 0;

    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
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
    cin >> s;
    cout << "Number of vowels -> " << countVowels(s) << endl;
    return 0;
}
