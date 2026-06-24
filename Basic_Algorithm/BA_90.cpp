/*Write a C++ program to check if an array of integers with length 2 does not contain 15 or 20.
Sample Input:
{ 12, 20 }
{ 14, 15 }
{ 11, 21 }
Sample Output:
0
0
1*/
#include <iostream>
using namespace std;

bool test(int a, int b) {
    return !(a == 15 || a == 20 || b == 15 || b == 20);
}

int main(int argc, char const *argv[])
{
     int a, b;
    cout << "Input elements: ";
    cin >> a >> b;
    cout << (test(a, b)) << endl;
    return 0;
    return 0;
}
