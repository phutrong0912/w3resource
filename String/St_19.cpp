/*Write a C++ program to reverse only the vowels of a given string.
A vowel is a syllabic speech sound pronounced without any stricture in the vocal tract. Vowels are one of the two principal classes of speech sounds, the other being the consonant.
Example:
Original string: w3resource
After reversing the vowels of the said string: w3resuorce
Original string: Python
After reversing the vowels of the said string: Python
Original string: Hello
After reversing the vowels of the said string: Holle
Original string: USA
After reversing the vowels of the said string: ASU*/

#include <iostream>
#include <algorithm>
using namespace std;

bool Vowel(char c)
{
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

void reverseVowels(string &s)
{
    int left = 0, right = s.length() - 1;
    while (left < right)
    {
        while (left < right && !Vowel(s[left]))
            left++;
        while (left < right && !Vowel(s[right]))
            right--;
        if (left < right)
        {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }
}

int main(int argc, char const *argv[])
{
    string s;
    cout << "Input a string: ";
    cin >> s;
    reverseVowels(s);
    cout << "After reversing the vowels of the said string: " << s << endl;
    return 0;
}