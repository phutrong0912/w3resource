/*Write a C++ program to list non-prime numbers from 1 to an upperbound. C & C++

Sample Output:
Input the upperlimit: 25
The non-prime numbers are:
4 6 8 9 10 12 14 15 16 18 20 21 22 24 25*/

#include <iostream>
using namespace std;

void Eratos(bool Prime[], int n)
{
    for (int i = 0; i <= n; i++)
    {
        Prime[i] = true;
    }
    Prime[0] = false;
    Prime[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (Prime[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                Prime[j] = false;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Input the upperlimit: ";
    cin >> n;
    bool Prime[1000];
    Eratos(Prime, n);
    cout << "The non-prime numbers are: " << endl;
    for (int i = 2; i <= n; i++)
    {
        if (!Prime[i])
        {
            cout << i << " ";
        }
    }
    return 0;
}
