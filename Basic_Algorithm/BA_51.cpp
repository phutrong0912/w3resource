/*Write a C++ program to compute the sum of two given non-negative integers x and y as long as the sum has the same number of digits as x. If the sum has more digits than x, return x without y.
Sample Input:
4, 5
7, 4
10, 10
Sample Output:
9
7
20*/

#include <iostream>
#include <string>
using namespace std;

int test(int x, int y)
{
    int sum = x + y;
    string sx = to_string(x);
    string ss = to_string(sum);
    return (ss.length() > sx.length()) ? sum : x;
}

int main()
{
    int x, y;
    cout << "Input 2 numbers: ";
    cin >> x >> y;
    cout << test(x, y) << endl;
    return 0;
}