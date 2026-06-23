/*Write a C++ program to check whether three given integer values are in the range 20..50 inclusive. Return true if 1 or more of them are in the range, otherwise false.
Sample Input:
11, 20, 12
30, 30, 17
25, 35, 50
15, 12, 8
Sample Output:
1
1
1
0*/

#include <iostream>
using namespace std;
bool check(int a, int b, int c)
{
    return (a >= 20 && a <= 50) || (b >= 20 && b <= 50) || (c >= 20 && c <= 50);
}
int main(int argc, char const *argv[])
{
    int a, b, c;
    cout << "Input three integers: ";
    cin >> a >> b >> c;
    cout << check(a, b, c) << endl;
    return 0;
}


