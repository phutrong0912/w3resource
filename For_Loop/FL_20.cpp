/*Write a C++ program that displays the sum of n odd natural numbers.
Sample Output:
Input number of terms: 5
The odd numbers are: 1 3 5 7 9
The Sum of odd Natural Numbers upto 5 terms: 25*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, s = 0;
    cout << "Input number of terms: ";
    cin >> n;
    cout << "The odd numbers are: ";
    for (int i = 1; i <= n; i++)
    {
        int odd = 2 * i - 1;
        cout << odd<<" ";
        s += odd;
    }
    cout << endl;
    cout << "The Sum of odd Natural Numbers upto " << n << " terms: " << s;
    return 0;
}
