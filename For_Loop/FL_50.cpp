/*Write a C++ program to print a pattern in which the highest number of columns appears in the first row.
Sample Output:

 Input the number of rows: 5                                                                                  
12345                                                                                                         
2345                                                                                                          
345                                                                                                           
45                                                                                                            
5*/

#include <iostream>
using namespace std;

void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
            cout << j;
        cout << endl;
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Input the number of rows: ";
    cin >> n;
    pattern(n);
    return 0;
}
