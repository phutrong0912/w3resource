/*Write a C++ program to print Floyd's Triangle. C & C++
Sample Output:
Input number of rows: 5                                               
1                                                                      
01                                                                     
101                                                                    
0101                                                                   
10101*/

#include <iostream>
using namespace std;

void floyd(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
                cout << "1";
            else
                cout << "0";
        }
        cout << endl;
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Input number of rows: ";
    cin >> n;
    floyd(n);
    return 0;
}