/*Write a C++ program that counts the number of unique characters in two given strings.
Example:
Original Strings:
String1: Python
String2: Java
Total number of unique characters of the said two strings: 9*/
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int countUnique(string s1, string s2)
{
    unordered_set<char> hashTable;
    for (int i = 0; i < s1.length(); i++)
        hashTable.insert(s1[i]);

    for (int i = 0; i < s2.length(); i++)
        hashTable.insert(s2[i]);

    return hashTable.size();
}

int main(int argc, char const *argv[])
{
    string s1, s2;
    cout << "Input first string: ";
    getline(cin, s1);
    cout << "Input second string: ";
    getline(cin, s2);
    cout << "Total number of unique characters of the said two strings: " << countUnique(s1, s2) << endl;
    return 0;
}