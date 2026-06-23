/*Write a C++ program to check two given integers. Each integer is in the range 10..99. Return true if a digit appears in both numbers, such as the 3 in 13 and 33.
Sample Input:
11, 21
11, 20
10, 10
Sample Output:
1
0
1*/
#include <iostream>
using namespace std;

bool test(int x, int y)
{
    return x / 10 == y / 10 || x / 10 == y % 10 || x % 10 == y / 10 || x % 10 == y % 10;
}

int main(int argc, char const *argv[])
{
    int a, b;
    cout << "Input 2 numbers: ";
    cin >> a >> b;
    cout << test(a, b) << endl;
    return 0;
    return 0;
}
