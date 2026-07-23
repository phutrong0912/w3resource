/*Write a C++ program to count the number of duplicate characters in a given string.
Example:
Original String:
Total number of unique characters of the said two strings.
Number of duplicate characters in the said string: 36*/

#include <iostream>
#include <string>
using namespace std;

int countDuplicate(string s)
{
    int freq[256] = {0};
    int count = 0;
    for (int i = 0; i < s.length(); i++)
        freq[(unsigned char)s[i]]++;

    for (int i = 0; i < 256; i++)
    {
        if (freq[i] > 1)
            count++;
    }
    return count;
}

int main(int argc, char const *argv[])
{
    string s;
    cout << "Input a string: ";
    getline(cin, s);
    cout << "Number of duplicate characters in the said string: "<< countDuplicate(s) << endl;
    return 0;
}
