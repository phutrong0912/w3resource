/*Write a C++ program to create an array containing the middle elements from the two given arrays of integers,
each of length 5.
Sample Input:
{0, 10, 20, 30, 40}
{0, -10, -20, -30, -40}
Sample Output:
New array:
20 -20*/

#include <iostream>
using namespace std;

void test(int a[], int b[], int result[],int n)
{

    int mid = n / 2;
    result[0] = a[mid];
    result[1] = b[mid];

    // result[0] = a[2]; 
    // result[1] = b[2]; 
}

int main(int argc, char const *argv[])
{
    int n=5;
    int a[5], b[5], result[2];
    cout << "Input elements array 1: ";
    for (int i = 0; i < 5; i++)
        cin >> a[i];
    cout << "Input elements array 2: ";
    for (int i = 0; i < 5; i++)
        cin >> b[i];
    test(a, b, result,n);
    cout << "New Array: " << result[0] << " " << result[1] << endl;
    return 0;
}