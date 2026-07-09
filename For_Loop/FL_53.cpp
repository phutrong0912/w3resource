/*Write a C++ program to display the pattern like right angle triangle with right justified digits. Mathematics

Sample Output:

 Input number of rows: 5                                               
    1                                                                  
   21                                                                  
  321                                                                  
 4321                                                                  
54321*/

#include <iostream>
using namespace std;

void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
            cout << " ";

        for (int j = i; j >= 1; j--)
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
