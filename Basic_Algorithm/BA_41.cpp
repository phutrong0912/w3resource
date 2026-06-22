/*Write a C++ program to check if a given number is within 2 of a multiple of 10.
Sample Input:
3
7
8
21
Sample Output:
0
0
1
1*/

#include <iostream>
#include <cstdlib>
using namespace std;

bool Multiple10(int n)
{
    int mod = abs(n % 10);
    return (mod <= 2 || mod >= 8);
}

int main()
{
    int n;
    cout << "Input a number: ";
    cin >> n;
    cout << (Multiple10(n)) << endl;
    return 0;
}