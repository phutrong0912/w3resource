/*Write a program in C++ to calculate the sum of the series (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n).

Sample Output:
Input the value for nth term: 5
1*1 = 1
2*2 = 4
3*3 = 9
4*4 = 16
5*5 = 25
The sum of the above series is: 55*/

#include <iostream>
using namespace std;

int sum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int t = i * i;
        cout << i << "*" << i << " = " << t << endl;
        sum += t;
    }
    return sum;
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Input the value : ";
    cin >> n;
    int result = sum(n);
    cout << "The sum of the above series is: " << result << endl;
    return 0;
}