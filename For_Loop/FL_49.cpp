/*Write a C++ program to print a pyramid of digits as shown below for n number of lines.
    1
   232
  34543
 4567654
567898765
Sample Output:
 Input the number of rows: 5
    1
   232
  34543
 4567654
567898765
*/

#include <iostream>
using namespace std;

void pyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
            cout << " ";
        for (int j = i; j <= 2 * i - 1; j++)
            cout << j;
        for (int j = 2 * i - 2; j >= i; j--)
            cout << j;

        cout << endl;
    }
}
int main(int argc, char const *argv[])
{
     int n;
    cout << "Input the number of rows: ";
    cin >> n;
    pyramid(n);
    return 0;
}
