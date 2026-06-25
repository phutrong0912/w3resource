/*Write a C++ program to compute the sum of the three integers. 
If one of the values is 13 then do not count it and its right towards the sum.
Sample Input:
4, 5, 7
7, 4, 12
10, 13, 12
13, 12, 18
Sample Output:
16
23
10
0*/

#include <iostream>
using namespace std;

int sum(int a, int b, int c)
{
    int sum = 0;
    if (a != 13)
        sum += a;
    else
        return sum;
    if (b != 13)
        sum += b;
    else
        return sum;
    if (c != 13)
        sum += c;
    return sum;
}

int main()
{
    int a, b, c;
    cout << "Input 3 numbers: ";
    cin >> a >> b >> c;
    cout << sum(a, b, c) << endl;
    return 0;
}