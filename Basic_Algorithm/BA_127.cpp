/*Write a C++ program to create a list from a given list of strings where each element is replaced by 3 copies of the string concatenated together.
Test Data:
Sample Input:
{ "1", "2", "3" , "4" }
Expected Output :
111 222 333 444*/

#include <iostream>
#include <string>
using namespace std;

void Copies(string a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] + a[i] + a[i] << " ";
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
    Copies(a, n);

    return 0;
}