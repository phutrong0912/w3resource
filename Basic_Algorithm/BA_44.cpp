/*Write a C++ program to check if it is possible to add two integers to get the third integer from three given integers.
Sample Input:
1, 2, 3
4, 5, 6
-1, 1, 0
Sample Output:
1
0
1*/

#include <iostream>
using namespace std;

bool sumPermutation(int a, int b, int c)
{
    return (a + b == c || a + c == b || b + c == a);
}

int main()
{
    int a, b, c;
    cout << "Input three numbers: ";
    cin >> a >> b >> c;
    cout <<(sumPermutation(a, b, c)) << endl;
    return 0;
}