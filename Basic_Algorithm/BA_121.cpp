/*Write a C++ program to create an array from a given array of strings using all the strings whose lengths are matched with the given string length.
Test Data:
({a,aaa,b,bb,bbb,c,cc,ccc},1) -> {a,b,c}
({a,aaa,b,bb,bbb,c,cc,ccc},2) -> {bb, cc}*/

#include <iostream>
#include <string>
using namespace std;

int create(string a[], int n, int len, string result[])
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i].length() == len)
        {
            result[count] = a[i];
            count++;
        }
    }

    return count;
}
int main(int argc, char const *argv[])
{
    string s[100];
    int n = 8, len;
    string result[5];
    cout << "Input strings: ";
    for (int i = 0; i < n; i++)
        cin >> s[i];
    cout << "Input length: ";
    cin >> len;

    int m =create(s, n, len, result);

    cout << "New array: ";
    for (int i = 0; i < m; i++)
        cout << result[i] << " ";

    cout << endl;

    return 0;
}