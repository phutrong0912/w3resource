/*Write a C++ program that displays the pattern with the highest columns in the first row and digits with the right justified digits.

Sample Output:

 Input number of rows: 5                                                                                      
12345                                                                                                         
 1234                                                                                                         
  123                                                                                                         
   12                                                                                                         
    1 */

#include <iostream>
using namespace std;

void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
            cout << " ";
        for (int j = 1; j <= n - i + 1; j++)
            cout << j;

        cout << endl;
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Input number of rows: ";
    cin >> n;
    pattern(n);
    return 0;
}
