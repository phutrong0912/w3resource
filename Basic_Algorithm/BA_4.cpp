/*Write a C++ program to check a given integer and return true if it is within 10 of 100 or 200.
Sample Input:
103
90
89
Sample Output:
1
1
0*/

#include <iostream>
using namespace std;
bool check(int n)
{
    return (abs(100 - n) <= 10 || abs(200 - n) <= 10);
}
int main(int argc, char const *argv[])
{
    int n;
    cout << "Input n: ";
    cin >> n;
    cout << check(n) << endl;
    return 0;
}
