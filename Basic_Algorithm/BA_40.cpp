/*Write a C++ program to check if a given number that is not negative is a multiple of 3 or 7, but not both.
Sample Input:
3
7
21
Sample Output:
1
1
0*/

#include <iostream>
using namespace std;

bool check3or7(int n)
{
    bool div3 = (n % 3 == 0);
    bool div7 = (n % 7 == 0);
    return div3 != div7;
}

int main()
{
    int n;
    cout << "Input a number: ";
    cin >> n;
    cout << (check3or7(n)) << endl;
    return 0;
}