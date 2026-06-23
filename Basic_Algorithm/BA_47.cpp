/*Write a C++ program to check if two or more integers that are not negative have the same rightmost digit.
Sample Input:
11, 21, 31
11, 22, 31
11, 22, 33
Sample Output:
1
1
0*/

#include <iostream>
using namespace std;

bool test(int a, int b, int c)
{
    return a % 10 == b % 10 || a % 10 == c % 10 || b % 10 == c % 10;
}

int main()
{
    int a, b, c;
    cout << "Input three numbers: ";
    cin >> a >> b >> c;
    cout << test(a, b, c) << endl;
    return 0;
}