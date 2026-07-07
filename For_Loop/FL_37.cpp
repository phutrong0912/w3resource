/*Write a C++ program that makes a pattern such as a right angle triangle using numbers that repeat.
Sample Output:
Input number of rows: 5
1
22
333
4444
55555 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout << "Input number of rows: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++) 
        {
            cout << i; 
        }
        cout << endl; 
    }
    return 0;
}
