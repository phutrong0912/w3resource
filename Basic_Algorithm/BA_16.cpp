/*Write a C++ program to check whether two given integer values are in the range 20..50 inclusive. 
Return true if 1 or other is in the range, otherwise false.
20, 84
14, 50
11, 45
25, 40
Sample Output:
1
1
1
0*/

#include <iostream>
using namespace std;

bool check(int a, int b)
{
    return (a <= 20 || b >= 50) || (b <= 20 || a >= 50);
}
int main(int argc, char const *argv[])
{
    int a, b;
    cout << "Input two integers: ";
    cin >> a >> b;
    cout << check(a, b) << endl;
    return 0;
}