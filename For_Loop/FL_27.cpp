/*Write a program in C++ to display the first n terms of the Fibonacci series.

Sample Output:
Input number of terms to display: 10
Here is the Fibonacci series upto to 10 terms:
0 1 1 2 3 5 8 13 21 34*/

#include <iostream>
using namespace std;

void fibonacci(int n)
{
    int a = 0, b = 1;
    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Input number of terms to display: ";
    cin >> n;
    cout << "Here is the Fibonacci series upto " << n << " terms: "<<endl;
    fibonacci(n);
    return 0;
}