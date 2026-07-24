/*A string is created using the letters of another string. Letters are case sensitive. Write a C++ program to verify 
that the letters in the second string appear in the first string. Return true otherwise false.
Test Data:
("CPP", "Cpp") -> false
("Java", "Ja") -> true
("Check first string", "sifC") ->true*/

#include <iostream>
#include <string>
using namespace std;

bool canCreate(string s1, string s2)
{
    int freq[256] = {0};
    for (int i = 0; i < s1.length(); i++)
        freq[(unsigned char)s1[i]]++;

    for (int i = 0; i < s2.length(); i++)
    {
        if (freq[(unsigned char)s2[i]] == 0)
            return false;

        freq[(unsigned char)s2[i]]--;
    }

    return true;
}

int main(int argc, char const *argv[])
{
    string s1, s2;
    cout << "Input first string: ";
    getline(cin, s1);
    cout << "Input second string: ";
    getline(cin, s2);
    if (canCreate(s1, s2))
        cout << "True";
    else
        cout << "False";
    return 0;
}
