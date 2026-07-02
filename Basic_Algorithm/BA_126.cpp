/*Write a C++ program to create a list from a given list of strings where each element has "$" added at the beginning and end position.
Test Data:
Sample Input:
{ "1", "2", "3" , "4" }
Expected Output:
$1$ $2$ $3$ $4$*/

#include <iostream>
#include <string>
using namespace std;

void add$(string a[], int n, string result[])
{
    for (int i = 0; i < n; i++)
    {
        result[i] = "$" + a[i] + "$";
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Input number: ";
    cin >> n;
    string a[100], result[100];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    add$(a, n, result);

    for (int i = 0; i < n; i++)
        cout << result[i] << " ";

    cout << endl;

    return 0;
}