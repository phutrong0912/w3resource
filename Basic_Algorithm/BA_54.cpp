/*Write a C++ program to compute the sum of the three given integers. 
Except for 13 and 17, any value in the range 10..20 inclusive counts as 0.
Sample Input:
4, 5, 7
7, 4, 12
10, 13, 12
17, 12, 18
Sample Output:
16
11
13
17*/

#include <iostream>
using namespace std;

int fix(int n)
{
    return (n >= 10 && n <= 20 && n != 13 && n != 17) ? 0 : n;
}

int sum(int a, int b, int c)
{
    return fix(a) + fix(b) + fix(c);
}

int main()
{
    int a, b, c;
    cout<<"Input 3 numbers: ";
    cin >> a >> b >> c;
    cout << sum(a, b, c)<<endl;
    return 0;
}