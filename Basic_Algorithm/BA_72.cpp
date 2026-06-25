/*Write a C++ program to create a string taking the first character from a string and the last character from another given string.
If the length of any given string is 0, use '#' as its missing character.
Sample Input:
"Hello", "Hi"
"Python", "PHP"
"JS", "JS"
"Csharp", ""
Sample Output:
Hi
PP
JS
C#*/

#include <iostream>
#include <string>
using namespace std;

string createString(string s1, string s2)
{
    string first = s1.empty() ? "#" : string(1, s1[0]);
    string last = s2.empty() ? "#" : string(1, s2.back());
    return first + last;
}

int main(int argc, char const *argv[])
{
    string s1, s2;
    cout << "Input string 1: ";
    getline(cin, s1);
    cout << "Input string 2: ";
    getline(cin, s2);
    cout << createString(s1, s2)<<endl;
    return 0;
}
