/*Write a C++ program to check if y is greater than x, and z is greater than y from three given integers x,y,z.
Sample Input:
1, 2, 3
4, 5, 6
-1, 1, 0
Sample Output:
1
1
0*/

#include <iostream>
using namespace std;

bool check(int a, int b, int c)
{
    return ((a < b && b < c) || (a > b && b > c));
}

int main()
{
    int a, b, c;
    cout << "Input three numbers: ";
    cin >> a >> b >> c;
    cout << (check(a, b, c)) << endl;
    return 0;
}