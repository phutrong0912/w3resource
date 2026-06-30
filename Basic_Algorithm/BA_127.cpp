/*Write a C++ program to create a list from a given list of strings where each element is replaced by 3 copies of the string concatenated together.
Test Data:
Sample Input:
{ "1", "2", "3" , "4" }
Expected Output :
111 222 333 444*/

#include <iostream>
#include <string>
using namespace std;

void Copies(string a[], int n, string result[])
{
    for (int i = 0; i < n; i++)
    {
        result[i] = a[i] + a[i] + a[i];
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

    Copies(a, n, result);

    for (int i = 0; i < n; i++)
        cout << result[i] << " ";

    cout << endl;

    return 0;
}