/*Write a program in C++ to display the n terms of a harmonic series and their sum.

1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms.
Sample Output:
Input number of terms: 5
1/1 + 1/2 + 1/3 + 1/4 + 1/5
The sum of the series upto 5 terms: 2.28333*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    double s = 0;
    cout << "Input number of terms: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i < n)
        {
            cout << "1/" << i <<" + ";
            s += 1 / (double)i;
        }
        if (i==n){
            cout << "1/" << i;
            s += 1 /(double) i;
        }
    }
    cout << endl;
    cout << "The Sum of even Natural Numbers upto " << n << " terms: " << s;
    return 0;
}
