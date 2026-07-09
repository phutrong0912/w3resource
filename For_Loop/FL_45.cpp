/*Write a C++ program to display Pascal's triangle like a pyramid.

Sample Output:

 Input number of rows: 5                                               
          1                                                            
        1   1                                                          
      1   2   1                                                        
    1   3   3   1                                                      
  1   4   6   4   1 */

#include <iostream>
using namespace std;

void Pascal(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
            cout << "  ";
        double value = 1;

        for (int j = 0; j <= i; j++)
        {
            cout << value << "   ";
            value = value * (i - j) / (j + 1);
        }
        cout << endl;
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Input number of rows: ";
    cin >> n;
    Pascal(n);
    return 0;
}