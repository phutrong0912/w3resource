/*Write a C++ program to create a list from a given list of strings where each element has "$" added at the beginning and end position.
Test Data:
Sample Input:
{ "1", "2", "3" , "4" }
Expected Output:
$1$ $2$ $3$ $4$*/

#include <iostream>
#include <string>
using namespace std;

void add$(string a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "$" << a[i] << "$ ";
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Input number: ";
    cin >> n;
    string a[100];
    cout << "Input elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    add$(a, n);

    return 0;
}