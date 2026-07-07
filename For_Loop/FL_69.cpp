/*Write a program in C++ to produce a square matrix with 0's down the main diagonal, 1's in the entries just above and below the main diagonal, 2's above and below that, etc.
0 1 2 3 4
1 0 1 2 3
2 1 0 1 2
3 2 1 0 1
4 3 2 1 0
Sample Output:    
Input number or rows: 8                                                                                      
0  1  2  3  4  5  6  7                                                                                        
1  0  1  2  3  4  5  6                                                                                        
2  1  0  1  2  3  4  5                                                                                        
3  2  1  0  1  2  3  4                                                                                        
4  3  2  1  0  1  2  3                                                                                        
5  4  3  2  1  0  1  2                                                                                        
6  5  4  3  2  1  0  1                                                                                        
7  6  5  4  3  2  1  0 */

#include <iostream>
#include <cmath>
using namespace std;

void matrix(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << abs(i - j) << " ";
        }
        cout << endl;
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Input number of rows: ";
    cin >> n;
    matrix(n);
    return 0;
}
