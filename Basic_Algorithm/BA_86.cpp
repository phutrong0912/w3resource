/*Write a C++ program to reverse a given array of integers of length 5.
Sample Input:
{ 0, 10, 20, 30, 40 }
Sample Output:
Reverse array:
40 30 20 10 0*/

#include <iostream>
using namespace std;

void ReverseArray(int arr[], int n) {
    for(int i = 0; i < n/2; i++) {
        swap(arr[i], arr[n-1-i]);
    }
}
int main(int argc, char const *argv[])
{
     int arr[5];
    cout << "Input elements: ";
    for (int i = 0; i < 5; i++)
        cin >> arr[i];
    ReverseArray(arr, 5);
    cout << "Array after reverse: ";
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}