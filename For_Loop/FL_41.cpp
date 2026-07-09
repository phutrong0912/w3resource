/*Write a C++ program to make such a pattern, like a pyramid, with a repeating number.

Sample Output:

 Input number of rows: 5                                               
        1                                                              
       2 2                                                             
      3 3 3                                                            
     4 4 4 4                                                           
    5 5 5 5 5  */

#include <iostream>
using namespace std;

void pyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << i << " ";
        cout << endl;
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Input number of rows: ";
    cin >> n;
    pyramid(n);
    return 0;
}