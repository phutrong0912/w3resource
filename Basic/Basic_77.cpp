/*There are four different points on a plane: A(x1, y1), B(x2, y2), C(x3, y3) and D(x4, y4).

Write a C++ program to check whether two straight lines AB and CD are orthogonal or not.
Input:
0 6
5 6
3 8
3 2
Output:
yes*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    double x1, x2, x3, x4, y1, y2, y3, y4;
    cout << "Input A: ";
    cin >> x1 >> y1;
    cout << "Input B: ";
    cin >> x2 >> y2;
    cout << "Input C: ";
    cin >> x3 >> y3;
    cout << "Input D: ";
    cin >> x4 >> y4;

    double dx1 = (x2 - x1);
    double dx2 = (x4 - x3);
    double dy1 = (y2 - y1);
    double dy2 = (y4 - y3);
    double m = dx1 * dx2 + dy1 * dy2;
    if (m == 0)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}
