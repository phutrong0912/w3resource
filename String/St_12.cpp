/*Write a C++ program to insert a dash character (-) between two odd numbers in a given string of numbers.
Example:
Sample Input: 1345789
Sample Output: Result-> 1-345-789*/

#include <iostream>
#include <string>
using namespace std;

void insertDash(string s)
{
    cout << "Result -> ";
    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i];
        if (i < s.length() - 1)
        {
            int d1 = s[i] - '0';
            int d2 = s[i + 1] - '0';
            if (d1 % 2 != 0 && d2 % 2 != 0)
                cout << "-";
        }
    }

    cout << endl;
}

int main(int argc, char const *argv[])
{
    string s;
    cout << "Input a string of numbers: ";
    cin >> s;
    insertDash(s);
    return 0;
}
