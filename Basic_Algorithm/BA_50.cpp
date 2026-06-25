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

bool test(int x, int y) {
    int x1 = x / 10, x2 = x % 10;
    int y1 = y / 10, y2 = y % 10;
    return (x1 == y1 || x1 == y2 || x2 == y1 || x2 == y2);
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
