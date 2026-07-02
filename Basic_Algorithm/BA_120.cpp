/*Write a C++ program to create an array using the first n strings from a given array of strings. (n>=1 and <=length of the array).
Test Data:
({"a", "b", "bb", "c", "ccc" }, 2) -> {"a", "b"}
({"a", "b", "bb", "c", "ccc" }, 3) -> {"a", "b", "bb"}*/

#include <iostream>
#include <string>
using namespace std;

void create(string a[], int n, int k, string result[])
{
    if (k < 1 || k > n)
        return;

    for (int i = 0; i < k; i++)
        result[i] = a[i];
}

int main()
{
    string s[100];
    int n = 5, k;
    string result[5];
    cout << "Input strings: ";
    for (int i = 0; i < n; i++)
        cin >> s[i];
    cout << "Input k: ";
    cin >> k;

    create(s, n, k, result);

    cout << "New array: ";
    for (int i = 0; i < k; i++)
        cout << result[i] << " ";

    cout << endl;

    return 0;
}