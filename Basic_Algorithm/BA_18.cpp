/*Write a C++ program to check the largest number among three given integers.
Sample Input:
1,2,3
1,3,2
1,1,1
1,2,2
Sample Output:
3
3
1
2*/

#include <iostream>
using namespace std;

int largest(int a, int b, int c)
{
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}
int main(int argc, char const *argv[])
{
    int a, b, c;
    cout << "Input three integers: ";
    cin >> a >> b >> c;
    cout << largest(a, b, c) << endl;
    return 0;
}
