/*Write a C++ program to count the number of strings with a given length in a given array of strings.
Test Data:
({"a", "b", "bb", "c", "ccc" }, 1) ->3
({"a", "b", "bb", "c", "ccc" }, 2) ->1
({"a", "b", "bb", "c", "ccc" }, 3) ->1*/

#include <iostream>
#include <string>
using namespace std;

int length(string a[], int n, int len)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i].length() == len)
            count++;
    }
    return count;
}
int main(int argc, char const *argv[])
{
    int n, len;
    cout << "Input number string: ";
    cin >> n;
    string s[100];
    cout << "Input strings: ";
    for (int i = 0; i < n; i++)
        cin >> s[i];
    cout << "Input length: ";
    cin >> len;
    cout << length(s, n, len) << endl;
    return 0;
}
