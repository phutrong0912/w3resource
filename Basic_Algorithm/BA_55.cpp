/*Write a C++ program to check two integers and return the value nearest to 13 without crossing over. 
Return 0 if both numbers go over.
Sample Input:
4, 5
7, 12
10, 13
17, 33
Sample Output:
5
12
13
0*/

#include <iostream>
using namespace std;

int test(int a, int b)
{
    if (a > 13 && b > 13)
        return 0;

    if (a > 13)
        return b;

    if (b > 13)
        return a;

    return (13 - a < 13 - b) ? a : b;
}

int main()
{
    int a, b;
    cout << "Input 2 numbers: ";
    cin >> a >> b;
    cout <<test(a, b) << endl;
    return 0;
}