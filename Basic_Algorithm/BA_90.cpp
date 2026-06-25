/*Write a C++ program to check if an array of integers with length 2 does not contain 15 or 20.
Sample Input:
{ 12, 20 }
{ 14, 15 }
{ 11, 21 }
Sample Output:
0
0
1*/
#include <iostream>
using namespace std;

bool test(int arr[], int n) {
   return n == 2 && arr[0] != 15 && arr[0] != 20 && arr[1] != 15 && arr[1] != 20;
}

int main(int argc, char const *argv[])
{
    int arr[2];
    cout << "Input elements: ";
    cin >> arr[0] >> arr[1];
    cout << test(arr, 2) << endl;
    return 0;
}
