/*Write a C++ program that displays the sum of the n terms of even natural numbers.

Sample Output:
Input number of terms: 5
The even numbers are: 2 4 6 8 10
The Sum of even Natural Numbers upto 5 terms: 30*/

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
        int even = 2 * i ;
        cout <<even<<" ";
        s += even;
    }
    cout << endl;
    cout << "The Sum of even Natural Numbers upto " << n << " terms: " << s;
    return 0;
}
