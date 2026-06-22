/*Write a C++ program that accepts two integers and returns true if either one is 5 or their sum or difference is 5.
Sample Input:
5, 4
4, 3
1, 4
Sample Output:
1
0
1*/

#include <iostream>
#include <cstdlib>
using namespace std;

bool check5(int a, int b)
{
    return (a == 5 || b == 5 || a + b == 5 || abs(a - b) == 5);
}

int main()
{
    int a, b;
    cout << "Input two numbers: ";
    cin >> a >> b;
    cout << (check5(a, b)) << endl;
    return 0;
}