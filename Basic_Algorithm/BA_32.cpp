/*Write a C++ program to compare two given strings and return the number of positions
where they contain the same  length 2 substring.
Sample Input:
{ 5, 5, 1, 15, 15 }
{ 15, 2, 3, 4, 15 }
{ 3, 3, 15, 15, 5, 5}
{ 1, 5, 15, 7, 8, 15}
Sample Output:
1
0
1
0*/

#include <iostream>
using namespace std;
bool found(int numbers[], int arr_length)
{
    for (int i = 0; i < arr_length - 1; i++)
    {
        if (numbers[i + 1] == numbers[i])
        {
            return true;
        }
    }
    return false;
}
int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the size of the arrays: ";
    cin >> n;
    int arr[100];
    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << found(arr, n) << endl;
    return 0;
}
