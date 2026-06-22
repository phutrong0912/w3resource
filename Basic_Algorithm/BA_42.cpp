/*Write a C++ program to compute the sum of the two given integers.
Return 18 if one of the given integer values is in the range 10..20 inclusive.
Sample Input:
3, 7
10, 11
10, 20
21, 220
Sample Output:
10
18
18
241*/

#include <iostream>
using namespace std;

int Sum(int a, int b)
{
    if ((a >= 10 && a <= 20) || (b >= 10 && b <= 20))
        return 18;
    return a + b;
}

int main()
{
    int a, b;
    cout << "Input two numbers: ";
    cin >> a >> b;
    cout << Sum(a, b) << endl;
    return 0;
}