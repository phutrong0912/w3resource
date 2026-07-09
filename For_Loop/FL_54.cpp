/*Write a program in C++ to display the pattern like pyramid, power of 2.
Sample Output:

                    
Input the number of rows: 5
                 1
              1  2  1
           1  2  4  2  1
        1  2  4  8  4  2  1
	1	2  4  8  16  8  4  2  1  
*/

#include <iostream>
using namespace std;

void pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
            cout << "   ";

        double value = 1;
        for (int j = 0; j <= i; j++)
        {
            cout << value << " ";
            value *= 2;
        }
        value /= 4;
        for (int j = 0; j < i; j++)
        {
            cout << value << " ";
            value /= 2;
        }
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
