/*Write a C++ program that counts the number of unique characters in two given strings.
Example:
Original Strings:
String1: Python
String2: Java
Total number of unique characters of the said two strings: 9*/

#include<iostream>
#include<string>
using namespace std;

int countUnique(string s1, string s2)
{
    bool freq[256] = {false};
    int count = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        if (!freq[(unsigned char)s1[i]])
        {
            freq[(unsigned char)s1[i]] = true;
            count++;
        }
    }

    for (int i = 0; i < s2.length(); i++)
    {
        if (!freq[(unsigned char)s2[i]])
        {
            freq[(unsigned char)s2[i]] = true;
            count++;
        }
    }
    return count;
}
int main(int argc, char const *argv[])
{
    string s1, s2;
    cout << "Input first string: ";
    getline(cin,s1);
    cout << "Input second string: ";
    getline(cin,s2);
    cout << "Total number of unique characters of the said two strings: " << countUnique(s1, s2) << endl;
    return 0;
}