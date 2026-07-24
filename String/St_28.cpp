/*Write a C++ program to extract the first specified number of vowels from a given string. If the specified number is less than the number of vowels present in the text, display "n is less than the number of vowels present in the string".
Example:
Input a string:
Input a number:
Extract the first n number of vowels from the said string:
n is less than number of vowels present in the string!*/

#include <iostream>
#include <string>
using namespace std;

bool Vowel(char c)
{
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}
void extractVowels(string s, int n)
{
    int total = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (Vowel(s[i]))
            total++;
    }
    if (n > total)
    {
        cout << "n is greater than number of vowels present in the string!";
        return;
    }
    cout << "Extract the first " << n << " number of vowels from the said string: " << endl;

    int count = 0;

    for (int i = 0; i < s.length() && count < n; i++)
    {
        if (Vowel(s[i]))
        {
            cout << s[i];
            count++;
        }
    }
}

int main(int argc, char const *argv[])
{
    string s;
    int n;
    cout << "Input a string: ";
    getline(cin, s);
    cout << "Input a number: ";
    cin >> n;
    extractVowels(s, n);
    return 0;
}
