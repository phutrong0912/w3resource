/*Write a C++ program that checks whether a given string contains unique characters or not. Return true if the string contains unique characters otherwise false.
Test Data:
("Filename") -> 0
("abc") -> 1*/

#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
bool uniqueCharacters(string s)
{
    unordered_set<char> hashTable;
    for (int i = 0; i < s.length(); i++)
    {
        if (hashTable.find(s[i]) != hashTable.end())
            return false;
        hashTable.insert(s[i]);
    }
    return true;
}

int main(int argc, char const *argv[])
{
    string s;
    cout << "Input a string: ";
    getline(cin, s);
    cout << uniqueCharacters(s) << endl;
    return 0;
}
