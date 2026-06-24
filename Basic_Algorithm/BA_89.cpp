/*Write a C++ program to determine whether a given array of integers of length 2 contains 15 or 20.
Sample Input:
{ 12, 20 }
{ 14, 15 }
{ 11, 21 }
Sample Output:
1
1
0*/

#include <iostream>
using namespace std;

bool test(int a, int b)
{
    return a == 15 || a == 20 || b == 15 || b == 20;
}

int main(int argc, char const *argv[])
{
    int a, b;
    cout << "Input elements: ";
    cin >> a >> b;
    cout << (test(a, b)) << endl;
    return 0;
}
