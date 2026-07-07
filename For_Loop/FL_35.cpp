/*Write a program in C++ to display a pattern like a right angle triangle using an asterisk.
Sample Output:
Input number of rows: 5
*
**
***
****
******/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout << "Input number of rows: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++) 
        {
            cout << "*"; 
        }
        cout << endl; 
    }
    return 0;
}
