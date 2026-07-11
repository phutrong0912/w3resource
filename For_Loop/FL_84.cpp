/*Write a C++ program to compute the sum of the digits of an integer using a function. C & C++
Sample Output:
Input any number: 255 The sum of the digits of the number 255 is: 12*/

#include <iostream>
using namespace std;

int sumOfDigits(int n)
{
    int sum = 0;

    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Input any number: ";
    cin >> n;
    cout << "The sum of the digits of the number " << n << " is: " << sumOfDigits(n) << endl;
    return 0;
}
