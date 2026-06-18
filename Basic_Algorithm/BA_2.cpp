/*Write a C++ program to find the absolute difference between n and 51. 
If n is greater than 51 return triple the absolute difference.
Sample Input:
53
30
51
Sample Output:
6
21
0*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout << "Input n: ";
    cin >> n;
    if (n > 51)
    {
        cout << 3 * (n - 51) << endl;
    }
    else
    {
        cout << 51 - n << endl;
    }
    return 0;
}