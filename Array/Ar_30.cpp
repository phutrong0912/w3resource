/*Write a C++ program to find the third largest string in a given array of strings.*/
#include <iostream>
#include <string>
using namespace std;
string thirdLargest(string arr[], int n)
{
    string first = "", second = "", third = "";

    for (int i = 0; i < n; i++)
    {
        if (arr[i].length() > first.length())
        {
            third = second;
            second = first;
            first = arr[i];
        }
        else if (arr[i].length() > second.length())
        {
            third = second;
            second = arr[i];
        }
        else if (arr[i].length() > third.length())
        {
            third = arr[i];
        }
    }
    return third;
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Input number of strings: ";
    cin >> n;
    string arr[n];
    cout << "Input strings:";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Third largest string: " << thirdLargest(arr, n);

    return 0;
}
