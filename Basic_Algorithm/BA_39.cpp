/*Write a C++ program to test if a given non-negative number is a multiple of 13 or it is one more than a multiple of 13.
Sample Input:
13
14
27
41
Sample Output:
1
1
1
0*/

#include <iostream>
using namespace std;

bool check13(int n)
{
    return (n % 13 == 0 || n % 13 == 1);
}

int main()
{
    int n;
    cout << "Input a number: ";
    cin >> n;
    cout<<(check13(n)) << endl;
    return 0;
}