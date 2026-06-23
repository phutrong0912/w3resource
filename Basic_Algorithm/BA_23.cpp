/*Write a C++ program to check if two given non-negative integers have the same last digit.
Sample Input:
123, 456
12, 512
7, 87
12, 45
Sample Output:
0
1
1
0*/

#include <iostream>
using namespace std;

bool lastDigit(int a, int b)
{
    return (a % 10) == (b % 10);
}
int main(int argc, char const *argv[])
{
    int a, b;
    cout << "Input two non-negative integers: ";
    cin >> a >> b;
    cout << lastDigit(a, b) << endl;
    return 0;
}