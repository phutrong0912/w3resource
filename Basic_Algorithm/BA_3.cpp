/*Write a C++ program to check two given integers, and return true if one of them is 30 or if their sum is 30.
Sample Input:
30, 0
25, 5
20, 30
20, 25
Sample Output:
1
1
1
0*/

#include <iostream>
using namespace std;

bool check(int x, int y)
{
    return (x == 30 || y == 30 || x + y == 30);
}

int main(int argc, char const *argv[])
{
    int x, y;
    cout << "Input x: ";
    cin >> x;
    cout << "Input y: ";
    cin >> y;
    cout << check(x, y) << endl;
    return 0;
}