/*Write a C++ program to check if three given numbers are in strict increasing order.
For example, 4, 7, 15, or 45, 56, 67, but not 4 ,5, 8 or 6, 6, 8.
However, if a fourth parameter is true, equality is allowed, such as 6, 6, 8 or 7, 7, 7.
Sample Input:
1, 2, 3, false
1, 2, 3, true
10, 2, 30, false
10, 10, 30, true
Sample Output:
1
1
0
1*/

#include <iostream>
using namespace std;

bool StrictIncreasing(int a, int b, int c, bool t)
{
    if (t)
    {
        return (a <= b && b <= c);
    }
    else
    {
        return (a < b && b < c);
    }
}

int main()
{
    int a, b, c;
    bool allowEqual;

    cout << "Input three numbers : ";
    cin >> a >> b >> c;
    cout << "Allow equality : ";
    cin >> allowEqual;

    cout << StrictIncreasing(a, b, c, allowEqual) << endl;

    return 0;
}