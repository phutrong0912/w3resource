/*Write a C++ program to make such a pattern like a pyramid with numbers increased by 1.
Sample Output:
 Input number of rows: 4                                               
       1                                                               
      2 3                                                              
     4 5 6                                                             
    7 8 9 10 */
#include <iostream>
using namespace std;

void pyramid(int n)
{
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << num++ << " ";
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Input number of rows: ";
    cin >> n;
    pyramid(n);
    return 0;
}