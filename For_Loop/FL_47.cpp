/*Write a program in C++ to display such a pattern for n number of rows using numbers. Odd numbers will appear in each row. The first and last number of each row will be 1 and the middle column will be the row number. 
Sample Output:                                      
 Input number of rows: 5                                               
                                                                       
    1                                                                  
   121                                                                 
  12321                                                                
 1234321                                                               
123454321*/


#include <iostream>
using namespace std;

void pattern(int n)
{
     for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << j;
        for (int j = i - 1; j >= 1; j--)
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