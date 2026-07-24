/*Write a C++ program to count the number of duplicate characters in a given string.
Example:
Original String:
Total number of unique characters of the said two strings.
Number of duplicate characters in the said string: 36*/

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int countDuplicate(string s)
{
    unordered_map<char, int> freq;
    int count = 0;
    for (int i = 0; i < s.length(); i++)
        freq[s[i]]++;
    for (auto it = freq.begin(); it != freq.end(); it++)
    {
        if (it->second > 1)
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
