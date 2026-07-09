/*Write a C++ program that displays the pattern like a pyramid using asterisks, with odd numbers in each row. Mathematics

Sample Output:
                                     
 Input number of rows: 5                                               
                                                                       
    *                                                                  
   ***                                                                 
  *****                                                                
 ******* 
*/
#include <iostream>
using namespace std;

void pyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
            cout << " ";
        for (int j = 1; j <= 2 * i - 1; j++)
            cout << "*";
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