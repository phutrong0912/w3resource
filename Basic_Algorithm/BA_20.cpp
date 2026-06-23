/*Write a C++ program to check whether two given integers are in the range 40..50 inclusive,
or they are both in the range 50..60 inclusive.
Sample Input:
78, 95
25, 35
40, 50
55, 60
Sample Output:
0
0
1
1*/

#include <iostream>
using namespace std;

bool check(int a, int b)
{
    return (a >= 40 && a <= 50 && b >= 40 && b <= 50) || (a >= 50 && a <= 60 && b >= 50 && b <= 60);
}
int main(int argc, char const *argv[])
{
    int a, b;
    cout << "Input two integers: ";
    cin >> a >> b;
    cout << check(a, b) << endl;
    return 0;
}
