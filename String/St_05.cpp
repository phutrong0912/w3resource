/*Write a C++ program to sort characters (numbers and punctuation symbols are not included) in a string.
Example:
Sample Input: python
Sample Output: hnopty*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string sortCharacters(string str)
{
    string result;
    for (char c : str)
    {
        if (isalpha(c))
            result += c;
    }
    sort(result.begin(), result.end());
    return result;
}

int main(int argc, char const *argv[])
{
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    cout << "The sorted string is: " << sortCharacters(s) << endl;
    return 0;
}