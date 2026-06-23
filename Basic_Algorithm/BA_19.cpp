/*Write a C++ program to check which number is closest to the value 100 among two given integers. Return 0 if the two numbers are equal.
Sample Input:
78, 95
95, 95
99, 70
Sample Output:
95
0
99*/

#include <iostream>
#include <cmath>
using namespace std;

int closest(int a, int b)
{
    if (a == b)
        return 0;
    else if (abs(100 - a) < abs(100 - b))
        return a;
    else
        return b;
}
int main(int argc, char const *argv[])
{
    int a, b;
    cout << "Input two integers: ";
    cin >> a >> b;
    cout << closest(a, b) << endl;
    return 0;
}