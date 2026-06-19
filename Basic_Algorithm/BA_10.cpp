/*Write a C++ program to check if a given positive number is a multiple of 3 or a multiple of 7.
Sample Input
3
14
12
37
Sample Output:
1
1
1
1
0*/

#include <iostream>
using namespace std;

bool check(int n)
{
    return (n % 3 == 0 || n % 7 == 0);
}
int main(int argc, char const *argv[])
{
    int n;
    cout << "Input n: ";
    cin >> n;
    cout << check(n) << endl;
    return 0;
}