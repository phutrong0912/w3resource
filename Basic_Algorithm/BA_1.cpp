/* Write a C++ program to compute the sum of two given integer values. 
If the two values are the same, then return triple their sum.
Sample Input
1, 2
3, 2
2, 2
Sample Output:
3
5
12*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int x,y;
    cout<<"Input x: ";
    cin>>x;
    cout<<"Input y: ";
    cin>>y;
    if (x == y)
    {
        cout << 3 * (x + y) << endl;
    }
    else
    {
        cout << x + y << endl;
    }
    return 0;
}

