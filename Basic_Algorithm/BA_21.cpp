/*Write a C++ program to find the larger value from two positive integer values that is in the range 20..30 inclusive.
Also, return 0 if neither is in that range.
Sample Input:
78, 95
20, 30
21, 25
28, 28
Sample Output:
0
30
25
28*/

#include <iostream>
using namespace std;

int check(int a, int b)
{
    if ((a >= 20 && a <= 30) && (b >= 20 && b <= 30))
        return max(a, b);
    else if (a >= 20 && a <= 30)
        return a;
    else if (b >= 20 && b <= 30)
        return b;
    else
        return 0;
}
int main(int argc, char const *argv[])
{
    int a, b;
    cout << "Input two integers: ";
    cin >> a >> b;
    cout << check(a, b) << endl;
    return 0;
}
